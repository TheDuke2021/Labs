﻿//ВВП, Лабораторная работа номер 8, Бараев Дамир 201-725
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
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	task_5();
}

void task_1()
{

	//1. Дан размер файла в байтах. Найти количество полных килобайтов, 
	//   которые занимает данный файл
	int a;
	cout << "Input bytes: " << endl;
	cin >> a;
	cout << "\nIn kilobytes: " << a / 1024;

}

void task_2()
{

	//2. Даны целые положительные числа A и B (A > B). На отрезке длины 
	//   A размещено максимально возможное количество отрезков длины B 
	//   (без наложений). Найти количество отрезков B, размещенных на отрезке A.
	int a, b;
	cout << "\nInput a and b: " << endl;
	cin >> a >> b;
	cout << "\nAnswer is: " << a/b << endl;

}

void task_3()
{
	//3. Даны целые положительные числа A и B (A > B). На отрезке 
	//   длины A размещено максимально возможное количество отрезков длины B
	//   (без наложений). Найти длину незанятой части отрезка A.
	int a, b;
	cout << "\nInput a and b: " << endl;
	cin >> a >> b;
	cout << "\nAnswer is: " << a % b << endl;
}

void task_4()
{
	//4. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.
	int num;
	cout << "\nInput num: " << endl;
	cin >> num;
	int a = num / 10;
	int b = num % 10;
	int newNum = b * 10 + a;
	cout << "\nAnswer is: " << newNum << endl;

}

void task_5()
{
	//5. Дано трехзначное число. В нем зачеркнули первую слева цифру и
	//   приписали ее справа. Вывести полученное число.
	int num;
	cout << "\nInput num: " << endl;
	cin >> num;
	int a = num / 100;
	int newNum = num % 100;
	newNum = newNum * 10 + a;
	cout << "\nAnswer is: " << newNum << endl;
}