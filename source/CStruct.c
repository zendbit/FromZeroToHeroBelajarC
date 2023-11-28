#include "CStruct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Player newPlayer(char * name, int level) {
  struct Player p;
  memcpy(p.name, name, sizeof(p.name));
  p.level = level;
  return p;
}

Square newSquare(char * name, int width, int height) {
  Square s;
  memcpy(s.name, name, sizeof(s.name));
  s.width = width;
  s.height = height;
  return s;
}

