//ВВП, Лабораторная работа номер 21, Бараев Дамир 201-725
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

	//1. Дана квадратная матрица A порядка M (M — нечетное число). Начиная с элемента A1,1 и перемещаясь 
	//	против часовой стрелки, вывести все ее элементы по спирали: первый столбец, последняя строка, 
	//	последний столбец в обратном порядке, первая строка в обратном порядке, оставшиеся элементы 
	//	второго столбца и т. д.; последним выводится центральный элемент матрицы.

	int M;
	cout << "\nВведите M: " << endl;
	cin >> M;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[M];
	for (int i = 0; i < M; i++) 
		for (int j = 0; j < M; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}
	

	int m = M;
	int n = 0;
	for (; n <= m; n++, m--) {
		for (int i = n; i < m; i++)
			cout << a[i][n] << " ";
		for (int i = n+1; i < m; i++)
			cout << a[M-n-1][i] << " ";
		for (int i = n + 1; i < m; i++)
			cout << a[M - i - 1][M-n-1] << " ";
		for (int i = n + 1; i < m-1; i++)
			cout << a[n][M - i - 1] << " ";
	}
}




void task_2()
{
	//2. Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Найти сумму и 
	//	произведение элементов K-й строки данной матрицы.


	int M, N, K;
	cout << "\nВведите M и N, а также номер строки K: " << endl;
	cin >> M >> N >> K;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	K--;
	double prod = 1;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		prod *= a[K][i];
		sum += a[K][i];
	}

	cout << "Произведение равно: " << prod << "\nСумма равна: " << sum << endl;


}

void task_3()
{
	//3. Дана матрица размера M × N. Найти номер ее столбца с наименьшим произведением элементов и 
	//	вывести данный номер, а также значение наименьшего произведения.

	int M, N;
	cout << "\nВведите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	double prod = 1;
	double minProd;
	int K = 0;
	for (int i = 0; i < M; i++) {
		prod *= a[i][K];
	}
	minProd = prod;
	for (int i = 1; i < N; i++){
		prod = 1;
		for (int j = 0; j < M; j++ ) {
			prod *= a[j][i];
		}
		if (prod < minProd) {
			K = i;
			minProd = prod;
		}
	}

	cout << "Столбец: " << ++K << "\nПроизведение равно: " << minProd << endl;

}

void task_4()
{
	//4. Дана матрица размера M × N. В каждом ее столбце найти количество элементов, больших 
	//	среднего арифметического всех элементов этого столбца


	int M, N;
	cout << "\nВведите M и N: " << endl;
	cin >> M >> N;
	double** a = new double* [M];
	for (int i = 0; i < M; i++)
		a[i] = new double[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	double average;
	int count;
	for (int i = 0; i < N; i++) {
		average = 0;
		count = 0;
		for (int j = 0; j < M; j++) {
			average += a[j][i];
		}
		average /= M;
		for (int j = 0; j < M; j++) {
			if (a[j][i] > average)
				count++;
		}
		cout << i+1 << " Столбец, кол-во элементов " << count << endl;
	}
}

void task_5()
{
	//5. Дана целочисленная матрица размера M × N. Найти номер первого из ее столбцов, содержащих только нечетные 
	//	числа. Если таких столбцов нет, то вывести 0.

	int M, N;
	cout << "\nВведите M и N: " << endl;
	cin >> M >> N;
	int** a = new int* [M];
	for (int i = 0; i < M; i++)
		a[i] = new int[N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "Введите " << i << ", " << j << " элемент массива" << endl;
			cin >> a[i][j];
		}

	int K = 0;
	for (int i = 0; i < N; i++) {
		int j;
		for (j = 0; j < M; j++) {
			if (a[j][i] % 2 == 0)
				break;
		}
		if (j == M) {
			K = i+1;
			break;
		}
	}
	cout << "Ответ: " << K;
}