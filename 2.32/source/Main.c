#include <stdio.h>
#include <stdlib.h>

int main() {
	float weight, height, BMI;
	printf("Enter your Weight(kg):");
	scanf_s("%f", &weight);
	printf("Enter your Height(m):");
	scanf_s("%f", &height);
	BMI = weight / (height*height);

	printf("Your BMI=%f\n",BMI);

	if (BMI < 18.5) printf("Underweight\n");
	else if (BMI < 25) printf("Normal\n");
	else if (BMI < 30) printf("Overweight\n");
	else  printf("Obese\n");
	system("pause");
	return 0;
}