#include <string>
#include <math.h>
const double pi = 3.1415;


int main()
{

	// Различные арифметические операции
	int alpha = 2 * 2 * 2 * 2 * 2;
	alpha++;
	double beta = alpha / 9;
	double gamma = beta * 3 + alpha / 3;
	//Тернарная операция
	alpha % 2 == 0 ? printf("%s", "even") : printf("%s", "odd");
	beta = -beta;
	//Условные операторы
	if (beta >= 0)
		printf("%s", "+");
	if (alpha % 2 == 0 && alpha < 0)
		printf("%s", "YES\n");
	else
		printf("%s", "NO\n");
	//Символьный тип данных
	char x = 'X';
	x += 10;

	//Программа по заданным данным находит объем конуса
	int h;
	int r;
	printf("%s", "Input height\n");
	scanf_s("%d", &h);
}
