#/bin/bash

rm *.o
rm Makefile
rm moc_*


qmake 
make
./FrenchBackendTest


