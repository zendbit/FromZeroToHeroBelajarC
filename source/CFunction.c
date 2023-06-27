/*
 *  CFunction.c
 * */

#include "CFunction.h"

void msg() {
  printf("Hi, tutorial C, fungsi sederhana!.\n");
}

int tambahBilangan(int a, int b) {
  printf("nilai a + b: %d\n", (a + b));
}

// pass by value
void ubahVariable(int a, int b) {
  a = 20;
  b = 30;
  printf("Nilai a, b didalam fungsi %d dan %d\n", a, b);
}

// pass by reference
void swap(int * a, int * b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// callback
void callback(void (*cb)()) {
  // void nama_function ();
  cb();
}

void msgText(char * text) {
  printf("%s", text);
}

// callback
void callbackText(void (*cb)(char * text), char * text) {
  // void nama_function ();
  cb(text);
}
