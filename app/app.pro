TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    text/append_line.c \
    text/change_cursor_position.c \
    text/create_text.c \
    text/delete_line.c \
    text/process_forward.c \
    text/remove_all.c \
    editor.c \
    end_cursor.c \
    getcrsr.c \
    load.c \
    mwcrsr.c \
    remove_first_no_entry_line.c \
    show.c \
    showupfirst.c

HEADERS += \
    text/_text.h \
    text/text.h \
    data.h \
    common.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
