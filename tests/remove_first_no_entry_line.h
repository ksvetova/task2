#ifndef REMOVE_FIRST_NO_ENTRY_LINE_H
#define REMOVE_FIRST_NO_ENTRY_LINE_H
#include "main.h"

/*Тестирование функции удаления первой непустой строки */


TEST(r1ne, test1 ) {
  /* тест на проверку функции, если первая строка файла пустая, позитивный тест
  input:
  
    Июнь — сессия 
    Июль — отдых
    Август — отдых
  
  expected:
  |
  Июль — отдых
  Август — отдых

  
 */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out2.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp2.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp2.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    remove_first_no_entry_line(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2.txt", "r") : expectedData = fopen("/../../test2/gtest-master/tests/expected/expected2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out2.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(r1ne, test2) {
    /* тест на провеку функции, если первая строка непустая, позитивный тест
    input:
    stroka1
    stroka2
    stroka3
    stroka4

    expected:
    stroka2
    stroka3
    stroka4

    
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out3.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp3.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp3.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    remove_first_no_entry_line(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out3.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(r1ne, test3) {
    /*  тест на проверку, если первая строка непустая */

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out9.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp9.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp9.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    remove_first_no_entry_line(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out9.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(r1ne, test4) {
    /* тест на проверку функции, если первая строка начинается с пробела, позитивный
    input:
                  /^$%^#%^#%^#%^#&
    str1
    str2

    expected:
    str1
    sr2

    */

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out10.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out10.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp10.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp10.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    remove_first_no_entry_line(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected10.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected10.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out10.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out10.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // REMOVE_FIRST_NO_ENTRY_LINE_H
