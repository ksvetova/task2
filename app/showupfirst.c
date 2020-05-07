/**
 * showupfirst.c -- капитализация всех символов, которым предществует пробел
 */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include "common.h"
#include "text/text.h"

void toup(char *s){
    int len = (int)strlen(s);
    int i;
    for (i = 0; i < len - 1; i++){
        if(isspace(s[i])) {
            s[i+1]= (char)toupper(s[i+1]);
        }
    }
}
static void showupfirst_line(int index, char *contents, int cursor, void *data);

/**
 * Выводит текст в верхнем регистре
 */
void showupfirst(text txt)
{
    /* Применяем функцию showupper_line к каждой строке текста */
    process_forward(txt, showupfirst_line, NULL);
    printf("\n");
}

static void showupfirst_line(int index, char *contents, int cursor, void *data)
{
    assert(contents != NULL);

    UNUSED(index);
    UNUSED(data);

    /* Капитализация символов */
    char line[MAXLINE];
    char output_line[MAXLINE];
    strcpy(line, contents);

    if (cursor > 0){
        strncpy(output_line, line, (unsigned long)cursor);
        output_line[cursor] = '|';
        strcpy(output_line+cursor+1, line+cursor);
        toup(output_line);
        printf("%s", output_line);
    } else {
        toup(line);
        printf("%s", line);
    }
}
