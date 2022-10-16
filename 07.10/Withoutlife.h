#pragma once
#include <iostream>
using namespace std;

class AbsenceOfLife {
	int amount_f;
	int amount_r;
	int amount_g;

public:
	AbsenceOfLife() {
		amount_f = 0;
		amount_r = 0;
		amount_g = 0;
	}

	void Input() {
		cout << "\n\nEnter amount of Fox: ";
		cin >> amount_f;

		cout << "Enter amount of Rabbit: ";
		cin >> amount_r;

		cout << "Enter amount of Grass: ";
		cin >> amount_g;
	}

	void Compare() {
		if (amount_g > amount_r) {
			cout << "Grass keeps growing" << endl;
		}
		else if (amount_g < amount_r) {
			cout << "Grass was destroyed due to rabbits" << endl;
		}
		else if (amount_r < amount_f) {
			cout << "Rabbits were eaten by foxes" << endl;
		}
	}

};
