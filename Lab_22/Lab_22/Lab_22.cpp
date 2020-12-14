//ВВП, Лабораторная работа номер 22, Бараев Дамир 201-725
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
	
	//1. Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный 
	//	и максимальный элемент в каждой строке.

	int M, N;
	cout << "Введите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	for (int i = 0; i < M; i++) {
		int min = 0;
		int max = 0;
		for (int j = 0; j < N; j++) {
			if (a[i][j] > a[i][max])
				max = j;
			if (a[i][j] < a[i][min])
				min = j;
		}
		int temp = a[i][min];
		a[i][min] = a[i][max];
		a[i][max] = temp;

	}

	cout << "Изменённый массив: " << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}




void task_2()
{
	//2. Дана матрица размера M × N. Поменять местами столбцы, содержащие минимальный и 
	//	максимальный элементы матрицы.


	int M, N;
	cout << "Введите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}
	int min = 0;
	int max = 0;
	double maxValue = a[0][0];
	double minValue = a[0][0];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			if (a[i][j] > maxValue) {
				maxValue = a[i][j];
				max = j;
			}
			if (a[i][j] < minValue) {
				minValue = a[i][j];
				min = j;
			}
		}


	for (int i = 0; i < M; i++) {
		int temp = a[i][min];
		a[i][min] = a[i][max];
		a[i][max] = temp;
	}


	cout << "Изменённый массив: " << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void task_3()
{
	//3. Дана матрица размера M × N (M и N — четные числа). Поменять местами левую 
	//	верхнюю и правую нижнюю четверти матрицы

	int M, N;
	cout << "Введите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}
	int M1 = M/2;
	int N1 = N/2;
	for (int i = 0; i < M1; i++) {
		for (int j = 0; j < N1; j++) {
			int temp = a[i][j];
			a[i][j] = a[i + M1][j + N1];
			a[i + M1][j + N1] = temp;
		}
	}

	cout << "Изменённый массив: " << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void task_4()
{
	//4. Дана матрица размера M × N. Упорядочить ее строки так, чтобы их первые элементы образовывали 
	//	возрастающую последовательность.


	int M, N;
	cout << "Введите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	//Используем пузырьковую сортировку
	
	for(int i = M-1; i > 0; i--)
		for (int j = 0; j < i; j++) {
			if (a[j][0] > a[j + 1][0]) {
				for (int k = 0; k < N; k++) {
					int temp = a[j][k];
					a[j][k] = a[j + 1][k];
					a[j + 1][k] = temp;
				}
			}
		}


	cout << "Изменённый массив: " << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void task_5()
{
	//5. Дана квадратная матрица A порядка M. Найти сумму элементов каждой ее диагонали, 
	//	параллельной главной (начиная с одноэлементной диагонали).


	//Учтём, что сама главная диагональ так же параллельна самой себе

	int M;
	cout << "Введите M: " << endl;
	cin >> M;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[M];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	
	//Счётчик порядкового номера диагонали
	//Нумерацию диагоналей выбрал начиная с левого нижнего угла, заканчивая правым верхним
	int count = 1;

	for (int i = M - 1; i >= 0; i--) {
		int x, y, sum;
		x = i;
		y = 0;
		sum = 0;
		while (x < M && y < M) {
			sum += a[x][y];
			x++;
			y++;
		}
		cout << count++ << " диагональ. Сумма элементов равна: " << sum << endl;
	}

	for (int i = 1; i < M; i++) {
		int x, y, sum;
		x = 0;
		y = i;
		sum = 0;
		while (x < M && y < M) {
			sum += a[x][y];
			x++;
			y++;
		}
		cout << count++ << " диагональ. Сумма элементов равна: " << sum << endl;
	}
}