//ВВП, Лабораторная работа номер 4, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();

int main()
{
	//Каждый task - это отдельное задание в лабораторной работе
	//Можно закомментировать нужные строчки, чтобы проверить 
	//работоспособность отдельно взятого задания
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
}

void task_1()
{

	//1. Даны стороны прямоугольника a и b. Найти его площадь S = a·b и
	//   периметр P = 2·(a + b).
	int a, b;
	cout << "Type a and b" << endl;
	cin >> a >> b;
	cout << "S = " << a * b << endl;
	cout << "P = " << 2 * (a + b);

}

void task_2()
{

	//2. Дан диаметр окружности d. Найти ее длину L = π·d. В качестве
	//   значения π использовать 3.14.
	double d;
	const double PI = 3.14;
	cout << "Type diameter d\n";
	cin >> d;
	cout << "L = " << d * PI;

}

void task_3()
{
	//3. Даны два числа a и b.Найти их среднее арифметическое : (a + b) / 2.
	double a, b;
	cout << "Type a and b\n";
	cin >> a >> b;
	cout << "Answer is: " << (a + b) / 2;
}

void task_4()
{
	//4. Даны два ненулевых числа. Найти сумму, разность, произведение и
	//   частное их квадратов.
	double a, b;
	cout << "Type a and b\n";
	cin >> a >> b;
	a *= a;
	b *= b;
	cout << "Sum is: " << a + b << endl;
	cout << "Difference is: " << a - b << endl;
	cout << "Product is: " << a * b << endl;
	cout << "Quotient is: " << a / b << endl;

}

void task_5()
{
	//5. Даны два ненулевых числа. Найти сумму, разность, произведение и
	//	частное их модулей.
	double a, b;
	cout << "Type a and b\n";
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	cout << "Sum is: " << a + b << endl;
	cout << "Difference is: " << a - b << endl;
	cout << "Product is: " << a * b << endl;
	cout << "Quotient is: " << a / b << endl;

}