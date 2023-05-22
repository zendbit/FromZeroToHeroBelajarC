#!/bin/bash

##  variable directory
INCLUDE_DIR=include
SOURCE_DIR=source
BIN_DIR=bin
APP_NAME=main

##  jika folder bin tidak ada maka buat foldernya
if [[ ! -d $BIN_DIR ]]
then
  mkdir $BIN_DIR
fi

##  panggil compiler
echo "Compile source..."
gcc -I$INCLUDE_DIR $SOURCE_DIR/*.c -o $BIN_DIR/$APP_NAME

##  eksekusi program jika tidak ada error
##  dari proses sebelumnya
if [[ $? -eq 0 ]]
then
  echo "Success!, execute $BIN_DIR/$APP_NAME"
  ##  eksekusi binary filenya
  $BIN_DIR/$APP_NAME
else
  echo "Failed!"
fi
