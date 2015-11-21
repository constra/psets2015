#include <stdio.h>
#include <string.h>

int
main( int argc, char *argv[] )
{
    char* string = "string";
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c\n", string[i]);
    }
	return 0;
}
