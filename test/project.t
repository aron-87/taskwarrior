#!/usr/bin/env python2.7
# -*- coding: utf-8 -*-
###############################################################################
#
# Copyright 2006 - 2015, Paul Beckingham, Federico Hernandez.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
#
# http://www.opensource.org/licenses/mit-license.php
#
###############################################################################

import sys
import os
import unittest
# Ensure python finds the local simpletap module
sys.path.append(os.path.dirname(os.path.abspath(__file__)))

from basetest import Task, TestCase


class TestProjects(TestCase):
    def setUp(self):
        self.t = Task()

        self.STATUS = ("The project '{0}' has changed\.  "
                       "Project '{0}' is {1} complete \({2} remaining\)\.")

    def test_project_summary_count(self):
        """'task projects' shouldn't consider deleted tasks in summary.
        Reported in bug 1044
        """
        self.t(("add", "project:A", "1"))
        self.t(("add", "project:B", "2"))
        self.t(("add", "project:B", "3"))
        self.t(("3", "delete"))
        code, out, err = self.t(("project:B", "projects"))

        expected = "1 project \(1 task\)"
        self.assertRegexpMatches(out, expected)

    def test_project_progress(self):
        """project status/progress is shown and is up-to-date"""

        code, out, err = self.t(("add", "one", "pro:foo"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "0%",
                                                         "1 task"))

        code, out, err = self.t(("add", "two", "pro:foo"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "0%",
                                                         "2 of 2 tasks"))

        code, out, err = self.t(("add", "three", "pro:foo"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "0%",
                                                         "3 of 3 tasks"))

        code, out, err = self.t(("add", "four", "pro:foo"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "0%",
                                                         "4 of 4 tasks"))

        code, out, err = self.t(("1", "done"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "25%",
                                                         "3 of 4 tasks"))

        code, out, err = self.t(("2", "delete"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "33%",
                                                         "2 of 3 tasks"))

        code, out, err = self.t(("3", "modify", "pro:bar"))
        self.assertRegexpMatches(err, self.STATUS.format("foo", "50%",
                                                         "1 of 2 tasks"))
        self.assertRegexpMatches(err, self.STATUS.format("bar", "0%",
                                                         "1 task"))

    def test_project_spaces(self):
        """projects with spaces are handled correctly"""

        self.t(("add", "hello", "pro:bob"))
        code, out, err = self.t(("1", "mod", 'pro:"foo bar"'))
        self.assertRegexpMatches(err, self.STATUS.format("foo bar", "0%",
                                                         "1 task"))

    def test_project_indentation(self):
        """check project/subproject indentation

        Reported in bug 1056

        See also the tests of helper functions for CmdProjects in util.t.cpp
        """
        self.t(("add", "testing", "project:existingParent"))
        self.t(("add", "testing", "project:existingParent.child"))
        self.t(("add", "testing", "project:abstractParent.kid"))
        self.t(("add", "testing", "project:.myProject"))
        self.t(("add", "testing", "project:myProject"))
        self.t(("add", "testing", "project:.myProject."))

        code, out, err = self.t(("projects",))

        order = (
            # NOTE all but abstractParent have 1 task hence the trailing space
            ".myProject ",
            ".myProject. ",
            "abstractParent\n",
            "  kid ",
            "existingParent ",
            "  child ",
            "myProject ",
        )

        lines = out.splitlines(True)  # True = keep newlines
        # position where project names start on the lines list
        position = 3

        for i, proj in enumerate(order):
            pos = position + i

            self.assertTrue(
                lines[pos].startswith(proj),
                msg=("Project '{0}' is not in line #{1} or has an unexpected "
                     "indentation.{2}".format(proj, pos, out))
            )


if __name__ == "__main__":
    from simpletap import TAPTestRunner
    unittest.main(testRunner=TAPTestRunner())

# vim: ai sts=4 et sw=4
