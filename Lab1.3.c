#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Вариант 2\n");
	int n = 3;
	int L = 335;
	float k = n/ L;
	float m = n % L;
	printf("Дано:\n\t %d\n\t%d\n       -----------\n Ответ:\n\t+%4.4d.%2.2d",n, L, k, m);
}