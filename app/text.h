/**
 * text.h -- внешний интерфейс библиотеки для работы с текстом
 *
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#ifndef TEXT_H
#define TEXT_H

#define MAXLINE 255
#include <stdio.h>
#include <string.h>

/**
 * Абстрактный тип текстовых объектов
 */
typedef struct _list *text;

/**
 * Абстрактный тип курсора
 */
typedef struct _crsr *cursor;

/**
 * Добавляет одну строку к тексту
 * @param txt текст
 * @param contents новая строка
 * @returns none
 */
void append_line(text txt, const char *contents);


/**
 * Обрабатывает текст, применяя заданную функцию к каждой строке
 * 
 * @param txt текст
 * @param process функция-обработчик
 * @returns none
 */
void process_forward(
    text txt,
    void (*process)(int index, char *contents, int cursor_position, void *data),
    void *data
);


#define UNUSED(x) (void)(x)

int moving(
    text txt,
    char *line,
    char *pos
);
int m(text txt, char *line, char *pos);
//int m(text txt, int line, char *pos);
//void pn(text txt, char* mystring);

int save(text txt, char *filename);
int showdigitsonly(text txt);

//void mklb(text txt, int line);
//void pn1(text txt,  char *mystring);
#endif
