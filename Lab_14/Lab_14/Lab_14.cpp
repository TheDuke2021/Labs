﻿//ВВП, Лабораторная работа номер 14, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

char* locale = setlocale(LC_ALL, "");
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
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	task_6();
}

void task_1()
{

	//1. Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; 
	//	при этом каждое число должно выводиться столько раз, каково его значение 
	//	(например, число 3 выводится 3 раза).

	int A, B;
	cout << "Введите A и B: " << endl;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		for (int j = 0; j < i; j++)
			cout << i << " ";
		cout << endl;
	}

}

void task_2()
{

	//2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное 
	//	количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти 
	//	длину незанятой части отрезка A.

	int A, B;
	cout << "\nВведите A и B: " << endl;
	cin >> A >> B;

	cout << "Ответ: " << A % B;

}

void task_3()
{
	//3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K 
	//	будет больше или равна N, и саму эту сумму.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int K;
	int sum = 1;
	for (K = 2; sum < N; K++)
		sum += K;
	cout << "K и сумма: " << --K << " " << sum;
}

void task_4()
{
	//4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P 
	//	процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). По данному P определить, 
	//	через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев 
	//	K (целое число) и итоговый размер вклада S (вещественное число).

	double P;
	int K;
	double S;
	cout << "\nВведите P: " << endl;
	cin >> P;
	//Переводим проценты в число
	P = 1 + P/100;
	//Чтобы найти K, нужно решить неравенство P^K >= 1.1 в целых числах (и найти наименьшее из решений)
	double x = log(1.1) / log(P);
	K = round(x);
	if (pow(P, K) < 1.1)
		K++;
	S = 1000 * pow(P, K);
	cout << "Через " << K << " месяцев вклад превысит 1000 и станет равным " << S;

}

void task_5()
{
	//5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), 
	//	используя алгоритм Евклида

	int A, B;
	cout << "\nВведите A и B: " << endl;
	cin >> A >> B;
	while (A != B)
		if (A > B)
			A -= B;
		else
			B -= A;

	cout << "НОД = "<< A << endl;
}

void task_6()
{

	//6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый 
	//	номер числа Фибоначчи N.



	//Предполагается, что ряд Фибоначчи начинается так: 1, 1, 2, 3...
	int N;
	int K = 2;
	int A1, A2;
	A1 = 1;
	A2 = 1;
	int temp;
	cout << "\nВведите N: " << endl;
	cin >> N;
	//Последовательно ищем числа Фибоначчи, пока не найдем число N
	while (A2 != N) {
		K++;
		temp = A1;
		A1 = A2;
		A2 = A2 + temp;
	}

	cout << "Порядковый номер K = " << K << endl;

}