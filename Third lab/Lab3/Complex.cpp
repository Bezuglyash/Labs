#include "pch.h" 
#include "Complex.h"
#include <iostream> 
using namespace std;

void Complex::setInform()
{
	cout << " ������� �������������� �����: ";
	cin >> Re_z;
	cout << " ������� ������ �����: ";
	cin >> Im_z;
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
