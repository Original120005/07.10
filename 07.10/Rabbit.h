#pragma once
#include "Info.h"
#include <iostream>
using namespace std;

class Rabbit : public Info {
protected:
	int year;
	int amount_rabbit;

public:
	Rabbit() {
		year = 0;
		amount_rabbit = 0;
	}

	Rabbit(int y, const char* n, const char* p) : Info(n, p) {
		year = y;
	}

	void Death() {
		if (year > 9) {
			cout << name << " is death!" << endl;
		}
		else if (year >= 0 && year <= 9) {
			cout << name << " is alive!" << endl;
		}
	}

	void Print() {
		cout << "Enter life span of " << name << ": "; cin >> year;

		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
		cout << "Life span: " << year << endl;

		this->Death();
	}

};
