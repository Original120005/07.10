#pragma once
#include "Info.h"
#include <iostream>
using namespace std;

class Grass : public Info {
protected:
	int amount_grass;

public:
	void Print() {
		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
	}

};
