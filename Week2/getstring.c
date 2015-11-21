#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter a word:");	
    /*char i[50] ;*/
    char* i;
    i = GetString();
    
    printf("You gave me the number %s\n", i);
	return 0;
}
