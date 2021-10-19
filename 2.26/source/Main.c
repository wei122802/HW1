#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	printf("Enter two integers,I will check whether the first is multiple of the second:");
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0) printf("%d is multiple of %d",num1,num2);
	else printf("%d isn't multiple of %d", num1, num2);

	system("pause");
	return 0;
}