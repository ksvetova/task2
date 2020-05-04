/**
 * load.c -- функция загрузки текста из файла
 * 
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include "_text.h"

static void save_line(int index, char *contents, int cursor, void *data);

/**
 * Сохраняет содержимое указанного файла
 */
int save(text txt, char *filename){
    /* Проверяем, имеется ли текст */
    if (txt == NULL || txt->length == 0) {
        fprintf(stderr, "There are already no any lines in the text!\n");
        return 1;
    }
    FILE *f;
    f = fopen(filename, "w");
    /* Применяем функцию save_line к каждой строке текста */
    process_forward(txt, save_line, (void*)f);
    fclose(f);
    return 0;
}

/**
 * Сохраняет содержимое указанного файла
 */
static void save_line(int index, char *contents, int cursor, void *data){
    FILE *f = (FILE *)data;
    /* Функция обработчик всегда получает существующую строку */
    assert(contents != NULL);
    /* Декларируем неиспользуемые параметры */
    UNUSED(index);
    UNUSED(cursor);
    /* Выводим строку в файл */
    fprintf(f,"%s\n", contents);
}
