#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	float n = 2, L = 133;
	int k = 3, m = 7;

	printf("Дано:\n%12.0f\n%12.0f\n%*c%.*s\nОтвет:\n%*c%+012.*f", n, L, 7, ' ', 14, "_____________", 8, ' ', m, n / L);
	return 0;
}