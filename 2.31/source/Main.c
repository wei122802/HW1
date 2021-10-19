#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("number\tsquare\tcube\t\n");
	for (int i = 0; i < 11; i++) 
		printf("%d\t%d\t%d\t\n", i, i*i, i*i*i);
	system("pause");
	return 0;
}