/*
 *  file main.c
 *  executable program
 * */

//#include "intro.h"
#include "CTipeData.h"

extern int max_jarak;
extern int max_jarak_mutable;

int main() {
  //displayHelloWorld();
  //displayMessageStr("Hello, Welcome to the jungle!\n");
  
  // akses const dan variable via function
  initData();
  printData();

  // akses direct ke variable dan const
  // coba ubah nilai constant via extern
  // max_jarak = 40; -> akan error waktu eksekusi tetapi lolos compile
  printf("nilai max jarak via direct akses %d\n", max_jarak);
  printf("nilai max jarak mutable via direct akses %d\n", max_jarak_mutable);

  return 0;
}
