#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double side;
	double r;
	double x;
	double y;
	cout << "������� ������� �������� ��������: ";
	cin >> side;
	cout << "������� ������ ����������: ";
	cin >> r;
	cout << "������� X: ";
	cin >> x;
	cout << "������� Y: ";
	cin >> y;
	if (x >= -side / 2 && x <= side / 2 && y >= -side / 2 && y <= side / 2) 
	{
		if (x * x + y * y <= r * r) 
		{
			cout << "����� (" << x << "," << y << ") �� ����������� �������� �������!";
		}
		else 
		{
			cout << "����� (" << x << "," << y << ") ����������� �������� �������!";
		}
	}
	else 
	{
		cout << "����� (" << x << "," << y << ") �� ����������� �������� �������!";
	}
}