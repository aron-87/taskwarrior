////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_LABEL_DEP      "Związane"
#define STRING_COLUMN_LABEL_DEP_S    "Zwi"
#define STRING_COLUMN_LABEL_DESC     "Opis"
#define STRING_COLUMN_LABEL_DUE      "Do"
#define STRING_COLUMN_LABEL_END      "Koniec"
#define STRING_COLUMN_LABEL_ENTERED  "Dodane"
#define STRING_COLUMN_LABEL_COUNT    "Ile"
#define STRING_COLUMN_LABEL_COMPLETE "Ukończone"
#define STRING_COLUMN_LABEL_MOD      "Zmienione"
#define STRING_COLUMN_LABEL_ADDED    "Dodane"
#define STRING_COLUMN_LABEL_AGE      "Wiek"
#define STRING_COLUMN_LABEL_PROJECT  "Projekt"
#define STRING_COLUMN_LABEL_UNTIL    "Do"
#define STRING_COLUMN_LABEL_WAIT     "Czeka"
#define STRING_COLUMN_LABEL_WAITING  "Czeka dopóki"
#define STRING_COLUMN_LABEL_RECUR    "Period"
#define STRING_COLUMN_LABEL_RECUR_L  "Periodyczny"
#define STRING_COLUMN_LABEL_START    "Start"
#define STRING_COLUMN_LABEL_STARTED  "Rozpoczęte"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Status"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "W toku"
#define STRING_COLUMN_LABEL_STAT_CO  "Ukończone"
#define STRING_COLUMN_LABEL_STAT_DE  "Usnięte"
#define STRING_COLUMN_LABEL_STAT_WA  "Zawieszone"
#define STRING_COLUMN_LABEL_STAT_RE  "Zależne"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "D"
#define STRING_COLUMN_LABEL_STAT_W   "W"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Tagi"
#define STRING_COLUMN_LABEL_TAG      "Tag"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Pilność"
#define STRING_COLUMN_LABEL_NAME     "Nazwa"
#define STRING_COLUMN_LABEL_VALUE    "Wartość"
#define STRING_COLUMN_LABEL_DATE     "Data"
#define STRING_COLUMN_LABEL_COLUMN   "Kolumny"
#define STRING_COLUMN_LABEL_STYLES   "Formaty"
#define STRING_COLUMN_LABEL_EXAMPLES "Przykłady"
#define STRING_COLUMN_LABEL_SCHED    "Zaplanowane"
#define STRING_COLUMN_LABEL_UDA      "Nazwa"
#define STRING_COLUMN_LABEL_TYPE     "Typ"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Etykieta"
#define STRING_COLUMN_LABEL_DEFAULT  "Domyślne"
#define STRING_COLUMN_LABEL_VALUES   "Dozwolone Wartości"
#define STRING_COLUMN_LABEL_UDACOUNT "Licznik Użycia"
#define STRING_COLUMN_LABEL_ORPHAN   "Osierocone UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "home @chore next"
#define STRING_COLUMN_EXAMPLES_PROJ  "dom.ogród"
#define STRING_COLUMN_EXAMPLES_PAR   "dom"
#define STRING_COLUMN_EXAMPLES_IND   "  dom.ogród"
#define STRING_COLUMN_EXAMPLES_DESC  "Przewieś swoje ubrania na dolny wieszak"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Odrazu przed obiadem"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Jesli grasz mecz tego popołudnia"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Przed napisaniem listu do domu"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Jeśli nie udajesz się do fryzjera"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_VERSION_USAGE     "Pokazuje wersję programu taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Pokazuje numer wersji programu taskwarrior"
#define STRING_CMD_VERSION_DOCS      "Dokumentację dla taskwarrior można znaleźć z pomocą 'man task', 'man taskrc', 'man task-tutorial', 'man task-color', 'man task-sync', 'man task-faq' lub pod adresem http://taskwarrior.org"
#define STRING_CMD_VERSION_UNKNOWN   "nieznana"
#define STRING_CMD_EXEC_USAGE        "Wykonuje zewnętrzne polecenia i skrypty"
#define STRING_CMD_URGENCY_USAGE     "Wyświetla pomiar ważności zadania"
#define STRING_CMD_URGENCY_RESULT    "zadanie {1} ważność {2}"
#define STRING_CMD_ADD_USAGE         "Dodaje nowe zadanie"
#define STRING_CMD_ADD_FEEDBACK      "Utworzono zadanie {1}."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Dodaje nowe, ukończone zadanie"
#define STRING_CMD_LOG_NO_RECUR      "Nie możesz logować zadania cyklicznego."
#define STRING_CMD_LOG_NO_WAITING    "Nie możesz logować zadania czekającego."

//#define STRING_CMD_LOG_LOGGED        "Zadanie w logu."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Pokazuje IDki pasujących zadań, w formie zakresu"
#define STRING_CMD_IDS_USAGE_LIST    "Pokazuje IDki pasujących zadań, w formie listy"
#define STRING_CMD_IDS_USAGE_ZSH     "Pokazuje IDki i opisy pasujących zadań"
#define STRING_CMD_UDAS_USAGE        "Pokazuje zdefiniowane UDA"
#define STRING_CMD_UDAS_COMPL_USAGE  "Pokazuje zdefiniowane UDA w celach autouzupełniania"
#define STRING_CMD_UUIDS_USAGE_RANGE "Pokazuje UUID pasujących zadań, w formie listy rozdzilonej przecinkami"
#define STRING_CMD_UUIDS_USAGE_LIST  "Pokazuje UUID pasujących zadań, w formie listy"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Pokazuje UUID i opis pasujących zadań"
#define STRING_CMD_INFO_USAGE        "Pokazuje wszystkie dane i metadane"
#define STRING_CMD_INFO_BLOCKED      "To zadanie jest blokowane przez"
#define STRING_CMD_INFO_BLOCKING     "To zadanie blokuje"
#define STRING_CMD_INFO_UNTIL        "Do"
#define STRING_CMD_INFO_MODIFICATION "Modyfikacja"
#define STRING_CMD_INFO_MODIFIED     "Ostatnio zmodyfikowane"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Odwraca ostatnią zmianę w zadaniu"
#define STRING_CMD_STATS_USAGE       "Pokazuje statystyki bazy danych zadań"
#define STRING_CMD_STATS_CATEGORY    "Kategoria"
#define STRING_CMD_STATS_DATA        "Data"
#define STRING_CMD_STATS_TOTAL       "Razem"
#define STRING_CMD_STATS_ANNOTATIONS "Notatek"
#define STRING_CMD_STATS_UNIQUE_TAGS "Unikalnych tagów"
#define STRING_CMD_STATS_PROJECTS    "Projekty"
#define STRING_CMD_STATS_DATA_SIZE   "Rozmiar danych"
#define STRING_CMD_STATS_UNDO_TXNS   "Transakcji Cofnij"
#define STRING_CMD_STATS_BACKLOG     "Transakcji Sync backlog"
#define STRING_CMD_STATS_TAGGED      "Otagowanych zadań"
#define STRING_CMD_STATS_OLDEST      "Najstarsze zadanie"
#define STRING_CMD_STATS_NEWEST      "Najnowsze zadanie"
#define STRING_CMD_STATS_USED_FOR    "Zadanie używane przez"
#define STRING_CMD_STATS_ADD_EVERY   "Zadanie dodawane co"
#define STRING_CMD_STATS_COMP_EVERY  "Zadanie kończone co"
#define STRING_CMD_STATS_DEL_EVERY   "Zadanie usuwane co"
#define STRING_CMD_STATS_AVG_PEND    "Średni czas w toku"
#define STRING_CMD_STATS_DESC_LEN    "Średnia długość opisu"
#define STRING_CMD_STATS_CHARS       "{1} znaków"
#define STRING_CMD_STATS_BLOCKED     "Zadania blokowane"
#define STRING_CMD_STATS_BLOCKING    "Zadania blokujące"
#define STRING_CMD_REPORTS_USAGE     "Lista wszystkich wspieranych raportów"
#define STRING_CMD_REPORTS_REPORT    "Raport"
#define STRING_CMD_REPORTS_DESC      "Opis"
#define STRING_CMD_REPORTS_SUMMARY   "{1} raportów"
#define STRING_CMD_TAGS_USAGE        "Pokazuje listę użytych tagów"
#define STRING_CMD_COMTAGS_USAGE     "Pokazuje listę użytych tagów dla celów autouzupełniania"
#define STRING_CMD_TAGS_SINGLE       "1 tag"
#define STRING_CMD_TAGS_PLURAL       "{1} tagów"
#define STRING_CMD_TAGS_NO_TAGS      "Brak tagów."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Pokazuje raport historii zadań w ujęciu miesięcznym"
#define STRING_CMD_HISTORY_YEAR      "Rok"
#define STRING_CMD_HISTORY_MONTH     "Miesiąc"
#define STRING_CMD_HISTORY_ADDED     "Dodane"
#define STRING_CMD_HISTORY_COMP      "Ukończone"
#define STRING_CMD_HISTORY_DEL       "Usunięte"
#define STRING_CMD_HISTORY_NET       "Net"
#define STRING_CMD_HISTORY_USAGE_A   "Pokazuje raport historii zadań w ujęciu rocznym"
#define STRING_CMD_HISTORY_AVERAGE   "Średnia"
#define STRING_CMD_HISTORY_LEGEND    "Legenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legenda: + dodane, X ukończone, - usunięte"
#define STRING_CMD_GHISTORY_USAGE_M  "Pokazuje graficzny raport z historii zadań, w miesięcznych podsumowaniach"
#define STRING_CMD_GHISTORY_USAGE_A  "Pokazuje graficzny raport z historii zadań, w rocznych podsumowaniach"
#define STRING_CMD_GHISTORY_YEAR     "Rok"
#define STRING_CMD_GHISTORY_MONTH    "Miesiąc"
#define STRING_CMD_GHISTORY_NUMBER   "Liczba Dodanych/Ukończonych/Usuniętych"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_PROJECTS_USAGE    "Pokazuje statystyki wszystkich projektów"
#define STRING_CMD_PROJECTS_USAGE_2  "Pokazuje tylko nazwy prowadzonych projektów"
#define STRING_CMD_PROJECTS_NO       "Brak projektów"
#define STRING_CMD_PROJECTS_NONE     "(brak)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} projekt"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projektów"
#define STRING_CMD_PROJECTS_TASK     "({1} zadanie)"
#define STRING_CMD_PROJECTS_TASKS    "({1} zadań)"
#define STRING_CMD_SUMMARY_USAGE     "Pokazuje raport ze stanu zadań per projekt"
#define STRING_CMD_SUMMARY_PROJECT   "Projekt"
#define STRING_CMD_SUMMARY_REMAINING "Pozostało"
#define STRING_CMD_SUMMARY_AVG_AGE   "Średni wiek"
#define STRING_CMD_SUMMARY_COMPLETE  "Ukończone"
#define STRING_CMD_SUMMARY_NONE      "(brak)"
#define STRING_CMD_COUNT_USAGE       "Zlicza pasujące zadania"
#define STRING_CMD_GET_USAGE         "DOM Akcesor"
#define STRING_CMD_GET_NO_DOM        "Brak zdefiniowanej referencji do DOM."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Nie zdefiniowano UDA"
#define STRING_CMD_UDAS_SUMMARY      "{1} zdefiniowane UDA"
#define STRING_CMD_UDAS_SUMMARY2     "{1} zdefiniowanych UDA"
#define STRING_CMD_UDAS_ORPHAN       "{1} Osierocone UDA"
#define STRING_CMD_UDAS_ORPHANS      "{1} Osierocone UDA"

#define STRING_CMD_DELETE_USAGE      "Usuwa wybrane zadanie"
#define STRING_CMD_DELETE_CONFIRM    "Usunąć zadanie {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Usuwanie zadania {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Usuwanie zadania cyklicznego {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "To zadanie jest cykliczne. Czy chcesz usunąć wszystkie pozostałe cykle tego zadania?"
#define STRING_CMD_DELETE_NO         "Zadanie nie zostało usunięte"
#define STRING_CMD_DELETE_NOT_DEL    "Zadanie {1} '{2}' jest nieusuwalne."
#define STRING_CMD_DELETE_1          "Usunięto {1} zadanie "
#define STRING_CMD_DELETE_N          "Usunięto {1} zadań"

#define STRING_CMD_DUPLICATE_USAGE   "Tworzy kopię wybranego zadania"
#define STRING_CMD_DUPLICATE_REC     "Uwaga: zadanie {1} było cyklicznym zadaniem-rodzicem. Kopia jest nim również"
#define STRING_CMD_DUPLICATE_NON_REC "Uwaga: zadanie {1} było cykliczne. Kopia nie jest cykliczna."
#define STRING_CMD_DUPLICATE_CONFIRM "Skopiować zadanie {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Skopiowano zadanie {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Nie skopiowano zadańia"
#define STRING_CMD_DUPLICATE_1       "Skopiowano {1} zadanie."
#define STRING_CMD_DUPLICATE_N       "Skopiowano {1} zadań."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_APPEND_USAGE      "Dodaje ciąg na końcu opisu zadania"
#define STRING_CMD_APPEND_1          "Dodano ciąg do opisu {1} zadania"
#define STRING_CMD_APPEND_N          "Dodano ciąg do opisu {1} zadań"
#define STRING_CMD_APPEND_TASK       "Dodawanie ciągu do opisu zadania {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Dodawanie ciągu do opisu zadania cyklicznego {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "To zadanie jest cykliczne. Czy chcesz dodać ciąg do opisu kolejnych zadań w cyklu?"
#define STRING_CMD_APPEND_CONFIRM    "Dodać ciąg do opisu zadania {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Nie dodano ciągu do opisu."

#define STRING_CMD_PREPEND_USAGE     "Dodaje ciąg na początku opisu zadania"
#define STRING_CMD_PREPEND_1         "Dodano ciąg do opisu {1} zadania."
#define STRING_CMD_PREPEND_N         "Dodano ciąg do opisu {1} zadań."
#define STRING_CMD_PREPEND_TASK      "Dodawanie ciągu do opisu zadania {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Dodawanie ciągu do opisu zadania cyklicznego {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "To zadanie jest cykliczne. Czy chcesz dodać ciąg do opisu kolejnych zadań w cyklu?"
#define STRING_CMD_PREPEND_CONFIRM   "Dodać ciąg do opisu zadania {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Nie dodano ciągu do opisu."

#define STRING_CMD_ANNO_USAGE        "Dodaje komentarz do istniejącego zadania"
#define STRING_CMD_ANNO_CONFIRM      "Skomentować zadanie {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Komentowanie zadania {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Komentowanie zadania cyklicznego {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "To zadanie jest cykliczne. Czy chcesz skomentować kolejne zadania w cyklu?"
#define STRING_CMD_ANNO_NO           "Nie skomentowano zadania."
#define STRING_CMD_ANNO_1            "Skomentowano {1} zadanie."
#define STRING_CMD_ANNO_N            "Skomentowano {1} zadań."

#define STRING_CMD_DENO_USAGE        "Usuwa komentarz"
#define STRING_CMD_DENO_NONE         "Wybrane zadanie nie posiada komentarza do usunięcia."
#define STRING_CMD_DENO_CONFIRM      "Usunąć komentarz zadania {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Znaleziono i usunięto komentarz '{1}'."
#define STRING_CMD_DENO_NOMATCH      "Nie znaleziono żadnego pasującego komentarza do usunięcia '{1}'."
#define STRING_CMD_DENO_NO           "Nie usunięto komentarza."
#define STRING_CMD_DENO_1            "Usunięto {1} komentarz."
#define STRING_CMD_DENO_N            "Usunięto {1} komentarzy."

#define STRING_CMD_IMPORT_USAGE      "Importuje pliki JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Zaimportowano {1} zadań."
#define STRING_CMD_IMPORT_FILE       "Importowanie '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Komentarz nie posiada treści: {1}"
#define STRING_TASK_NO_ENTRY         "Komentarz nie posiada daty utworzenia: {1}"
#define STRING_CMD_SYNC_USAGE        "Synchronizuje dane z serwerem zadań"
#define STRING_CMD_SYNC_NO_SERVER    "Serwer zadań jest nieskonfigurowany."
#define STRING_CMD_SYNC_BAD_CRED     "Zaburzone uwierzytelnianie dla serwera zadań."
#define STRING_CMD_SYNC_BAD_CERT     "Nieznaleziony certyfikat serwera zadań."
#define STRING_CMD_SYNC_BAD_KEY      "Nieznaleziony klucz serwera zadań."
#define STRING_CMD_SYNC_ADD          "   dodaj {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modyfikuj {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Synchronizacja z {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Synchronizacja udana"
#define STRING_CMD_SYNC_SUCCESS1     "Synchronizacja udana.  {1} wysłanych zmian."
#define STRING_CMD_SYNC_SUCCESS2     "Synchronizacja udana.  {1} ściągniętych zmian."
#define STRING_CMD_SYNC_SUCCESS3     "Synchronizacja udana.  {1} wysłanych zmian, {2} ściągniętych zmian."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Synchronizacja udana.  Żadnych zmian."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Synchronizacja nieudana.  Nieudane uwierzytelnianie lub nie aktywne konto na serwerze zadań."
#define STRING_CMD_SYNC_FAIL_ERROR   "Synchronizacja nieudana.  Serwer zadań zwrócił błąd: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Synchronizacja nieudana.  Nie można połączyć się z serwerem zadań."
#define STRING_CMD_SYNC_BAD_SERVER   "Synchronizacja nieudana.  Uszkodzone ustawienia konfiguracji '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior zbudowany bez wsparcia dla GnuTLS. Synchronizacja niedostępna."
#define STRING_CMD_SYNC_INIT         "Proszę potwierdzić zamiar wysłania na serwer zadań wszystkich twoich oczekujących zadań"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior nie wykona inicjalizacji dla pierwszej synchronizacji"
#define STRING_CMD_SYNC_RELOCATE0    "Konto na serwerze zostało przeniesione.  Proszę uaktualnij swoją konfigurację używając:"
#define STRING_CMD_SYNC_RELOCATE1    "konfiguracji taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "Certyfikat CA nie znaleziony."
#define STRING_CMD_SYNC_TRUST_CA     "Powinieneś udostępnić certyfikat CA lub nadpisać weryfikację. Wybierz jedną z opcji."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Szczegóły platformy i środowiska budowania"
#define STRING_CMD_DIAG_PLATFORM     "Platforma"
#define STRING_CMD_DIAG_COMPILER     "Kompilator"
#define STRING_CMD_DIAG_VERSION      "Wersja"
#define STRING_CMD_DIAG_CAPS         "Flagi"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Opcje budowania"
#define STRING_CMD_DIAG_BUILT        "Zbudowano"
#define STRING_CMD_DIAG_COMMIT       "Zatwierdzenie"
#define STRING_CMD_DIAG_FOUND        "(jest)"
#define STRING_CMD_DIAG_MISSING      "(brak)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Włączone"
#define STRING_CMD_DIAG_DISABLED     "Wyłączone"
#define STRING_CMD_DIAG_CONFIG       "Konfiguracja"
#define STRING_CMD_DIAG_TESTS        "Testy"
#define STRING_CMD_DIAG_UUID_SCAN    "Zeskanowano {1} zadań w poszukiwaniu zdublowanych UUIDów:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Znaleziono duplikaty {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "Nie znaleziono duplikatów"
#define STRING_CMD_DIAG_NONE         "-brak-"
#define STRING_CMD_DIAG_HOOKS        "Haki"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generuje listę wszystkich poleceń dla funkcji autouzupełniania"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generuje listę wszystkich poleceń dla funkcji autouzupełniania w powłoce zsh"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generuje listę wszystkich aliasów dla funkcji autouzupełniania"

#define STRING_CMD_MODIFY_USAGE1     "Modyfikuje istniejące zadanie pod kątem podanych argumentów."
#define STRING_CMD_MODIFY_NO_DUE     "Nie możesz specyfikować rekurencyjnego zadania bez podania terminu."
#define STRING_CMD_MODIFY_REM_DUE    "Nie możesz usunąć właściwości 'termin' z zadanie rekurencyjnego."
#define STRING_CMD_MODIFY_REC_ALWAYS "Nie możesz usunąć właściwości 'rekurencja' z zadania rekurencyjnego."
#define STRING_CMD_MODIFY_TASK       "Modyfikacja zadania {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Modyfikacja zadania rekurencyjnego {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Zmodyfikowano {1} zadanie."
#define STRING_CMD_MODIFY_N          "Zmodyfikowano {1} zadań."
#define STRING_CMD_MODIFY_NO         "Zadanie nie zmodyfikowane."
#define STRING_CMD_MODIFY_CONFIRM    "Zmienić zadanie {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "To zadanie jest cykliczne. Czy chcesz zmodyfikować kolejne zadania w cyklu?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Należy podać tekst"
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "Wszystkie kolory, próbki lub legenda"
#define STRING_CMD_COLOR_HERE        "To są aktualnie używane kolory:"
#define STRING_CMD_COLOR_COLOR       "Kolor"
#define STRING_CMD_COLOR_DEFINITION  "Definicja"
#define STRING_CMD_COLOR_EXPLANATION "Użyj tego polecenia aby sprawdzić jak twój terminal wyświetla kolory."
#define STRING_CMD_COLOR_16          "16 kolorów (wsparcie dla podkreślenia, pogrubienia, jasnego tła):"
#define STRING_CMD_COLOR_256         "256 kolorów (wsparcie dla podkreślenia):"
#define STRING_CMD_COLOR_YOURS       "Twoja próbka kolorów:"
#define STRING_CMD_COLOR_BASIC       "Podstawowe kolory"
#define STRING_CMD_COLOR_EFFECTS     "Efekty tekstu"
#define STRING_CMD_COLOR_CUBE        "Kostka kolorów rgb"
#define STRING_CMD_COLOR_RAMP        "Odcienie szarości"
#define STRING_CMD_COLOR_TRY         "Spróbuj wykonać '{1}'."
#define STRING_CMD_COLOR_OFF         "Aktualnie, kolorowanie jest wyłączone w twoim pliku .taskrc. Aby włączyć kolorowanie, usuń linie 'color=off', lub zmień wartość 'off' na 'on'."
#define STRING_CMD_CONFIG_USAGE      "Zmienia konfigurację programu"
#define STRING_CMD_CONFIG_CONFIRM    "Czy na pewno chcesz zmienić wartość '{1}' z '{2}' na '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Czy na pewno chcesz dodać '{1}' z wartością '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Czy na pewno chcesz usunąć '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Nie znaleziono wpisu '{1}'."
#define STRING_CMD_CONFIG_FILE_MOD   "Plik konfiguracyjny {1} został zmodyfikowany."
#define STRING_CMD_CONFIG_NO_NAME    "Podaj nazwę zmiennej w konfiguracji do zmiany."
#define STRING_CMD_HCONFIG_USAGE     "Wylistuj wszystkie zmienne konfiguracji."
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "Liczba kolumn i nagłówków nie zgadza się dla raportu '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} pokazanych"
#define STRING_CMD_CUSTOM_COUNT      "1 zadanie"
#define STRING_CMD_CUSTOM_COUNTN     "{1} zadań"
#define STRING_CMD_CUSTOM_TRUNCATED  "przycięte do {1} linii"
#define STRING_CMD_TIMESHEET_USAGE   "Tygodniowe podsumowanie z ukończonych i uruchomionych zadań"
#define STRING_CMD_TIMESHEET_STARTED "Uruchomiono ({1} zadań)"
#define STRING_CMD_TIMESHEET_DONE    "Ukończono ({1} zadań)"
#define STRING_CMD_BURN_USAGE_M      "Wyświetla miesięczny postęp w postaci wykresu."
#define STRING_CMD_BURN_USAGE_W      "Wyświetla tygodniowy postęp w postaci wykresu."
#define STRING_CMD_BURN_USAGE_D      "Wyświetla dzienny postęp w postaci wykresu."
#define STRING_CMD_BURN_TITLE        "Postęp"
#define STRING_CMD_BURN_TOO_SMALL    "Okno terminal jest za małe do wyświetlenia wykresu."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Dzienny"
#define STRING_CMD_BURN_WEEKLY       "Tygodniowy"
#define STRING_CMD_BURN_MONTHLY      "Miesięczny"
#define STRING_CMD_BURN_STARTED      "Started"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Done"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pending"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Brak konwergencji" // ?
#define STRING_CMD_CAL_USAGE         "Wyświetla kalendarz z zadaniami z terminem"
#define STRING_CMD_CAL_BAD_MONTH     "Argument '{1}' nie jest poprawnym miesiącem"
#define STRING_CMD_CAL_BAD_ARG       "Nie rozpoznany argument '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Data"
#define STRING_CMD_CAL_LABEL_HOL     "Wakacje"
#define STRING_CMD_CAL_SUN_MON       "Początek tygodnia może mieć wartość 'Niedziela' lub 'Poniedziałek'."
#define STRING_CMD_CALC_USAGE        "Kalkulator"

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Brak zadań."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nie określono zadań"
#define STRING_FEEDBACK_NO_MATCH     "Nie znaleziono pasujących."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 zadanie)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} zadania)"
#define STRING_FEEDBACK_DELETED      "{1} będzie usunięte."
#define STRING_FEEDBACK_DEP_SET      "Zależności będą ustawione na '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Zależności będą zmienione z '{1}' na '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Zależności '{1}' usunięte."
#define STRING_FEEDBACK_DEP_WAS_SET  "Zależności ustawione na '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Zależności zmienione z '{1}' na '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} będzie ustawione na '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} będzie ustawione z '{2}' na '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} usunięte."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} usunięte (czas trwania: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} ustawiono na '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} zmieniono z '{2}' na '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Notatka '{1}' dodana."
#define STRING_FEEDBACK_ANN_DEL      "Notatka '{1}' usunięta."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Notatka zmieniona na '{1}'."
#define STRING_FEEDBACK_NOP          "Nie będą wprowadzone żadne zmiany."
#define STRING_FEEDBACK_WAS_NOP      "Nie wprowadzono żadnych zmian."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Specjalny tag 'nocolor' wyłączy reguły kolorowania dla tego zadania."
#define STRING_FEEDBACK_TAG_NONAG    "Specjalny tag 'nonag' uchroni przed upierdliwością kiedy zadanie jest modyfikowane."
#define STRING_FEEDBACK_TAG_NOCAL    "Specjalny tag 'nocal' spowoduje nie dodawanie zadania do kalendarza."
#define STRING_FEEDBACK_TAG_NEXT     "Specjalny tag 'next' podniesie pilność tego zadania co spowoduje wyświetlenie go w raporcie 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Odblokowane {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Zadanie {1} '{2}' jest przedawnione i zostało usunięte."
#define STRING_FEEDBACK_BACKLOG_N    "Wykryto {1} lokalne zmiany. Wymagana synchronizacja."
#define STRING_FEEDBACK_BACKLOG      "Wykryto {1} lokalne zmiany. Wymagana synchronizacja."

// 'show' command
#define STRING_CMD_SHOW              "Pokazuje wszystkie zmienne konfiguracji lub ich podzbiór"
#define STRING_CMD_SHOW_ARGS         "Możesz jedynie wybrać wszystkie lub wyszukać na podstawie ciągu."
#define STRING_CMD_SHOW_NONE         "Brak dopasowania zmiennych konfiguracyjnych."
#define STRING_CMD_SHOW_UNREC        "Twój plik .taskrc zawiera następujące nierozpoznane zmienne:"
#define STRING_CMD_SHOW_DIFFER       "Niektóre ze zmiennych w twoim .taskrc różnią się od wartości domyślnych."
#define STRING_CMD_SHOW_EMPTY        "Błąd konfiguracji: .taskrc jest puste."
#define STRING_CMD_SHOW_DIFFER_COLOR "Są one podświetlone na {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Błąd konfiguracji: {1} zawiera nierozpoznaną wartość '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Błąd konfiguracji: data.location nie ustawione w pliku .taskrc."
#define STRING_CMD_SHOW_LOC_EXIST    "Błąd konfiguracji: data.location zawiera nazwę katalogu który nie istnieje lub jest nieosiągalny."
#define STRING_CMD_SHOW_CONF_VAR     "Zmienna Konfiguracji"
#define STRING_CMD_SHOW_CONF_VALUE   "Wartość"
#define STRING_CMD_SHOW_CONF_DEFAULT "Domyślna wartość"
#define STRING_CMD_SHOWRAW           "Pokazuje kompletną konfiguracjię w formacie dogodnym dla maszyny"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior nie wspiera więcej formatu plików 1, wcześniej używanego pomiędzy 27 Listopada 2006 i 31 Grudnia 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior nie wspiera więcej formatu plików 2, wcześniej używanego pomiędzy 1 Stycznia 2008 i 12 Kwietnia 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior nie wspiera więcej formatu plików 3, wcześniej używanego pomiędzy 23 Marca 2009 i 16 Maja 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Nierozpoznany format pliku programu taskwarrior."
#define STRING_TASK_DEPEND_ITSELF    "Zadanie nie może zależeć od samego siebie."
#define STRING_TASK_DEPEND_MISS_CREA "Nie można dodać zależności dla zadania {1} - nie znaleziono."
#define STRING_TASK_DEPEND_MISS_DEL  "Nie można usunąć zależności dla zadania {1} - nie znaleziono."
#define STRING_TASK_DEPEND_DUP       "Zadanie {1} już jest zależne od zadania {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Wykryto i nie dopuszczono do zależności cyklicznej."
#define STRING_TASK_VALID_BLANK      "Nie można dodać pustego zadania."
#define STRING_TASK_VALID_BEFORE     "Uwaga: podałeś datę '{1}' jako datę po '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Zadanie cykliczne musi posiadać datę zakończenia."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Niedopuszczono do wykonania polecenia."
#define STRING_TASK_SAFETY_ALLOW     "Brak filtra, z aktywną flagą 'allow.empty.filter', nie podjęto akcji."
#define STRING_TASK_INVALID_COL_TYPE "Nierozpoznany typ kolumny '{1}' dla kolumny '{2}'"

#endif
