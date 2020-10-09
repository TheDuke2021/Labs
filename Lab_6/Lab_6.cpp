//ВВП, Лабораторная работа номер 6, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();
void task_7();

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
	task_6();
	task_7();
}

void task_1()
{

	//1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
	int a, b;
	cout << "Input a and b: " << endl;
	cin >> a >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "\n a is: " << a << endl;
	cout << "\n b is: " << b << endl;

}

void task_2()
{

	//2. Даны переменные A, B, C. Изменить их значения, 
	//   переместив содержимое A в B, B — в C, C — в A, и вывести 
	//   новые значения переменных A, B, C.
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	int temp = a;
	a = c;
	c = b;
	b = temp;
	cout << "\nA is " << a;
	cout << "\nB is " << b;
	cout << "\nC is " << c << endl;

}

void task_3()
{
	//3. Даны переменные A, B, C. Изменить их значения, 
	//   переместив содержимое A в C, C — в B, B — в A, и вывести новые 
	//   значения переменных A, B, C.
	int a, b, c;
	cout << "\nInput a, b, c\n";
	cin >> a >> b >> c;
	int temp = c;
	c = a;
	a = b;
	b = temp;
	cout << "\nA is " << a;
	cout << "\nB is " << b;
	cout << "\nC is " << c << endl;
}

void task_4()
{
	//4. Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x
	double x;
	cout << "\nInput x: " << endl;
	cin >> x;
	double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "\ny is: " << y << endl;

}

void task_5()
{
	//5. Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 при данном значении x
	double x;
	cout << "\nInput x: " << endl;
	cin >> x;
	double y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "\ny is: " << y << endl;
}

void task_6()
{
	//6. Дано число A. Вычислить A^8 , используя вспомогательную 
	//   переменную и три операции умножения.
	double A;
	cout << "\nInput A: " << endl;
	cin >> A;
	double A2 = A * A;
	A2 = A2 * A2;
	A2 = A2 * A2;
	cout << "\nA is: " << A2 << endl;

}

void task_7()
{

	//7. Дано число A. Вычислить A^15, используя две вспомогательные 
	//   переменные и пять операций умножения.
	double A;
	cout << "\nInput A: " << endl;
	cin >> A;
	double A2 = A * A * A;
	double A3 = A2 * A2;
	A3 = A3 * A3;
	A3 = A3 * A2;
	cout << "\nA is: " << A3 << endl;

}