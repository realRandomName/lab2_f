#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	printf("123\n"); //punkt 1
	puts("------");
	printf("1\n2\n3\n"); //punkt 2
	puts("------");
	printf("1\n\t2\n\t\t3\n"); //punkt 3
	puts("------");
	printf("%d\n\t%d\n\t\t%d\n\t\t\t%d\n", 1,2,3,4); //punkt 4
	puts("------");
	printf("%10.3f\n ", 12.234657); //punkt 5
	puts("------");
	printf("%10.5f\n ", 12.234657); //punkt 6
	puts("------");
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);  //punkt 7
	puts("------");
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 / 5); ; //punkt 8
	puts("------");
	printf("��������� %d �� %d ����� %d\n", 2000, 4, 2000 * 4); //punkt 9
	puts("------");
	printf("%g ��������� %e ����� %f\n ", 5., 2000000., 5. / 2000000);  //punkt 10
	printf("%d ��������� %d ����� %d\n ", 5., 2000000., 5. / 2000000);  //punkt 10.1
	printf("%f ��������� %f ����� %f\n ", 5., 2000000., 5. / 2000000);  //punkt 10.2
	printf("%g ��������� %g ����� %g\n ", 5., 2000000., 5. / 2000000);  //punkt 10.3
	printf("%e ��������� %e ����� %e\n ", 5., 2000000., 5. / 2000000);  //punkt 10.4

	return 0;
}