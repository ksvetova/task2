/**
 * change_cursor_position -- реализует перемещение курсора
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "_text.h"
#include "text.h"
#include <stdlib.h>
#include <ctype.h>

void change_cursor_position(text txt, int new_line, int new_position)
{
  new_line--;
  new_position--;
  if (new_line < 0 || new_line > (int)txt->length || new_position < 0){
    return;
  }
  node *p;
  p = txt->begin;
  int i;
  for (i = 0; i < new_line; i++){
    p = p->next;
  }
  if (new_position > (int)strlen(p->contents)){
      return;
  }
  txt->cursor->position = new_position;
  txt->cursor->line = p;
}
