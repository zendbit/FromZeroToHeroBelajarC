#ifndef _CSTRUCT_H
#define _CSTRUCT_H

struct Player {
  char name[25];
  int level;
};

typedef struct {
  char name[25];
  int width;
  int height;
} Square;

union Property{
  int level;
  float health;
  char type[25];
};


struct Player newPlayer(char * name, int level);

Square newSquare(char * name, int width, int height);

#endif
