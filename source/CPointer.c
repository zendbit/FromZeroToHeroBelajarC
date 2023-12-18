#include <CPointer.h>
#include <stdio.h>
#include <stdlib.h>

void printBox(struct Box box)
{
  printf("box width: %d\n", box.width);
  printf("box height: %d\n", box.height);
}

void modifyBox(struct Box box, int width, int height)
{
  box.width = width;
  box.height = height;
}

void modifyBoxWithPointer(struct Box * box, int width, int height)
{
  box->width = width;
  box->height = height;
}

void initBox(struct Box ** box, int numBox)
{
  *box = (struct Box *)malloc(sizeof(struct Box) * numBox);
}
