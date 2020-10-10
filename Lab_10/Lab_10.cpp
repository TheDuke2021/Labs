﻿//ВВП, Лабораторная работа номер 10, Бараев Дамир 201-725
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

	//1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы 
	//   неравенства A > 2 и B ≤ 3»
	int a, b;
	cout << "Input a and b: " << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";

}

void task_2()
{

	//2. Даны три целых числа: A, B, C. Проверить истинность 
	//   высказывания: «Справедливо двойное неравенство A < B < C».
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	int temp = a;
	if (a < b && b < c)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";

}

void task_3()
{
	//3. Дано целое положительное число. Проверить истинность высказывания: 
	//   «Данное число является четным двузначным».
	int a;
	cout << "\nInput a\n";
	cin >> a;
	if (a >= 10 && a <= 99 && a % 2 == 0)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";
}

void task_4()
{
	//4. Дано трехзначное число. Проверить истинность высказывания: 
	//   «Цифры данного числа образуют возрастающую или убывающую последовательность».
	int num;
	cout << "\nInput number: " << endl;
	cin >> num;
	int a = num / 100;
	int b = (num % 100) / 10;
	int c = num % 10;
	if (a < b && b < c  || a > b && b > c)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";

}

void task_5()
{
	//5. Дано четырехзначное число. Проверить истинность высказывания: 
	//   «Данное число читается одинаково слева направо и справа налево».
	int num;
	cout << "\nInput number: " << endl;
	cin >> num;
	int a = num / 1000;
	int b = (num % 1000) / 100;
	int c = (num % 100) / 10;
	int d = num % 10;
	if (b == c && a == d)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";
}

void task_6()
{
	//6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. 
	//   Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	if ((a * a + b * b) == c*c)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";

}

void task_7()
{

	//7. Даны целые числа a, b, c. Проверить истинность высказывания: 
	//   «Существует треугольник со сторонами a, b, c».
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b +c > a)
		cout << "\nThat's true";
	else
		cout << "\nThat's false";

}