#include <stdio.h>

extern "C" void fortranFunctionToSquareANumber(double);

int main(int argc, char** argv)
{
	printf("Hello World!\n");
        if ( argc > 0 ) {
          for ( int i = 1; i < argc; ++i ) {
            printf("argv[%d]: %s\n", i, argv[i]);
          }
        }
        fortranFunctionToSquareANumber(42.0);
	return(0);
}
