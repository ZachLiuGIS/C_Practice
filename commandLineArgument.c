#include <stdio.h>

int main(int argc, char *argv[])
{      
	if(argc == 2)
		printf("The argument supplied is %s\n", argv[1]);
	else if (argc > 2)
	{
		int i,  count = argc - 1;
		printf("There are %d arguments provided.\n", count);
		for (i = 0; i < count; i++ )
		{
			printf("argument %d = %s\n", i, argv[i+1]);
		}
	}
	else
		printf("One argument expected.");
	
	return 0;
}
