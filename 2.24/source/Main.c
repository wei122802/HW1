#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	printf("Enter one integers,and I will print it's odd or even:");
	scanf_s("%d", &num1);

	if (num1 % 2 == 0) printf("%d is even.", num1);
	else printf("%d is odd.", num1);

	system("pause");
	return 0;
}