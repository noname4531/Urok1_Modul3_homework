#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " ������� ����� �������: " << endl;
	cin >> x;
	if (x == 1)
	{
		int h, m, s, d;
		cout << " ������� ����: ";
		cin >> h;
		cout << " ������� ������: ";
		cin >> m;
		cout << " ������� �������: ";
		cin >> s;
		d = ((h * 3600) + (m * 60) + s);
		cout << " � ������ ��� ������ ������: " << d << endl;
		
	}
	if (x == 2)
	{
		int d, m, s;
		cout << " ������� ���� ������: ";
		cin >> d;
		cout << " ������� ����� � ������: ";
		cin >> m;
		s = ((m * 30) - (30 - d));
		cout << " � ������ ���� ������ ����: " << s << endl;
	}
	if (x == 3)
	{
		int d, m, s;
		cout << " ������� ���� ������: ";
		cin >> d;
		cout << " ������� ����� � ������: ";
		cin >> m;
		if (m % 2 == 0)
		{
			s = (m * 30) - (30 - d);
			cout << " � ������ ���� ������ ����: " << s << endl;
		}
		else if (m % 2)
		{
			s = (m * 31) - (31 - d);
			cout << " � ������ ���� ������ ����: " << s << endl;
		}
	}
		if (x == 4)
		{
			int d, x, y;
			cout << " ������� �����: ";
			cin >> d;
			x = d / 10;
			cout << x << endl;
			y = d % 10;
			cout << y << endl;
		
		}
		if (x == 5)
		{
			int x, y, z;
			cout << " ������� ������ �����: ";
			cin >> x;
			cout << " ������� ������ �����: ";
			cin >> y;
			cout << " ������� ������ �����: ";
			cin >> z;
			if ((x < y) && (x < z))
				cout << " ���������� �����: " << x << endl;
			else if ((y < z) && (y < z))
				cout << " ���������� �����: " << y << endl;
			else if ((z < y) && (z < x))
				cout << " ���������� �����: " << z << endl;
		}
		if (x == 6)
		{
			int x, y;
			cout << " ������� ������ �����: ";
			cin >> x;
			cout << " ������� ������ �����: ";
			cin >> y;
			if (y % x==0)
				cout << "������ ����� ������ �������" << endl;
			else
				cout << "������ ����� �� ������ �������" << endl;
		}
}
