#ifndef END_CURSOR_H
#define END_CURSOR_H
#include "main.h"
/*Тест для проверки работы  программы.Изначально курсор в самом низу файла.
 * Перемещаем на 1 1 и выполняем команду mle.
 * Результат: курсор переместился в конец строки*/
TEST(mle, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out7.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp7.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp7.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected7.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected7.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out7.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
/*Тест для проверки работы  программы на пустой строке.Изначально курсор в самом низу файла.
 * Перемещаем на 1 1 на  и выполняем команду mle.
 * Результат: курсор переместился в конец строки*/
TEST(mle, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out1.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp1.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp1.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out1.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(mle, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out8.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp8.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp8.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 12);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out8.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
/*тест проверяет работу функции в пустой строке между не пустыми строками*/
TEST(mle, test4) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out4.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out4.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp4.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp4.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 2, 1);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected4.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected4.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out4.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out4.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
/*Тест на проверку работы функции,если курсор изначально находится в конце строки*/
TEST(mle, test5) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out5.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp5.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp5.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 31);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected5.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected5.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out5.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
/*Проверка работы функции, если строка начинается с пробелов*/
TEST(mle, test6) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output6.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp6.txt", MAXLINE) : strncpy(inFile, "../..//test2/gtest-master/tests/input/inp6.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    mle(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected6.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected6.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output6.txt", "r") : outputData = fopen("/../../test2/gtest-master/tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // END_CURSOR_H
