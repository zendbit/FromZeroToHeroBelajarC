#ifndef _CPOINTER_H
#define _CPOINTER_H

struct Box {
  int width;
  int height;
};

void printBox(struct Box box);
void modifyBox(struct Box box, int width, int height);
void modifyBoxWithPointer(struct Box * box, int width, int height);

void initBox(struct Box ** box, int numBox);

#endif
