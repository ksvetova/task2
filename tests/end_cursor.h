#ifndef END_CURSOR_H
#define END_CURSOR_H
#include "main.h"

TEST(mle, test1) {
    /*  Тест для проверки работы программы, изначально курсор в низу файла.
 Перемещаем на 1 1 и выполняем команду mle(перемещение курсора в конец строки)

    input:
    stroka1
    stroka2
    stroka3
    stroka4
    stroka5
    stroka6 
    
    expected:
    stroka1|
    stroka2
    stroka3
    stroka4
    stroka5
    stroka6
    */
    
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

TEST(mle, test2) {
 /*Тест для проверки работы  программы на пустой строке.Изначально курсор в самом низу файла.
  * Перемещаем на 1 1 на  и выполняем команду mle.
  * Результат: курсор переместился в конец строки
 input:
 str1
 str2
 str3

expected:
 |
 str1
 str2
 str3
*/
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
  /*Тест для проверки функции, если курсор в первой строке, n - позиции
  * курсор должен переместиться на первую строку и 12 позицию

 input:
 Iamverylongstring

expected:
Iamverylongstring|
*/

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

TEST(mle, test4) {
    /*тест для проверки функции, когда курсор в пустой строке между двумя непустыми строками
    input:
    Ты хочешь домой

    Они встретились вчера

    expected:
    Ты хочешь домой
    |
    Они встретились вчера
    */
    
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

TEST(mle, test5) {
    /*тест для проверки функции, если курсор находится в конце строки
    input:
    veryveryveryveryverylongstring
    
    expected:
    veryveryveryveryverylongstring|
    */

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

TEST(mle, test6) {
    /* тест функции, если строка начинается с пробелов
     input:
                    mskjkshdkj
    expected:
                   mskjkshdkj|
    */

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
