#include <stdio.h>

const int MAX = 3;

int main() {
	int var[] = {10, 100, 200};
	int i, *ptr[MAX];
	
	for (i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i];
	}
	
	for (i = 0; i < MAX; i++)
	{
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}
	
	char *names[] = {
		"Zach Liu",
		"Mengyao Zhang",
		"Vu Tran"
	};
	
	i = 0;
	
	for (i = 0; i < MAX; i++)
	{
		printf("Value of names[%d] = %s\n", i, names[i]);
	}
	
	return 0;
}