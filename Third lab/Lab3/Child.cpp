#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 
using namespace std;

void Child::set_information()
{
	cout << " ���: ";
	cin >> name;
	cout << " �������: ";
	cin >> surname;
	cout << " �������: ";
	cin >> age;
}

void Child::get_information()
{
	cout << " ���: " << name << endl;
	cout << " �������: " << surname << endl;
	cout << " �������: " << age << endl;
}