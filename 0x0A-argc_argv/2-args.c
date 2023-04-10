#include <stdio.h>
/**
 *main - entry point
 *@argc: int variable for number of arguments
 *@argv: array of input strings
 *return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++){
		printf("%s\n",argv[i] );
	}
	return (0);
}
