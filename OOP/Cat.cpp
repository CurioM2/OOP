#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::SetBreed(const char* value) {
	int breed_len = strlen(value) + 1;
	breed = new char[breed_len];
	strcpy_s(breed, breed_len, value);
}

void Cat::SetName(const char* value) {
	int name_len = strlen(value) + 1;
	name = new char[name_len];
	strcpy_s(name, name_len, value);
}

void Cat::SetAge(int value) {
	if (value < 0) {
		cout << "³� �� ���� ���� ����� ����. �������� ���������� ��������";
		age = 1;
		return;
	}
	age = value;
}

void Cat::MakePurr() {
	cout << "���-���-���\n";
}

void Cat::AskForFood() {
	cout << name << ": �����������������!" << '\n';
}
