/*
 *  implementasi CTipeData.h
 * */

#include "CTipeData.h"

const int max_jarak = 10;
int max_jarak_mutable;
float x, y;

// fungsi ini hanya dipanggil dari local file CTipeData.h
void privateFunction() {
  printf("inisialisasi data...\n");
}

void initData() {
  privateFunction();
  //max_jarak = 30; -> error waktu compile
  max_jarak_mutable = 20;

  // ambil dan isi data ke x dan y
  printf("masukkan nilai x: ");
  scanf("%f", &x);
  printf("masukkan nilai y: ");
  scanf("%f", &y);
}

void printData() {
  printf("max jarak %d\n", max_jarak);
  printf("max jarak mutable %d\n", max_jarak_mutable);
  printf("nilai x: %.3f\n", x);
  printf("nilai y: %.2f\n", y);
}  
