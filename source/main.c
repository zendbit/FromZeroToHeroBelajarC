/*
 *  file main.c
 *  executable program
 * */

#include <CStruct.h>

int main() {
  struct Player p = newPlayer("Bar", 10);
  printf("name %s, level %d\n", p.name, p.level);
  
  Square box = newSquare("Box", 100, 100);
  printf("name %s, width %d, height %d\n", box.name, box.width, box.height);

  union Property prop;
  prop.level = 10;
  printf("level %d\n", prop.level);
  
  prop.health = 20;
  printf("health %f\n", prop.health);
  
  memcpy(prop.type, "Player", sizeof(prop.type));
  printf("type %s\n", prop.type);
}

