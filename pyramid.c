#include <stdio.h>
#include <stdlib.h>

char* write_line(int size, int index)
{
	char* line = malloc(size);
	int dif = size - index;

	for (int i = 0; i < dif; i++)
		line[i] = ' ';

	for (int j = dif-1; j < dif+index; j++)
		line[j] = '#';
	
	return line;
}

int main()
{
	int size;
	printf("How tall? ");
	scanf("%d", &size);

	for (int i=0; i<size; i++)
	{
		char* l = write_line(size, i);
		printf("%s\n", l);
	}
}
