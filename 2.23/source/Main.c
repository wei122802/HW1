#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1, num2, num3, biggestnum, smallestnum;
	printf("Enter three integers,and I will find the largest and the smallest integers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2) {
		if (num1 > num3) {
			biggestnum = num1;
			if (num2 > num3) smallestnum = num3;
			else smallestnum = num2;
		}
		else {
			biggestnum = num3;
			smallestnum = num2;
		}
	}
	else {
		if (num2 > num3) {
			biggestnum = num2;
			if (num1 > num3) smallestnum = num3;
			else smallestnum = num1;
		}
		else {
			biggestnum = num3;
			smallestnum = num1;
		}
	}

	printf("The largest integers is %d \nThe smallest integers is %d\n", biggestnum, smallestnum);

	system("pause");
	return 0;
}