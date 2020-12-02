﻿//ВВП, Лабораторная работа номер 17, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

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

	//1. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое 
	//	элементов массива с номерами от K до L включительно.

	int N, K, L;
	cout << "\nВведите N, K, L: " << endl;
	cin >> N >> K >> L;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	double average = 0;
	for (int i = K; i <= L; i++)
		average += a[i];

	average /= (L-K+1);
	cout << "Среднее арифметическое элементов с " << K << " по " << L << " индексы = " << average << endl;

}

void task_2()
{

	//2. Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли 
	//	его элементы арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если 
	//	нет — вывести 0.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	//Если значение = true, то мы ещё не знаем, образуют ли элементы массива ариф. прогрессию
	//Если значение = false, значит элементы НЕ образуют ариф. прогрессию
	bool isUnknown = true;
	//Разность прогрессии
	double diff = a[1] - a[0];
	int i = 2;
	while (i != N && isUnknown) {
		//Если разность элементов не равна разности прогресси, значит, элементы НЕ образуют прогрессию
		if ((a[i] - a[i-1]) != diff) {
			//Теперь мы всё знаем
			isUnknown = false;
		}
		i++;
	}
		
	cout << "Ответ: " << endl;
	if(isUnknown)
		cout << diff << endl;
	else
		cout << 0 << endl;
		
}

void task_3()
{
	//3. Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,


	//Предполагается, что N >= 2
	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	double min = a[2];
	for (int i = 4; i < N; i += 2)
		if (a[i] < min)
			min = a[i];

	cout << "Наименьший элемент: " << min << endl;

}

void task_4()
{
	//4. Дан массив размера N. Найти номер его последнего локального максимума 
	//	(локальный максимум — это элемент, который больше любого из своих соседей).

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int ans = -1;
	//Проверяем граничный элемент
	if (a[0] > a[1]) 
		ans = 0;
	for (int i = 1; i < N - 1; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			ans = i;
	//Проверяем граничный элемент
	if (a[N - 1] > a[N - 2])
		ans = N - 1;
	cout << "Индекс локального максимума: " << ans << endl;

}

void task_5()
{
	//5. Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. 
	//	Найти номера одинаковых элементов и вывести эти номера в порядке возрастания

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	//Индексы одинаковых элементов
	int m, n;
	m = n = -1;
	//Перебираем в двойном цикле элементы на поиск дублей
	int i = 0;
	while (m == n) {
		for (int j = 0; j < N; j++) {
			//Каждый элемент априори равен сам себе, поэтому мы пропускаем его
			if (i == j) continue;
			if (a[i] == a[j]) {
				m = i;
				n = j;
			}
		}
		i++;
	}

	//Выводим индексы в порядке возрастания
	cout << "Индексы одинаковых элементов: " << m << " " << n << endl;

}