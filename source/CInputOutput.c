/*
 * CInputOutput.c
 *
 * */

//  FILE stdout
//  FILE stdin
//  FILE stderr
//

#include "CInputOutput.h"

void contohPrintf() {
  printf("Nilai dari a = %d, b = %d, c = %d\n", 10, 50, 60);
}

void contohScanf() {
  int umur;
  char nama[20];
  printf("masukkan nama: ");
  scanf("%s", (char*)&nama);
  printf("masukkan umur: ");
  scanf("%d", &umur);
  printf("Nama %s, Umur %d\n", nama, umur);
}

void contohSprintf() {
  char bufferText[20], nama[20];
  int umur;
  printf("masukkan nama: ");
  scanf("%s", (char*)&nama);
  printf("masukkan umur: ");
  scanf("%d", &umur);
  sprintf(bufferText, "Nama %s, Umur %d\n", nama, umur);
  printf("%s", bufferText);
}

void contohFprintf() {
  char bufferText[20], nama[20];
  int umur;
  printf("masukkan nama: ");
  scanf("%s", (char*)&nama);
  printf("masukkan umur: ");
  scanf("%d", &umur);
  sprintf(bufferText, "Nama %s, Umur %d\n", nama, umur);
  
  FILE * data = fopen("data.txt", "w+");
  if (data != NULL) {
    fprintf(data, "Menulis ke data.txt: %s\n", bufferText);
    fclose(data);
  }
}

void contohGetc() {
  printf("membaca file data.txt\n");
  printf("=====================\n");
  FILE * data = fopen("data.txt", "r");
  if (data != NULL) {
    int c;
    do {
      c = getc(data);
      printf("%c", c);
    } while(c != EOF);
  }
}

void contohGetchar() {
  int c;
  c = getchar();
  printf("char yang dimasukkan adalah: %c\n", c);
}
