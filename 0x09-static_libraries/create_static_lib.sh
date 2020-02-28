#!/bin/bash
ls *.c | while read F; do gcc -c -o `echo $F | tr .c .o ` $F; done 
ar rc liball.a *.o
