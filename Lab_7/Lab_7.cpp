//ВВП, Лабораторная работа номер 7, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>

using namespace std;

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

	//1. Дано значение угла α в градусах (0 < α < 360). 
	//   Определить значение этого же угла в радианах, учитывая, 
	//   что 180◦ = π радианов.
	int a;
	cout << "Input angle: " << endl;
	cin >> a;
	double rad = (double) a/180;
	printf_s("%s %.2lf%s", "\nIn radians: ", rad, "pi");

}

void task_2()
{

	//2. 2. Дано значение угла α в радианах (0 < α < 2·π). 
	//   Определить значение этого же угла в градусах, 
	//	 учитывая, что 180◦ = π радианов
	double a;
	cout << "Input angle: " << endl;
	cin >> a;
	int deg = (int) (a*180 / 3.14);
	cout << "\nIn degree: " << deg << endl;

}

void task_3()
{
	//3. 3. Известно, что X кг конфет стоит A рублей. Определить, 
	//   сколько стоит 1 кг и Y кг этих же конфет.
	int X, Y, A;
	double price;
	cout << "Input X, A and Y: ";
	cin >> X >> A >> Y;
	price = A / X;
	cout << "\n1kg price is: " << price << endl;
	cout << "Y kg price is: " << price * Y << endl;
}

void task_4()
{
	//4. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. 
	//   Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 
	int v1, v2, T;
	cout << "\nInput v1, v2, T: " << endl;
	cin >> v1 >> v2 >> T;
	int v = v1 + v2;
	int r = v * T + 5;
	cout << "\nDistance is: " << r << endl;

}

void task_5()
{
	//5. Решить линейное уравнение A·x + B = 0, заданное своими 
	//   коэффициентами A и B (коэффициент A не равен 0).
	double A, B;
	cout << "\nInput A and B: " << endl;
	cin >> A >> B;
	//коэффициент А не равен 0
	if (A == 0) return;
	double x = -B / A;
	cout << "\nAnswer is: " << x << endl;
}

void task_6()
{
	//6. Найти решение системы линейных уравнений вида 
	//   A1·x + B1·y = C1,
	//	 A2·x + B2·y = C2,


	//Преобразуем систему в матрицу и решим методом Крамера

	//Входные данные
	double A1, A2, B1, B2, C1, C2;
	cout << "\nInput A1, A2, B1, B2, C1, C2: " << endl;
	cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
	//Ответы
	double delta, deltaX, deltaY, x, y;
	delta = A1 * B2 - B1 * A2;
	deltaX = C1 * B2 - B1 * C2;
	deltaY = A1 * C2 - C1 * A2;
	if (delta == 0)
		if (deltaX == 0 && deltaY == 0)
			cout << "Infinity or no solutions";
		else
			cout << "NO solutions";
	else {
		x = deltaX / delta;
		y = deltaY / delta;
		cout << "\nx = " << x << "\ny = " << y;
	}
}