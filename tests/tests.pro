include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/text/_text.h \
    ../app/text/text.h \
    main.h \
    end_cursor.h \
    remove_first_no_entry_line.h \
    showupfirst.h

SOURCES +=     main.cpp \
    ../app/show.c \
    ../app/text/append_line.c \
    ../app/text/change_cursor_position.c \
    ../app/text/create_text.c \
    ../app/text/delete_line.c \
    ../app/text/process_forward.c \
    ../app/text/remove_all.c \
    ../app/mwcrsr.c \
    ../app/remove_first_no_entry_line.c \
    ../app/showupfirst.c \
    ../app/end_cursor.c \
    ../app/load.c

INCLUDEPATH += ../app

DISTFILES += \
    expected/expected1.txt \
    expected/expected2.txt \
    expected/expected3.txt \
    expected/expected4.txt \
    expected/expected5.txt \
    expected/expected6.txt \
    expected/expected7.txt \
    expected/expected8.txt \
    expected/expected9.txt \
    input/inp1.txt \
    input/inp2.txt \
    input/inp3.txt \
    input/inp4.txt \
    input/inp5.txt \
    input/inp6.txt \
    input/inp7.txt \
    input/inp8.txt \
    input/inp9.txt \
    output/out1.txt \
    output/out3.txt \
    output/out4.txt \
    output/out5.txt \
    output/out6.txt \
    output/out7.txt \
    output/out8.txt \
    output/out9.txt \
    output/output6.txt \
    output/out2.txt \
    input/inp10.txt \
    output/out10.txt \
    expected/expected10.txt \
    input/inp11.txt \
    output/out11.txt \
    expected/expected11.txt \
    input/inp12.txt \
    output/out12.txt \
    expected/expected12.txt \
    input/inp13.txt \
    output/out13.txt \
    expected/expected13.txt \
    input/inp14.txt \
    output/out14.txt \
    expected/expected14.txt
