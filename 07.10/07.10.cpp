#include <iostream>
#include "Fox.h"
#include "Rabbit.h"
#include "Grass.h"
#include "Withoutlife.h"
using namespace std;

int main() {
	Info* info = nullptr;

	int choose = 0;
	cout << "1. Fox\n2. Rabbit\n3. Grass\n-> ";
	cin >> choose;
	cin.ignore();

	switch (choose) {
	case 1:
		info = new Fox();
		break;

	case 2:
		info = new Rabbit();
		break;

	case 3:
		info = new Grass();
		break;
	}
	info->Input();
	info->Print();

	AbsenceOfLife obj;
	obj.Input();
	obj.Compare();



}