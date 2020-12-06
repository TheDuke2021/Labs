//ВВП, Лабораторная работа номер 20, Бараев Дамир 201-725
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

	//1. Дан целочисленный массив A размера N. Назовем серией группу подряд идущих одинаковых элементов, а 
	//	длиной серии — количество этих элементов (длина серии может быть равна 1). Сформировать два новых 
	//	целочисленных массива B и C одинакового размера, записав в массив B длины всех серий исходного массива, 
	//	а в массив C — значения элементов, образующих эти серии

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;
	int* a = new int[N];
	int* b = new int[N];
	int* c = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < N; i++) {
		b[i] = 0;
		c[i] = 0;
	}

	//Индекс конечных элементов массивов B и C
	int last = -1;
	//Булева переменная показыват, что сейчас идёт серия
	bool isSeries = false;
	//Ищем серии
	for (int i = 0; i < N-1; i++) {
		if (isSeries) {
			b[last]++;
			if (a[i] != a[i + 1])
				isSeries = false;
		}
		else {
			last++;
			c[last] = a[i];
			b[last]++;
			if (a[i] == a[i + 1])
				isSeries = true;
		}
	}

	//Проверка элемента на границе
	if (isSeries)
		b[last]++;
	else {
		last++;
		c[last] = a[N-1];
		b[last]++;
	}
	



	cout << "Массив B: " << endl;
	for (int i = 0; i <= last; i++) {
		cout << b[i] << " ";
	}

	cout <<  endl;

	cout << "Массив C: " << endl;
	for (int i = 0; i <= last; i++) {
		cout << c[i] << " ";
	}

}

void task_2()
{
	//2. Дано целое число L (> 0) и целочисленный массив размера N. Заменить каждую серию массива, длина 
	//	которой больше L, на один элемент с нулевым значением

	//Воспользуемся кодом из 1 задачи

	int N, L;
	cout << "\nВведите N и L: " << endl;
	cin >> N >> L;
	int* a = new int[N];
	int* b = new int[N];
	int* c = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N; i++) {
		b[i] = 0;
		c[i] = 0;
	}

	//Индекс конечных элементов массивов B и C
	int last = -1;
	//Булева переменная показыват, что сейчас идёт серия
	bool isSeries = false;
	//Ищем серии
	for (int i = 0; i < N - 1; i++) {
		if (isSeries) {
			b[last]++;
			if (a[i] != a[i + 1])
				isSeries = false;
		}
		else {
			last++;
			c[last] = a[i];
			b[last]++;
			if (a[i] == a[i + 1])
				isSeries = true;
		}
	}

	//Проверка элемента на границе
	if (isSeries)
		b[last]++;
	else {
		last++;
		c[last] = a[N - 1];
		b[last]++;
	}

	//Исходная позиция на которую будем вставлять элемент
	int tpos = 0;

	for (int i = 0; i < N; i++) {
		if (b[i] > L) {
			a[tpos] = 0;
			tpos++;
		}
		else {
			for (int j = 0; j < b[i]; j++) {
				a[tpos] = c[i];
				tpos++;
			}
		}
	}

	cout << "Массив: " << endl;
	for (int i = 0; i < tpos; i++) {
		cout << a[i] << " ";
	}


}

void task_3()
{
	//3. Дано целое число K (> 0) и целочисленный массив размера N. Поменять местами последнюю серию массива 
	//	и его серию с номером K 

	int N, K;
	cout << "\nВведите N и K: " << endl;
	cin >> N >> K;
	int* a = new int[N];
	int* b = new int[N];
	int* c = new int[N];
	cout << "Введите " << N << " элементов массива: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N; i++) {
		b[i] = 0;
		c[i] = 0;
	}

	//Индекс конечных элементов массивов B и C
	int last = -1;
	//Булева переменная показыват, что сейчас идёт серия
	bool isSeries = false;
	//Ищем серии
	for (int i = 0; i < N - 1; i++) {
		if (isSeries) {
			b[last]++;
			if (a[i] != a[i + 1])
				isSeries = false;
		}
		else {
			last++;
			c[last] = a[i];
			b[last]++;
			if (a[i] == a[i + 1])
				isSeries = true;
		}
	}

	//Проверка элемента на границе
	if (isSeries)
		b[last]++;
	else {
		last++;
		c[last] = a[N - 1];
		b[last]++;
	}

	//Исходная позиция на которую будем вставлять элемент
	int tpos = 0;

	K--;

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < b[i]; j++) {
			a[tpos] = c[i];
			tpos++;
		}
	}

	for (int j = 0; j < b[last]; j++) {
		a[tpos] = c[last];
		tpos++;
	}

	for (int i = K + 1; i < last; i++) {
		for (int j = 0; j < b[i]; j++) {
			a[tpos] = c[i];
			tpos++;
		}
	}

	for (int j = 0; j < b[K]; j++) {
		a[tpos] = c[K];
		tpos++;
	}
	

	cout << "Массив: " << endl;
	for (int i = 0; i < tpos; i++) {
		cout << a[i] << " ";
	}


}

void task_4()
{
	//4. Дано множество A из N точек (точки заданы своими координатами x, y). Среди всех точек этого 
	//	множества, лежащих во второй четверти, найти точку, наиболее удаленную от начала координат. Если 
	//	таких точек нет, то вывести точку с нулевыми координатами


	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;

	double** a = new double* [N];
	for (int i = 0; i < N; i++)
		a[i] = new double[2];
	cout << "Введите " << N << " точек (х, у): " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i][0];
		cin >> a[i][1];
	}

	double x = 0, y = 0;
	double dist = 0;
	for (int i = 0; i < N; i++) {
		if (a[i][0] < 0 && a[i][1] > 0 && (sqrt(a[i][0]* a[i][0] + a[i][1]* a[i][1]) > dist)) {
			dist = sqrt(a[i][0] * a[i][0] + a[i][1] * a[i][1]);
			x = a[i][0];
			y = a[i][1];
		}
	}

	cout << "x и y: " << x << " " << y << endl;

}

void task_5()
{
	//5. Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). Найти 
	//	наибольший периметр треугольника, вершины которого принадлежат различным точкам множества A, и 
	//	сами эти точки (точки выводятся в том же порядке, в котором они перечислены при задании множества A).

	int N;
	cout << "\nВведите N: " << endl;
	cin >> N;

	double** a = new double* [N];
	for (int i = 0; i < N; i++)
		a[i] = new double[2];
	cout << "Введите " << N << " точек (х, у): " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i][0];
		cin >> a[i][1];
	}

	double x1, x2, x3, y1, y2, y3;
	x1 = x2 = x3 = y1 = y2 = y3 = 0;
	double perimeter = 0;
	for (int i = 0; i < N; i++) {
		for(int j = i + 1; j < N; j++)
			for (int k = j + 1; k < N; k++) {
				double AB, BC, AC, per;
				AB = sqrt(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
				BC = sqrt(pow(a[i][0] - a[k][0], 2) + pow(a[i][1] - a[k][1], 2));
				AC = sqrt(pow(a[j][0] - a[k][0], 2) + pow(a[j][1] - a[k][1], 2));
				per = AB + BC + AC;
				if (per > perimeter) {
					perimeter = per;
					x1 = a[i][0];
					y1 = a[i][1];
					x2 = a[j][0];
					y2 = a[j][1];
					x3 = a[k][0];
					y3 = a[k][1];
				}
			}
	}

	cout << "Точка A: " << x1 << " " << y1 << endl;
	cout << "Точка B: " << x2 << " " << y2 << endl;
	cout << "Точка C: " << x3 << " " << y3 << endl;

	

}