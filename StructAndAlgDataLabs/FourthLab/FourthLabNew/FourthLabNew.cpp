#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct BusRoute {
	string flightNumber;
	string nameOfDestination;
	string departureTime;
	string ticketPrice;

	friend int AddBase(vector <BusRoute>& list);
	friend void OutputList(vector <BusRoute>& list, int size);
	friend void Sort(vector <BusRoute>& list, int size);
	friend void Search(vector <BusRoute>& list, int SIZE);
	friend void InBinarFile(vector <BusRoute>& list, int SIZE);
	friend void OutBinarFile(vector <BusRoute>& list, int SIZE);
};

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <BusRoute> list;
	AddBase(list);
	OutputList(list, list.size());
	Sort(list, list.size());
	OutputList(list, list.size());
	Search(list, list.size());
	InBinarFile(list, list.size());
	OutBinarFile(list, list.size());
}

int AddBase(vector <BusRoute>& list)
{
	ifstream fin;
	BusRoute buffer;
	fin.open("Routes.txt");
	if (!fin.is_open())
	{
		cout << "\n����� �� ����������!\n";
	}
	else
	{
		int count = 0;
		while (!fin.eof() && count != 50)
		{
			getline(fin, buffer.nameOfDestination);
			getline(fin, buffer.ticketPrice);
			getline(fin, buffer.departureTime);
			getline(fin, buffer.flightNumber);
			list.push_back(buffer); 
			count++;
		}
		fin.close();
		cout << "������ ������� ���������!\n";
	}
	return 0;
}

void OutputList(vector <BusRoute>& list, int size)
{
	cout << "\n������ ���������� ���������:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i + 1 << ":" << endl;
		cout << "����� ��������: " << list[i].flightNumber << endl;
		cout << "�������� ��������� ����������� ������: " << list[i].nameOfDestination << endl;
		cout << "���� ������: " << list[i].ticketPrice << endl;
		cout << "����� �����������: " << list[i].departureTime << endl;
		cout << endl;
	}
}

void Sort(vector <BusRoute>& list, int size)
{
	cout << "\nC��������� ��������� �� ������ �����!\n";
	for (int i = 0; i < list.size(); i++)
	{
		for (int j = 0; j < list.size() - i - 1; j++) 
		{
			if (list[j].flightNumber.compare(list[j + 1].flightNumber) > 0)
			{
				swap(list[j], list[j + 1]);
			}
		}
	}
}

void Search(vector <BusRoute>& list, int size)
{
	string buffer;
	int k = 0;
	cout << "\n������� ����� ����� ������� ��� ��������: ";
	getline(cin, buffer);
	cout << endl;
	for (int i = 0; i < list.size(); i++)
	{
		if (buffer == list[i].flightNumber)
		{
			cout << "������� " << i + 1 << ":" << endl;
			cout << "����� ��������: " << list[i].flightNumber << endl;
			cout << "�������� ��������� ����������� ������: " << list[i].nameOfDestination << endl;
			cout << "���� ������: " << list[i].ticketPrice << endl;
			cout << "����� �����������: " << list[i].departureTime << endl;
			cout << endl;
			k++; 
		}
	}
	if (k == 0)
	{
		cout << "������� � ������ ������� �� ������!\n" << endl;
	}
}

void InBinarFile(vector <BusRoute>& list, int size)
{
	ofstream read;
	read.open("BinaryRoutes.dat", ios::binary);
	for (int i = 0; i < size; i++)
	{
		read.write(reinterpret_cast <char*> (&list[i]), sizeof(list[i]));
	}
	read.close();
	cout << "������ � �������� ���� ������ �������!\n";
}

void OutBinarFile(vector <BusRoute>& list, int size)
{
	cout << "����������� ������ �� ��������� �����!\n";
	ifstream in;
	in.open("BinaryRoutes.dat", ios::binary);
	for (int i = 0; i < size; i++)
	{
		in.read(reinterpret_cast <char*> (&list[i]), sizeof(list[i]));
		cout << "������� " << i + 1 << ":" << endl;
		cout << "����� ��������: " << list[i].flightNumber << endl;
		cout << "�������� ��������� ����������� ������: " << list[i].nameOfDestination << endl;
		cout << "���� ������: " << list[i].ticketPrice << endl;
		cout << "����� �����������: " << list[i].departureTime << endl;
		cout << endl;
	}
	in.close();
}