/*
 *  CInputOutput.c
 * */

#include "CInputOutput.h"

//  FILE stdin
//  FILE stdout
//  FILE stderr

void contohPrintf() {
  //  stdout
  printf("contoh output dari printf %s\n", "output dari console (stdout)");
  printf("contoh output dari printf multi params %s %d %f\n", "string val", 10, 2.3);
}

void contohScanf() {
  int a, b;
  char nama[20];
  printf("masukkan nilai a, b dan nama: ");
  scanf("%d %d %s", &a, &b, &nama);
  printf("nilai a = %d, b = %d, nama = %s\n", a, b, nama);
}

void contohSprintf() {
  char nama[20], bufferNamaDanUmur[20];
  int a;
  printf("masukkan nama: ");
  scanf("%s", &nama);
  printf("masukkan umur: ");
  scanf("%d", &a);
  sprintf(bufferNamaDanUmur, "nama %s, umur %d\n", nama, a);
  printf(bufferNamaDanUmur);
}

void contohFprintf() {
  FILE * test = fopen("test.txt", "w+");
  if(test != NULL) {
    char nama[20];
    
    printf("masukkan nama: ");
    scanf("%s", &nama);
    fprintf(test, "Nama: %s\n", nama);
    
    fclose(test);
  }
}

void contohGetc() {
  FILE * test = fopen("test.txt", "r");
  if(test != NULL) {
    int c;
    do {
      c = getc(test);
      printf("%c", c);
    } while(c != EOF);
  }
}

void contohGetchar() {
  //
  //  getchar()
  //  ==
  //  getc(strin)
  //
  int a;
  printf("masukkan karakter: ");
  a = getchar();
  printf("nilai a = %c\n", a);
}
