#!/bin/bash

##  variable directory
INCLUDE_DIR=include
SOURCE_DIR=source
BIN_DIR=bin
APP_NAME=main

##  jika folder bin tidak ada maka buat foldernya
if [ ! -d $BIN_DIR ]
then
    mkdir $BIN_DIR
fi

##  panggil compiler
clear
echo ""
echo "-> Compile source..."
gcc -O3 -I$INCLUDE_DIR $SOURCE_DIR/*.c -o $BIN_DIR/$APP_NAME

##  eksekusi program jika tidak ada error
##  dari proses sebelumnya
if [ $? -eq 0 ]
then
    echo "-> Compile Success!"
    echo "-> Execute $BIN_DIR/$APP_NAME"
    echo ""

    ##  eksekusi binary filenya
    $BIN_DIR/$APP_NAME
else
    echo "x-> Failed!, eww"
fi

echo ""
