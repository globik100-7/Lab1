#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "RUS");
	int N = 13;
	int K = 52;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N - 1, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 60 * 60 + K * 60);
	float F = 13, H = 52;
	printf("Текущий час = %f суток и текущая минута = %f часа\n", F/24, H/60);


}