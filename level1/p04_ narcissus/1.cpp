#include<stdio.h>
#include<math.h>
int main() {
	int a = 100;
	for (; a < 1000; a++) {
		if (a == pow(a / 100, 3) + pow(a % 100 / 10, 3) + pow(a % 10 % 10, 3)) {
			printf("%d\n", a);
		}
	}
}
