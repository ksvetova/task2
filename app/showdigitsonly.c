/**
 * showdigitsonly.c -- реализует команду вывода хранимого текста заглавными буквами на экран
 *
 * Copyright (c) 2020,Svetova Kristina  <ksvetova@cs.petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "_text.h"

static void show_line(int index, char *contents, int cursor, void *data);

/**
 * Выводит содержимое указанного файла заглавными буквами на экран
 */
int showdigitsonly(text txt)
{
    /* Проверяем, имеется ли текст */
        if (txt == NULL ||  txt->length == 0) {
            fprintf(stderr, "There are already no any lines in the text!\n");
            return 1;
        }

    /* Применяем функцию show_line к каждой строке текста */
    process_forward(txt, show_line, NULL);
    return 0;
}

/**
 * Выводит содержимое указанного файла на экран
 */
static void show_line(int index, char *contents, int cursor, void *data)
{
    FILE* f;
    f=fopen("showdigitsonly", "a");

    /* Функция обработчик всегда получает существующую строку */
    assert(contents != NULL);
    
    /* Декларируем неиспользуемые параметры*/
    UNUSED(index);
    UNUSED(data);
    UNUSED(cursor);


    /* Выводим строку на экран */
    if (cursor != -1) {
	int i = 0;
	while (i != cursor) {
	    if (isdigit(contents[i])) 
	   
	    putchar(contents[i]);
	    i++;
	}
	printf("|");
	while (contents[i] != '\0')  {
	    if (isdigit(contents[i]))
	        
	    putchar(contents[i]);
	    i++;
	}
    }
    if (cursor == -1) {
	int i = 0;
	while (contents[i] != '\0') {
	    if (isdigit(contents[i]))
        
	    putchar(contents[i]);
	    i++;
	}
    }
    fprintf(f, "\n");
    fclose(f);
}
