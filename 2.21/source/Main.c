#include <stdio.h>
#include <stdlib.h>

int main() {
	//�Ĥ@�i�Ϥ�
	for (int i = 0; i < 9; i++) {
		if (i == 0||i==8) {
			for (int j = 0; j < 9; j++)  printf("*"); 
		}
		else {
			for (int j = 0; j < 9; j++) {
				if (j == 0 || j == 8) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//�ĤG�i�Ϥ�
	for (int i = 0; i < 9; i++) {
		if (i == 0 || i == 8) {
			for (int j = 0; j < 9; j++) {
				if (j==3 || j==4 || j==5) printf("*"); 
				else printf(" ");
			}
		}

		else if (i == 1 || i == 7) {
			for (int j = 0; j < 9; j++) {
				if (j==1 || j==7) printf("*");
				else printf(" ");
			}
		}

		else {
			for (int j = 0; j < 9; j++) {
				if (j == 0 || j == 8) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//�ĤT�i�Ϥ�
	for (int i = 0; i < 9; i++) {
		if (i == 1 ) {
			for (int j = 0; j < 9; j++) {
				if (j == 3 || j == 4 || j == 5) printf("*");
				else printf(" ");
			}
		}
		else if (i == 2) {
			for (int j = 0; j < 7; j++) {
				if ( j != 1 && j!=0 ) printf("*");
				else printf(" ");
			}
		}
		else {
			for (int j = 0; j < 9; j++) {
				if (j == 4) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//�ĥ|�i�Ϥ�
	for (int i = 0; i < 9; i++) {
		if (i == 0 || i==8) {
			for (int j = 0; j < 9; j++) {
				if ( j == 4 ) printf("*");
				else printf(" ");
			}
		}
		else if (i == 1 || i==7) {
			for (int j = 0; j < 9; j++) {
				if (j == 3 || j == 5) printf("*");
				else printf(" ");
			}
		}
		else if (i == 2 || i == 6) {
			for (int j = 0; j < 9; j++) {
				if (j == 2 || j == 6) printf("*");
				else printf(" ");
			}
		}
		else if (i == 3 || i == 5) {
			for (int j = 0; j < 9; j++) {
				if (j == 1 || j == 7) printf("*");
				else printf(" ");
			}
		}
		else {
			for (int j = 0; j < 9; j++) {
				if (j == 0 || j == 8) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
