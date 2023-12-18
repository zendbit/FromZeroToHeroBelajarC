/*
 *  file main.c
 *  executable program
 * */

#include <CPointer.h>
#include <stddef.h>
#include <stdlib.h>

int main()
{
  struct Box box1;
  box1.width = 10;
  box1.height = 20;

  printBox(box1);

  modifyBox(box1, 100, 100);

  printBox(box1);
  
  modifyBoxWithPointer(&box1, 100, 100);

  printBox(box1);

  struct Box * box2 = NULL;
  int numBox = 5;
  initBox(&box2, numBox);

  struct Box * ptrBox2 = box2;

  int i;
  for(i = 0; i < numBox ; i++)
  {
    modifyBoxWithPointer(ptrBox2, i * 2, i * 3);
    ptrBox2++;
  }

  ptrBox2 = box2;
  for(i = 0; i < numBox ; i++)
  {
    printBox(*ptrBox2);
    ptrBox2++;
  }

  free(box2);
  box2 = NULL;
  ptrBox2 = NULL;

  return 0;
}

