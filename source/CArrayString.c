/*
 * CArrayString.c
 * */

#include "CArrayString.h"

void contohArray() {
  int arr1[4] = {2, 3, 4, 5};

  printf("array 1d\n");
  for(int i = 0; i < 4; i++) {
    printf("index %d: %d\n", i, arr1[i]);
  }
  
  for(int i = 0; i < 4; i++) {
    arr1[i] = arr1[i] + 10;
  }
  
  // ubah nilai element array
  arr1[2] = 20;
  
  printf("setelah di ubah:\n");
  for(int i = 0; i < 4; i++) {
    printf("index %d: %d\n", i, arr1[i]);
  }
}

void contohArray2d() {
  int arr[2][2] = {
    2, 3, // index baris 0
    4, 5 // index baris 1
  };

  printf("baris ke %d, colom ke %d, index [%d][%d]: %d\n", 1 + 1, 0 + 1, 1, 0, arr[1][0]);
  printf("transversal\n");
  for(int i = 0; i < 2; i++) { // akses baris i
    for(int j = 0; j < 2; j++) { // akses colom j
      printf("index [%d][%d]: %d\n", i, j, arr[i][j]);
    }
  }
}

void contohArrayDynamic() {
  int size = 4;
  // alokasi memory untuk array
  int * arr = malloc(size * sizeof(int));
  
  // pointer untuk manipulasi array
  int * ptrArr = arr;

  for(int i = 0; i < size; i++) {
    *ptrArr = i + 5;
    ptrArr++;
  }

  // reset alamat memory ke alamat arr awal
  ptrArr = arr;

  for(int i = 0; i < size; i++) {
    printf("index %d: %d\n", i, *ptrArr++);
  }

  // clean
  ptrArr = NULL;
  free(arr);
}

void contohString() {
  char * str1 = "Hello";
  char str2[] = "hello";
  char str3[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};

  printf("char string str3 %s\n", str3);
  printf("panjang array str2: %lu\n", strlen(str2));
  printf("panjang array str3: %lu\n", strlen(str3));

  // contoh strcpy
  char strtmp[20];
  // strtmp <- str1
  strcpy(strtmp, str1);
  printf("strtmp : %s\n", strtmp);
  
  // strcat(strtmp, str1)
  // strcat : strtmp = strtmp + str1
  strcat(strtmp, str1);
  printf("strtmp : %s\n", strtmp);
  // str str
  printf("strstr : %s\n", strstr(strtmp, str2));
  printf("strstr : %s\n", strstr(strtmp, str1));
}
