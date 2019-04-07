#include "pch.h" 
#include "Vector.h"
#include <iostream> 
using namespace std;

Vector::Vector()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
	cout << " �������� ������ �����������\n";
}

Vector::Vector(double i, double j, double k)
{
	x = i;
	y = j;
	z = k;
	cout << " �������� ����������� � �����������\n";
}

Vector::Vector(const Vector& vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
	cout << " �������� ����������� �����������\n";
}

Vector::Vector(double j) : y(j)
{
	x = 0.0;
	z = 0.0;
	cout << " �������� ����������� �������������\n";
}

void Vector::get_vector()
{
	cout << " ( " << x << ", " << y << ", " << z << ")";
}