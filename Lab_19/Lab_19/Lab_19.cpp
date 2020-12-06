//ВВП, Лабораторная работа номер 19, Бараев Дамир 201-725
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

	//1. Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, 
	//	оставив их первые вхождения.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N - 1; i++) {
		if (a[i] == a[i + 1]) {
			//Для удаления элемента просто смещаем элементы идущие после него
				for(int j = i+1; j < N - 1; j++) {
					a[j] = a[j + 1];
			}
			a[--N] = 0;
		}
	}

	//Вывод массива

	cout << "Массив: " << endl;
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

}

void task_2()
{

	//2. Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно 
	//	два раза, и вывести размер полученного массива и его содержимое.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	//Исходная длина массива
	int N1 = N;
	for (int i = 0; i < N1; i++) {
		//Сколько раз встречается элемент a[i]
		int count = 1;
		//Индекс второго элемента, если дубликат найден
		int index = -1;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (a[j] == a[i]) {
				count++;
				index = j;
			}
		}
		//Удаление элементов
		if (count == 2) {
			for (int k = i; k < N-1; k++)
				a[k] = a[k + 1];
			if (i < index) index--;
			for (int k = index; k < N-1; k++)
				a[k] = a[k + 1];
			a[--N] = 0;
			a[--N] = 0;
			i--;
		}
	}

	cout << "Размер массива: " << N << endl;
	//Вывод массива
	cout << "Массив: " << endl;
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

}

void task_3()
{
	//3. Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и 
	//	после максимального элемента массива.


	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	double* b = new double[N+2];
	for (int i = 0; i < N; i++) {
		b[i] = a[i];
	}
	//Индексы
	int min = 0;
	int max = 0;
	//Поиск минимального значения
	for (int i = 1; i < N; i++)
		if (a[i] < a[min]) min = i;

	//Вставка нуля
	for (int i = N; i > min; i--) {
		b[i] = b[i - 1];
	}
	b[min] = 0;
	N++;
	
	//Поиск максимального значения
	for (int i = 1; i < N; i++)
		if (b[i] > b[max] && b[i] != 0) max = i;
	
	//Вставка нуля
	for (int i = N; i > max+1; i--) {
		b[i] = b[i - 1];
	}
	b[max+1] = 0;
	N++;
	
	//Вывод
	cout << "Массив: " << endl;
	for (int i = 0; i < N; i++)
		cout << b[i] << " ";

}

void task_4()
{
	//4. Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	double* b = new double[N*2];
	for (int i = 0; i < N; i++) {
		b[i] = a[i];
	}
	for (int i = N; i < N * 2; i++)
		b[i] = 0;

	//В этой переменной храним исходную длину массива
	int N1 = N;
	for (int i = 0; i < N1*2; i++) {
		//Здесь происходит смещение элементов вправо и вставка на освободившееся место нуля
		if (b[i] < 0) {
			for(int j = N-1; j > i; j--){
				b[j + 1] = b[j];
			}
			b[i + 1] = 0;
			N++;
		}
	}

	//Вывод
	cout << "Массив: " << endl;
	for (int i = 0; i < N; i++)
		cout << b[i] << " ";

}

void task_5()
{
	//5. Дан массив размера N. Перед каждым положительным элементом массива 
	//	вставить элемент с нулевым значением.

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	double* a = new double[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	double* b = new double[N * 2];
	for (int i = 0; i < N; i++) {
		b[i] = a[i];
	}
	for (int i = N; i < N * 2; i++)
		b[i] = 0;

	int N1 = N;

	for (int i = 0; i < N1 * 2; i++) {
		if (b[i] > 0) {
			for (int j = N; j > i; j--) {
				b[j] = b[j-1];
			}
			b[i] = 0;
			i++;
			N++;
		}
	}

	//Вывод
	cout << "Массив: " << endl;
	for (int i = 0; i < N; i++)
		cout << b[i] << " ";

}