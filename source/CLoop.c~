/*
 *  Cloop.c
 * */

#include "CLoop.h"

void contohFor() {
  
  // continue
  // break

  for(int i = 0; i < 10; i++) {
    if(i == 5 || i == 7) {
      continue;
    }
    
    printf("Nilai i %d\n", i);

    if(i == 6) {
      break;
    }
  }

  for(;;) { // while(true) -> while(1) {}
    printf("ini inifinite loop\n");
  }

}

void contohWhile() {
  
  int i = 0;
  while(i < 10) {
    
    if(i == 6) {
      break;
    }
    
    if(i == 5 || i == 7) {
      i++;
      continue;
    }

    
    printf("Nilai i %d\n", i);
    i++;
  }

}

void contohDoWhile() {
  int c;

  do {
    printf("masukkan [a-z]: ");
    scanf(" %c", &c);

    printf("nilai char %c:\n", (char)c);

  } while((char)c != 'q');
}
