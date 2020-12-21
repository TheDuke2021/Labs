//ВВП, Лабораторная работа номер 25, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

char* locale = setlocale(LC_ALL, "rus");

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();

ofstream fout;
ifstream fin;

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

	//1. Дан символьный файл, содержащий по крайней мере один символ пробела. Удалить все его элементы, расположенные 
	//	перед первым символом пробела, включая и этот пробел.

	fin.open("lab1.txt");
	char buff[256];
	fin.getline(buff, 256);
	fin.close();
	//Вычисляем длину строки в файле
	int i;
	for (i = 0; i < 256; i++)
		if (buff[i] == '\0')
			break;
	//Длина строки в файле
	int n = i;
	for (i = 0; i < n; i++)
		if (buff[i] == ' ')
			break;
	//Открыть файл с удалением его содержания
	fout.open("lab1.txt", ios_base::trunc);
	i++;
	for (; i < n; i++)
		fout << buff[i];
	fout.close();

}




void task_2()
{
	//2. Дано имя файла и целые положительные числа N и K. Создать текстовый файл с 
	//	указанным именем и записать в него N строк, каждая из которых состоит из K символов «*» (звездочка).


	string name;
	int N, K;
	cout << "Введите имя файла: " << endl;
	getline(cin, name);
	cout << "Введите N и K: " << endl;
	cin >> N >> K;
	name += ".txt";
	fout.open(name, ios_base::trunc);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			fout << "*";
		}
		fout << "\n";
	}
	fout.close();
}

void task_3()
{
	//3. Даны два текстовых файла. Добавить в начало первого файла содержимое второго файла

	fin.open("lab3_1.txt");
	char buff[256];
	fin.getline(buff, 256);
	fin.close();
	//Вычисляем длину строки в файле
	int i;
	for (i = 0; i < 256; i++)
		if (buff[i] == '\0')
			break;
	//Длина строки в файле
	int n = i;
	fout.open("lab3_2.txt", ios_base::app);
	for (i = 0; i < n; i++)
		fout << buff[i];
	fout.close();

}

void task_4()
{
	//4. Дан текстовый файл. Заменить в нем все подряд идущие пробелы на один пробел.

	fin.open("lab4.txt");
	char buff[256];
	fin.getline(buff, 256);
	fin.close();
	//Вычисляем длину строки в файле
	int i;
	for (i = 0; i < 256; i++)
		if (buff[i] == '\0')
			break;
	//Длина строки в файле
	int n = i;
	fout.open("lab4.txt", ios_base::trunc);
	bool doubleSpace = false;
	for (i = 0; i < n; i++) {
		if (doubleSpace && buff[i] == ' ')
			continue;
		else {
			if (buff[i] == ' ')
				doubleSpace = true;
			else
				doubleSpace = false;
			fout << buff[i];
		}
	}
	fout.close();
	
}

void task_5()
{
	//5. Дан текстовый файл. Найти количество абзацев в тексте, если первая строка каждого абзаца начинается 
	//	с 5 пробелов («красная строка»). Пустые строки между абзацами не учитывать.

	fin.open("lab5.txt");
	//Количество абзацев
	int count = 0;
	if (fin.fail()) {
		cout << "File does NOT exist" << endl;
		return;
	}
		
	do {
		char buff[256];
		fin.getline(buff, 256);
		//Вычисляем длину строки в файле
		int i;
		for (i = 0; i < 256; i++)
			if (buff[i] == '\0')
				break;
		//Длина строки в файле
		int n = i;
		for (i = 0; i < n - 4; i++) {
			if (buff[i] == ' ' &&
				buff[i + 1] == ' ' &&
				buff[i + 2] == ' ' &&
				buff[i + 3] == ' ' &&
				buff[i + 4] == ' ')
				{
				count++;
				i += 4;
			}
		}
	} while (!fin.eof());

	fin.close();
	cout << "Количество абзацев: " << count << endl;
}