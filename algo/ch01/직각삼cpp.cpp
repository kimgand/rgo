#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i+1; j++)
			printf("*");
		putchar('\n');
	}

}