#include "Stack.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите размер стэка: ";
	cin >> n;
	Stack a(n);
	int num;
	cout << a << endl;
	cout << "1. Удалить элемент из стэка\n";
	cout << "2. Добавить элемент в стэка\n";
	cout << "3. Вывести стэк на экран\n";
	cout << "4. Выход\n";
	int c = 0;
	while (c != 4)
	{
		cout << "Выберите операцию: ";
		cin >> c;
		switch (c)
		{
		case 1:
			a.pop();
			break;
		case 2:
			cout << "Введите число, которое хотите добавить в стэк: ";
			cin >> num;
			a.push(num);
			break;
		case 3:
			cout << a << endl;
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "Введите номер операции корректно!";
			break;
		}
	}
	return 0;
}