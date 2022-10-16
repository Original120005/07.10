#pragma once
#include "Info.h"
#include "Withoutlife.h"
#include <iostream>
using namespace std;

class Fox : public Info {
protected:
	int year;
	int amount_fox;

public:
	Fox() {
		year = 0;
		amount_fox = 0;
	}

	Fox(int y, const char* n, const char* p) : Info(n, p) {
		year = y;
	}

	void Death() {
		if (year > 4) {
			cout << name << " is death!" << endl;
		}
		else if (year >= 0 && year <= 4) {
			cout << name << " is alive!" << endl;
		}
	}

	void Print() {
		cout << "Enter age of " << name << ": "; cin >> year;

		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
		cout << "Age: " << year << endl;

		this->Death();
	}

};
