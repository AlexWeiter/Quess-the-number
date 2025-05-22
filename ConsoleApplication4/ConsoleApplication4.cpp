// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

		cout << "загадйте число от 1 до 100 и я угадаю его за ссемь шагов" << endl;

	cout << "введите число от 1 до 100" << endl;
	int number;
	cin >> number;
	if (number < 1 || number > 100) {
		cout << "число вне диапазона" << endl;
		return 0;
	}
	int low = 1;
	int high = 100;
	int guess;
	for (int i = 0; i < 7; i++) {
		guess = (low + high) / 2;
		cout << "Я думаю, что ваше число " << guess << ". Это правильно? (y/n)" << endl;
		char response;
		cin >> response;
		if (response == 'y') {
			cout << "Ура! Я угадал ваше число!" << endl;
			return 0;
		}
		else if (response == 'n') {
			cout << "Ваше число больше или меньше? (b/m)" << endl;
			char hint;
			cin >> hint;
			if (hint == 'b') {
				low = guess + 1;
			}
			else if (hint == 'm') {
				high = guess - 1;
			}
		}
	}
	cout << "Я не смог угадать ваше число за семь попыток." << endl;
	return 0;
}