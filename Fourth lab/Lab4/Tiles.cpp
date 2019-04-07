#include "pch.h" 
#include "Tiles.h"
#include <string>
#include <iostream> 
using namespace std;

Tiles::Tiles()
{
	brand = "��� ������";
	size_h = 0.0;
	size_w = 0.0;
	price = 0.0;
	cout << " �������� ������ �����������\n";
}

Tiles::Tiles(string b, double height, double width, double cost)
{
	brand = b;
	size_h = height;
	size_w = width;
	price = cost;
	cout << " �������� ����������� � �����������\n";
}

Tiles::Tiles(const Tiles& tile)
{
	brand = tile.brand;
	size_h = tile.size_h;
	size_w = tile.size_w;
	price = tile.price;
	cout << " �������� ����������� �����������\n";
}

Tiles::Tiles(double cost) : price(cost)
{
	brand = "��� ������";
	size_h = 0.0;
	size_w = 0.0;
	cout << " �������� ����������� �������������\n";
}

Tiles::~Tiles()
{
	cout << " �������� ������ ������ " << brand << endl;
}

void Tiles::getData()
{
	cout << " �����: " << brand << endl;
	cout << " ������: " << size_h << endl;
	cout << " ������: " << size_w << endl;
	cout << " ����: " << price << endl;
}