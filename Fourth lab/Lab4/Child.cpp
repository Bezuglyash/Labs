#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 
using namespace std;

Child::Child()
{
	name = "��� ������";
	surname = "��� ������";
	age = 0;
	cout << " �������� ������ �����������\n";
}

Child::Child(string n, string s_n, int a)
{
	name = n;
	surname = s_n;
	age = a;
	cout << " �������� ����������� � �����������\n";
}

Child::Child(const Child& children)
{
	name = children.name;
	surname = children.surname;
	age = children.age;
	cout << " �������� ����������� �����������\n";
}

Child::Child(string n, int a) : name(n), age(a)
{
	surname = "��� ������";
	cout << " �������� ����������� �������������\n";
}

void Child::get_information()
{
	cout << " ���: " << name << endl;
	cout << " �������: " << surname << endl;
	cout << " �������: " << age << endl;
}