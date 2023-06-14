/*
 *  CControlStatement.c
 * */

#include "CControlStatement.h"

void contohIfElse() {

  int a, b;
  printf("Masukkan nilai a: ");
  scanf("%d", &a);
  
  printf("Masukkan nilai b: ");
  scanf("%d", &b);

  /// pengecekan menggunakan if/else
  if(a > b) {
    printf("Nilai a lebih besar dari nilai b\n");
  } else if(a < b) {
    printf("Nilai a kurang dari nilai b\n");
  } else if( a == b) {
    printf("Nilai a sama dengan nilai b\n");
  }

}

void contohIfElse2() {
  
  int a, b;
  printf("Masukkan nilai a: ");
  scanf("%d", &a);
  
  printf("Masukkan nilai b: ");
  scanf("%d", &b);

  if(a > b || a < b) {
    printf("Nilai a lebih besar atau kurang dari nilai b\n");
  } else {
    printf("Nilai a sama dengan nilai b\n");
  }
}

void contohSwitch() {

  int a;
  printf("Masukkan nilai antara (1 - 4): ");
  scanf("%d", &a);

  // pengecekan
  switch(a) {
    // parameter harus int/long int/unsigned int/char
    case 1:
      printf("nilai a adalah %d\n", a);
      break;
    case 2:
      printf("nilai a adalah %d\n", a);
      break;
    case 3:
      printf("nilai a adalah %d\n", a);
      break;
    case 4:
      printf("nilai a adalah %d\n", a);
      break;
    default:
      printf("nilai a tidak pada antara (1 - 4)\n");
      break;
  }
}

void contohGoto() {
  int a;
  printf("Masukkan nilai antara (1 - 4): ");
  scanf("%d", &a);

  if(a == 1) {
    
    goto kondisi1;
  
  }else if(a == 2) {
    
    goto kondisi2;
  
  }else{
    goto kondisi3;
  }

kondisi1:
  printf("pilihan kondisi 1\n");

kondisi2:
  printf("pilihan kondisi 2\n");

kondisi3:
  printf("pilihan bukan kondisi1 dan kondisi2\n");
}
