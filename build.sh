gfortran -g -c square.f03
g++ -g test.c square.o -lgfortran -o test
