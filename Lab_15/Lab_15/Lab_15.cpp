//ВВП, Лабораторная работа номер 15, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

const double PI = 3.14;

char* locale = setlocale(LC_ALL, "");
void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void PowerA3(double a, double* b);
int Sign(double x);
double RignS(double R1, double R2);
int Quarter(double x, double y);
double Fact2(int N);


void PowerA3(double a, double* b) {
	*b = a * a * a;
}

int Sign(double x) {
	if (x > 0)
		return 1;
	else if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
}

double RignS(double R1, double R2) {
	double S1, S2;
	S1 = PI * R1 * R1;
	S2 = PI * R2 * R2;
	return (S1 - S2);
}

double Fact2(int N) {
	double prod = 1;
	for (; N > 0; N -= 2)
		prod *= N;
	return prod;
}

int Quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
}

int main()
{
	//Каждый task - это отдельное задание в лабораторной работе
	//Можно закомментировать нужные строчки, чтобы проверить 
	//работоспособность отдельно взятого задания
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	task_5();
}

void task_1()
{

	//1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее 
	//	в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). 
	//	С помощью этой функции найти третьи степени пяти данных чисел.

	double a1, a2, a3, a4, a5;
	a1 = 1;
	a2 = 2;
	a3 = 3;
	a4 = 4;
	a5 = 7.5;
	double b1, b2, b3, b4, b5;
	b1 = b2 = b3 = b4 = b5 = -1;
	PowerA3(a1, &b1);
	PowerA3(a2, &b2);
	PowerA3(a3, &b3);
	PowerA3(a4, &b4);
	PowerA3(a5, &b5);
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;
	cout << b4 << endl;
	cout << b5 << endl;

}

void task_2()
{

	//2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
	//	−1, если X < 0; 0, если X = 0; 1, если X > 0.
	//	С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.


	double A, B;
	cout << "\nВведите A и B: " << endl;
	cin >> A >> B;

	cout << "Ответ: " << Sign(A) + Sign(B) << endl;

}

void task_3()
{
	//3. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между 
	//	двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее 
	//	помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.

	double R1, R2, R3;
	double r1, r2, r3;

	R1 = 3;
	r1 = 2;

	R2 = 7;
	r2 = 5.5;

	R3 = 10;
	r3 = 5;

	double s1, s2, s3;
	s1 = RignS(R1, r1);
	s2 = RignS(R2, r2);
	s3 = RignS(R3, r3);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}

void task_4()
{
	//4. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, 
	//	в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью 
	//	этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами

	double x1, x2, x3;
	double y1, y2, y3;

	x1 = 3;
	y1 = 5;

	x2 = -3.145;
	y2 = 2.71828;

	x3 = 26;
	y3 = -15;
	cout << Quarter(x1, y1) << endl;
	cout << Quarter(x2, y2) << endl;
	cout << Quarter(x3, y3) << endl;

}

void task_5()
{
	//5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
	//	N!!= 1·3·5·. ..·N, если N — нечетное;
	//	N!!= 2·4·6·. ..·N, если N — четное(N > 0 — параметр целого типа; вещественное возвращаемое значение 
	//	используется для того, чтобы избежать целочисленного переполнения при больших значениях N).


	int N = 7;

	cout << Fact2(N) << endl;
}