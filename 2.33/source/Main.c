#include <stdio.h>
#include <stdlib.h>

int main() {
	float Totalmeter, gas, drivingUse, parking, tolls;

	printf("Enter your total miles driven per day(km) :");
	scanf_s("%f", &Totalmeter);
	printf("Enter your cost per gallon of gas:");
	scanf_s("%f", &gas);
	printf("Enter average miles per gallon(km):");
	scanf_s("%f", &drivingUse);
	printf("Enter your parking fees per day:");
	scanf_s("%f", &parking);
	printf("Enter your tolls per day:");
	scanf_s("%f", &tolls);

	printf("your cost per day of driving to work:%.2f dollars.\n", (Totalmeter / drivingUse)*gas + parking + tolls);
	system("pause");
	return 0;
}