//ВВП, Лабораторная работа номер 13, Бараев Дамир 201-725
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

	//1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.

	int price;
	cout << "Введите цену 1 кг конфет: " << endl;
	cin >> price;
	for (double i = 0.1; i <= 1; i += 0.1)
		cout << "Цена за " << i << " кг равна " << price * i << endl;

}

void task_2()
{

	//2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double prod = 1.1;
	double factor = 1.1;
	for (int i = 1; i < N; i++) {
		prod *= factor;
		factor += 0.1;
	}

	cout << "Ответ: " << prod;

}

void task_3()
{
	//3. Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: 
	//	N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее 
	//  значение суммы

	int N;
	cout << "\nВведите число: " << endl;
	cin >> N;
	int sum = 1;
	int factor = 3;
	for (int i = 1; i < N; i++) {
		sum += factor;
		factor += 2;
		cout << i << ") Промежуточная сумма: " << sum << endl;
	}
	cout << "Итоговый ответ: " << sum;
}

void task_4()
{
	//4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти 
	//	сумму 1 + A + A2 + A3 + . . . + A^N

	double A;
	int N;
	cout << "\nВведите A и N: " << endl;
	cin >> A >> N;
	double sum = 1;
	double factor = A;
	for (int i = 1; i < N; i++) {
		sum += factor;
		factor *= A;
	}
	cout << "Сумма: " << sum << endl;

}

void task_5()
{
	//5. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 
	//	1 − A + A2 − A3 + . ..± A^N .
	//	Условный оператор не использовать.


	double A;
	int N;
	cout << "\nВведите A и N: " << endl;
	cin >> A >> N;
	double sum = 1;
	double factor = -A;
	for (int i = 1; i < N; i++) {
		sum += factor;
		factor *= -A;
	}
	cout << "Сумма: " << sum << endl;
}