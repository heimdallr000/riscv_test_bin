#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int count = 0;
	while(1)
	{
		printf("[attack_target2] count = %d\n", count);
		count++;

		int * ptr = malloc(sizeof(int));
		*ptr = 0xcafebabe;
		printf("[attack_target2] addr = %p\n", ptr);
		printf("[attack_target2] value = %x\n", *ptr);
		for(int i = 0 ; i < 1000000000 ; i++){}
	}
}