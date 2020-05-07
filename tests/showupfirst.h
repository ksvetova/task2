#ifndef SHOWUPFIRST_H
#define SHOWUPFIRST_H
#include "main.h"
TEST(showupfirst, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out11.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out11.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp11.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp11.txt", MAXLINE);
    load(txt, inFile);

    showupfirst(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected11.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected11.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out11.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out11.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(showupfirst, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out12.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out12.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp12.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp12.txt", MAXLINE);
    load(txt, inFile);

    showupfirst(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected12.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected12.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out12.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out12.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(showupfirst, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out13.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out13.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp13.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp13.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 2);
    showupfirst(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected13.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected13.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out13.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out13.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(showupfirst, test4) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out14.txt", "wb") : outputFile = fopen("../../test2/gtest-master/tests/output/out14.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp14.txt", MAXLINE) : strncpy(inFile, "../../test2/gtest-master/tests/input/inp14.txt", MAXLINE);
    load(txt, inFile);

    showupfirst(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected14.txt", "r") : expectedData = fopen("../../test2/gtest-master/tests/expected/expected14.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out14.txt", "r") : outputData = fopen("../../test2/gtest-master/tests/output/out14.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // SHOWUPFIRST_H
