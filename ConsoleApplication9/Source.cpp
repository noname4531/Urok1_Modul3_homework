#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " Введите номер задания: " << endl;
	cin >> x;
	if (x == 1)
	{
		int h, m, s, d;
		cout << " Введите часы: ";
		cin >> h;
		cout << " Введите минуты: ";
		cin >> m;
		cout << " Введите секунды: ";
		cin >> s;
		d = ((h * 3600) + (m * 60) + s);
		cout << " С начала дня прошло секунд: " << d << endl;
		
	}
	if (x == 2)
	{
		int d, m, s;
		cout << " Введите день месяца: ";
		cin >> d;
		cout << " Введите месяц в числах: ";
		cin >> m;
		s = ((m * 30) - (30 - d));
		cout << " С начала года прошло дней: " << s << endl;
	}
	if (x == 3)
	{
		int d, m, s;
		cout << " Введите день месяца: ";
		cin >> d;
		cout << " Введите месяц в числах: ";
		cin >> m;
		if (m % 2 == 0)
		{
			s = (m * 30) - (30 - d);
			cout << " С начала года прошло дней: " << s << endl;
		}
		else if (m % 2)
		{
			s = (m * 31) - (31 - d);
			cout << " С начала года прошло дней: " << s << endl;
		}
	}
		if (x == 4)
		{
			int d, x, y;
			cout << " Введите число: ";
			cin >> d;
			x = d / 10;
			cout << x << endl;
			y = d % 10;
			cout << y << endl;
		
		}
		if (x == 5)
		{
			int x, y, z;
			cout << " Введите первое число: ";
			cin >> x;
			cout << " Введите второе число: ";
			cin >> y;
			cout << " Введите третье число: ";
			cin >> z;
			if ((x < y) && (x < z))
				cout << " Наименьшее число: " << x << endl;
			else if ((y < z) && (y < z))
				cout << " Наименьшее число: " << y << endl;
			else if ((z < y) && (z < x))
				cout << " Наименьшее число: " << z << endl;
		}
		if (x == 6)
		{
			int x, y;
			cout << " Введите первое число: ";
			cin >> x;
			cout << " Введите второе число: ";
			cin >> y;
			if (y % x==0)
				cout << "Второе число кратно первому" << endl;
			else
				cout << "Второе число не кратно первому" << endl;
		}
}
