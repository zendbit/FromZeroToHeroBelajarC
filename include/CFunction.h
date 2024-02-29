/*
 *  CFunction.h
 *  Tutorial Function di C
 * */

#ifndef _CFUNCTION_H
#define _CFUNCTION_H

#include <stdio.h>

void msg();
void msgText(char * text);
int tambahBilangan(int a, int b);
void ubahVariable(int a, int b);
void swap(int * a, int * b);
void callback(void (*cb)());
void callbackText(void (*cb)(char * text), char * text);

#endif
