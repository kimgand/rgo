#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("사각형을 출력합니다\n");
	printf("입력할 수: ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++)
			printf("*");
		putchar('\n');
	}
		
	
	return 0;
}