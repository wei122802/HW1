#include <stdio.h>
#include <stdlib.h>

int main() {
	//L
	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			for (int j = 0; j < 9; j++)  printf("L");
		}
		else printf("L");
		printf("\n");
		}
	printf("\n");

	//I
	for (int i = 0; i < 5; i++) {
		if (i == 2) {
			for (int j = 0; j < 9; j++)  printf("I");
		}
		else {
			for (int j = 0; j < 9; j++) {
				if (j == 0 || j == 8) printf("I");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	//N
	for (int i = 0; i < 5; i++) {
		if (i == 0 || i==4) {
			for (int j = 0; j < 9; j++)  printf("N");
		}
		else if(i==1){
			for (int j = 0; j < 9; j++) {
				if (j >5) printf("N");
				else printf(" ");
			}
		}
		else if (i == 2) {
			for (int j = 0; j < 6; j++) {
				if (j > 2) printf("N");
				else printf(" ");
			}
		}
		else printf("NNN");

		printf("\n");
		}
	printf("\n");
	system("pause");
	return 0;
}