#include <stdio.h>

int main(int argc, char** argv)
{
	printf("Hello World!\n");
        if ( argc > 0 ) {
          for ( int i = 1; i < argc; ++i ) {
            printf("argv[%d]: %s\n", i, argv[i]);
          }
        }
	return(0);
}
