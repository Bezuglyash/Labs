#include "pch.h" 
#include "Complex.h"
#include <iostream> 
using namespace std;

Complex::Complex()
{
	Re_z = 0.0;
	Im_z = 0.0;
	cout << " �������� ������ �����������\n";
}

Complex::Complex(double x, double y)
{
	Re_z = x;
	Im_z = y;
	cout << " �������� ����������� � �����������\n";
}

Complex::Complex(const Complex& z)
{
	Re_z = z.Re_z;
	Im_z = z.Im_z;
	cout << " �������� ����������� �����������\n";
}

Complex::Complex(double x) : Re_z(x)
{
	Im_z = 0.0;
	cout << " �������� ����������� �������������\n";
}

void Complex::getInform()
{
	cout << " ��� ������������ �����: z = " << Re_z << " + " << Im_z << " * i" << endl;
	cout << " Re_z = " << Re_z << endl;
	cout << " Im_z = " << Im_z << endl;
	double modul;
	modul = sqrt(Re_z * Re_z + Im_z * Im_z);
	cout << " ������ ������������ �����: |z| = " << modul;
}