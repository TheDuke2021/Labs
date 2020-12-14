//ВВП, Лабораторная работа номер 23, Бараев Дамир 201-725
//Программа написана на языке C++

#include <iostream>
#include <string>

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

	//1. Дан символ C. Вывести два символа, первый из которых предшествует символу C в кодовой таблице, 
	//	а второй следует за символом C.

	char C;
	cout << "Введите C: " << endl;
	cin >> C;
	
	cout << "Предшествующий: " << (char)(C - 1) << endl;
	cout << "Следующий: " << (char)(C + 1) << endl;

}




void task_2()
{
	//2. Дана непустая строка S. Вывести строку, содержащую символы строки S, между которыми 
	//	вставлено по одному пробелу.


	string S;
	cout << "Введите S: " << endl;
	cin >> S;

	int n = S.length();
	for (int i = 0; i < n; i++)
		cout << S[i] << " ";
	
	cout << endl;
}

void task_3()
{
	//3. Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.

	string S;
	cout << "Введите S: " << endl;
	cin >> S;

	int n = S.length();
	int count = 0;
	for (int i = 0; i < n; i++) {
		char c = S[i];
		if (c >= 65 && c <= 90)
			count++;
	}
	cout << "Количество: " << count << endl;

}

void task_4()
{
	//4. Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S

	char C;
	string S;
	cout << "Введите C и S: " << endl;
	cin >> C >> S;

	int n = S.length();
	string *S2 = new string[n * 2];
	int count = 0;
	int index = 0;
	for (int i = 0; i < n; i++) {
		S2[index++] = S[i];
		if (S[i] == C)
			S2[index++] = S[i];
	}
	for (int i = 0; i < index; i++)
		cout << S2[i];
	cout << "\n";
}

void task_5()
{
	//5. Даны строки S и S0. Найти количество вхождений строки S0 в строку S.

	string S;
	string S0;
	cout << "Введите S и S0: " << endl;
	cin >> S >> S0;

	int count = 0;
	for (int i = 0; i < S.length()-S0.length()+1; i++) {
		int j;
		for (j = 0; j < S0.length(); j++) {
			if (S[i + j] != S0[j])
				break;
		}
		if (j == S0.length())
			count++;
	}

	cout << "Количество вхождений: " << count << endl;
}