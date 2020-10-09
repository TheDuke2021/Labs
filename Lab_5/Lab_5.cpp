//ВВП, Лабораторная работа номер 5, Бараев Дамир 201-725
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
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
}

void task_1()
{

	//1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)
	int x1, x2, y1, y2;
	cout << "Type first point's coordinates: " << endl;
	cin >> x1 >> y1;
	cout << "\nType second point's coordinates: " << endl;
	cin >> x2 >> y2;
	double r = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	cout << "Length is: ";
	printf_s("%.2lf, %s", r, "\n");

}

void task_2()
{

	//2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC
	//   и BC и их сумму.
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	int ac = abs(a - c);
	int bc = abs(b - c);
	cout << "\nAC is " << ac;
	cout << "\nBC is " << bc;
	cout << "\nAC+BC is " << ac+bc << endl;

}

void task_3()
{
	//3. Даны три точки A, B, C на числовой оси. Точка C расположена
	//   между точками A и B.Найти произведение длин отрезков AC и BC
	int a, b, c;
	cout << "Input a, b, c\n";
	cin >> a >> b >> c;
	int ac = abs(a - c);
	int bc = abs(b - c);
	cout << "\nAC x BC is " << ac*bc << endl;
}

void task_4()
{
	//4. Даны координаты двух противоположных вершин прямоугольника :
	//   (x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.
	int x1, x2, y1, y2;
	cout << "Type first point's coordinates: " << endl;
	cin >> x1 >> y1;
	cout << "\nType second point's coordinates: " << endl;
	cin >> x2 >> y2;
	int length = abs(x1 - x2);
	int height = abs(y1 - y2);
	cout << "Perimeter is: " << 2 * (length + height) << endl;
	cout << "Square is: " << length*height << endl;

}

void task_5()
{
	//5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). 
	//   Найти его периметр и площадь
	int x1, x2, x3, y1, y2, y3;
	cout << "Type first point's coordinates: " << endl;
	cin >> x1 >> y1;
	cout << "\nType second point's coordinates: " << endl;
	cin >> x2 >> y2;
	cout << "\nType third point's coordinates: " << endl;
	cin >> x3 >> y3;
	//Находим длину каждой стороны
	double AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double BC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	double AC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	//Проверяем, существует ли такой треугольник
	if (AC >= AB+BC || AB >= AC+BC || BC >= AC+AB) {
		cout << "Да что вы говорите" << endl;
		return;
	}
	//Используем формулу Герона
	double p = (AB + BC + AC)/2;
	double sq = sqrt(p*(p-AB)*(p-BC)*(p-AC));
	cout << "Perimeter is: " << p*2 << endl;
	cout << "Square is: " << sq<< endl;
}