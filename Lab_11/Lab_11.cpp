//ВВП, Лабораторная работа номер 11, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();

int main()
{
	//Каждый task - это отдельное задание в лабораторной работе
	//Можно закомментировать нужные строчки, чтобы проверить 
	//работоспособность отдельно взятого задания
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	//task_5();
	//task_6();
}

void task_1()
{

	//1. Даны две переменные целого типа: A и B. Если их значения 
	//   не равны, то присвоить каждой переменной большее из этих 
	//   значений, а если равны, то присвоить переменным нулевые значения. 
	//   Вывести новые значения переменных A и B.
	int a, b;
	cout << "Input a and b: " << endl;
	cin >> a >> b;
	if (a != b) {
		a = max(a, b);
		b = max(a, b);
	}
	else
		a = b = 0;
	cout << "\nA and B now are: " << a << " " << b;

}

void task_2()
{

	//2. Даны три числа. Найти сумму двух наибольших из них
	
	int a, b, c;
	cout << "Input a, b, c: " << endl;
	cin >> a >> b >> c;
	//Найдем наименьшее из них
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	int sum = a + b + c - min;
	cout << "\nSum is: " << sum << endl;

}

void task_3()
{
	//3. На плоскости расположены три точки: A, B, C. Определить, какая из 
	//   двух последних точек (B или C) расположена ближе к A, и вывести эту 
	//   точку и ее расстояние от точки A.
	double xA, xB, xC, yA, yB, yC;
	
	cout << "Input x and y of points A, B, C: ";
	cin >> xA >> yA >> xB >> yB >> xC >> yC;
	int AB = sqrt(pow(xA-xB, 2) + pow(yA - yB, 2));
	int AC = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));
	int min = AB;
	char point = 'B';
	if (AC < min) {
		min = AC;
		point = 'C';
	}
	cout << "\nPoint is: " << point << ", length is: " << min <<endl;
}

void task_4()
{
	//4. Даны координаты точки, не лежащей на координатных осях OX и OY. 
	//   Определить номер координатной четверти, в которой находится данная точка
	double x, y;
	cout << "\nInput x and y: " << endl;
	cin >> x >> y;
	if (x >= 0 && y >= 0) cout << "\nAnswer is: I";
	if (x < 0 && y >= 0) cout << "\nAnswer is: II";
	if (x < 0 && y < 0) cout << "\nAnswer is: III";
	if (x >= 0 && y < 0) cout << "\nAnswer is: IV";

}

void task_5()
{
	//5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», 
	//   «нулевое число», «положительное нечетное число» и т. д.
	int x;
	cout << "\nInput number: " << endl;
	cin >> x;
	if (x == 0) {
		cout << "\nNull";
		return;
	}
	if (x > 0)
		cout << "\nPositive ";
	else
		cout << "\nNegative ";
	if (x % 2 == 0)
		cout << "even";
	else
		cout << "odd";

}

void task_6()
{
	//6. Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида 
	//   «четное двузначное число», «нечетное трехзначное число» и т. д.

	int x;
	cout << "\nInput number: " << endl;
	cin >> x;
	if (x % 2 == 0)
		cout << "\nEven ";
	else
		cout << "\nOdd ";

	if (x < 10) 
		cout << "one-digit number";
	else if (x < 100 && x >= 10 )
		cout << "two-digit number";
	else
		cout << "three-digit number";

}