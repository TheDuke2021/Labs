﻿//ВВП, Лабораторная работа номер 16, Бараев Дамир 201-725
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

	//1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, 
	//	содержащий N первых положительных нечетных чисел: 1, 3, 5, . . .

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int *a = new int[N];
	int num = -1;
	for (int i = 0; i < N; i++)
		a[i] = num += 2;

	cout << "Массив:\n";

	for (int i = 0; i < N; i++)
		cout << a[i] << endl;

}

void task_2()
{

	//2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
	//	Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2, 
	//	A·D3 , . . .

	int N;
	double A, D;
	cout << "\nВведите N, A и D: " << endl;
	cin >> N >> A >> D;
	double* a = new double[N];
	a[0] = A;
	for (int i = 1; i < N; i++)
		a[i] = a[i - 1] * D;

	cout << "Массив:\n";

	for (int i = 0; i < N; i++)
		cout << a[i] << endl;
	

}

void task_3()
{
	//3. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент 
	//	которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих

	int N;
	int A, B;
	cout << "\nВведите N, A и B: " << endl;
	cin >> N >> A >> B;
	int* a = new int[N];
	a[0] = A;
	a[1] = B;
	for (int i = 2; i < N; i++){
		//Устанавливаем начальное значение равное нулю
		a[i] = 0;
		//Проходимся по всем элементам, которые стоят до i-го элемента
		for (int j = i - 1; j >= 0; j--) {
			a[i] += a[j];
		}
	}
		

	cout << "Массив:\n";

	for (int i = 0; i < N; i++)
		cout << a[i] << endl;

}

void task_4()
{
	//4. Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int i = 0;
	N--;
	cout << "Массив:\n";
	while (i <= N) {
		//Если длина массива нечётна, то без этого условия последний элемент будет выведен дважды (нам этого не надо)
		if (a[i] == a[N]) {
			cout << a[i] << endl;
			break;
		}
		else {
			cout << a[i] << endl;
			cout << a[N] << endl;
		}
		i++;
		N--;
	}

}

void task_5()
{
	//5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, 
	//	а затем — элементы с четными номерами в порядке убывания номеров

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int i = 0;
	//Теперь N - индекс последнего элемента массива
	N--;
	cout << "Массив:\n";
	//Вывод нечетных индексов по возрастанию
	for (int i = 1; i <= N; i += 2)
		cout << "a[" << i << "] = " << a[i] << endl;
	cout << endl;
	//Находим последний ЧЁТНЫЙ индекс
	if (N % 2 != 0) N--;
	//Вывод четных индексов по убыванию
	for (int i = N; i >= 0; i -= 2)
		cout << "a[" << i << "] = " << a[i] << endl;

}