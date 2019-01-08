#include <stdio.h>
#include <locale.h>
#include <iostream>
/*int main() {

	int a[8] = {0};
	a[0] = 37;
	a[2] = 50;
	a[3] = 46;
	a[4] = 34;
	a[5] = 46;
	system("pause");
}*/

/*int main() {
	int a[5] = { 0 };
	for (size_t i = 0; i < 5; i++) {
		printf("введите значение: ");
		scanf_s("%d", &a[i]);
	}
	for (size_t i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
}*/

/*int main() {
	int a[12] = { 0 };
	for (size_t i = 0; i < 12; i++) {
		a[i] = 1 + rand() % 100;
		printf("%d\n", a[i]);
	}
	system("pause");
}*/

/*int main() {
	int ind;
	int x[100] = { 0 };
	for (size_t i = 0; i < 100; i++) {
		x[i] = 1 + rand() % 100;
	}
	while (true) {
		printf("введите значение: ");
		scanf_s("%d", &ind);
		printf("x[%d] = %d\n", ind, x[ind]);
	}
	system("pause");
}*/

/*int main() {
	int a[12] = { 0 };
	for (size_t i = 12; i < 0; i++) {
		a[i] = 1 + rand() % 100;
		printf("%d\n", a[i]);
	}
	for (size_t i = 12; i < 0; i--) {
		printf("%d\n", a[i]);
	}
	system("pause");
}*/
 
/*int main() {
	int ind;
	int x[100] = { 0 };
	for (size_t i = 0; i < 100; i++) {
		x[i] = 1 + rand() % 100;
		sqrt(x[i]);
	}
	while (true) {
		printf("введите значение: ");
		scanf_s("%d", &ind);
		printf("x[%d] = %d\n", ind, x[ind]);
	}
	system("pause");
}*/

/*int main() {
	int x[10] = { 0 };
	for (size_t i = 0; i < 100; i++) {
		x[i] = 1 + rand() % 100;
		printf("%d\n", x[i]);
	}
	for (size_t i = 0; i < 100; i++) {
		x[i] *= 2;
	}
	int a = 1 + rand() % 100;
	for (size_t i = 0; i < 100; i++) {
		x[i] -= a;
		printf("%d\n", x[i]);
	}
	system("pause");
}
*/

/*int main() {
	int x[5] = { 0 };
	int a = 0;
	for (size_t i = 0; i < 5; i++) {
		x[i] = 1 + rand() % 100;
		a += x[i];
		
	}
	printf("%d\n", a);
	system("pause");
}*/

/*int main() {
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++) {
		x[i] = 1 + rand() % 500;
		if (x[i] > 0) {
			printf("%d\n", x[i]);
		}
	}
	system("pause");
}*/
/*int main() {
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++) {
		x[i] = 1 + rand() % 500;
		if (x[i] < 100) {
			printf("%d\n", x[i]);
		}
	}
	system("pause");
}*/

/*int main() {
	int x[10] = { 0 };
	for (size_t i = 0; i < 10; i++) {
		x[i] = 1 + rand() % 500;
		if (x[i] % 2 == 0) {
			printf("%d\n", x[i]);
		}
	}
	system("pause");
}*/

int main() {
	int x[10] = { 0 };
	int ind;
	for (size_t i = 0; i < 10; i++) {
		x[i] = 1 + rand() % 50;
		
	}
	for (size_t i = 0; i < 10; i = 1 + 2) {
		printf("%d\n", x[i]);
	}
	for (size_t i = 1; i < 10; i = 1 + 2) {
		printf("%d\n", x[i]);
	}
	system("pause");
}
