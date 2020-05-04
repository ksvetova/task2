TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    append_line.c \
    m.c \
    mklb.c \
    move.c \
     pn.c \
    pn1.c \
    process_forward.c \
    save.c \
    showdigitsonly.c

HEADERS += \
    _text.h \
    text.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
