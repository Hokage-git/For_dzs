#include <iostream>
#include <string>

using namespace std;

struct Student {
	string name;
	string soname;
	string group;
	int assessment[5];
};

Student* database;
Student tempbase;

void input_assessment(int size, int count) {
	for (int i = 0; i < 5; i++) {
		cin >> database[count].assessment[i];
	}
}

void show_high(int size) {
	int a;
	int check[5] = { 0,0,0,0,0 };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {

			a = database[i].assessment[j];
			check[a - 1]++;

		}

		if (check[4] >= 4) {
			cout << "Имя: " << database[i].name << endl
				<< "Фамилия: " << database[i].soname << endl
				<< "Группа: " << database[i].group << endl;
			cout << "Оценки: ";
			for (int h = 0; h < 5; h++) {
				cout << database[i].assessment[h] << " ";
			}
			cout << endl;
		}

		for (int h = 0; h < 5; h++)
			check[h] = 0;
	}
}

void show_low(int size) {
	int a;
	int check[5] = { 0,0,0,0,0 };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {

			a = database[i].assessment[j];
			check[a - 1]++;

		}

		if ((check[2] + check[1]) >= 3) {
			cout << "Имя: " << database[i].name << endl
				<< "Фамилия: " << database[i].soname << endl
				<< "Группа: " << database[i].group << endl;
			cout << "Оценки: ";
			for (int h = 0; h < 5; h++) {
				cout << database[i].assessment[h] << " ";
			}
			cout << endl;
		}

		for (int h = 0; h < 5; h++)
			check[h] = 0;
	}
}

void show(int size) {
	for (int i = 0; i < size; i++) {
		cout << "Имя: " << database[i].name << endl
			<< "Фамилия: " << database[i].soname << endl
			<< "Группа: " << database[i].group << endl;
		cout << "Оценки: ";
		for (int h = 0; h < 5; h++) {
			cout << database[i].assessment[h] << " ";
		}
		cout << endl;
	}
}

int main() {
	setlocale(0, "");

	bool exit = true;
	int size;
	int choose;
	cout << "Введите количество учеников в вашей группе: ";
	cin >> size;

	database = new Student[size];

	for (int i = 0; i < size; i++) {

		cout << "Введите имя и фамилию студента через пробел: ";
		cin >> database[i].name >> database[i].soname;

		cout << "Введите номер название группы(пример:Физмат): ";
		cin >> database[i].group;

		cout << "Введите оценки студента через пробелы: ";
		input_assessment(size, i);
		system("cls");
	}

	cout << "Как вы хотите отобразить список учеников?\n"
		<< "1.>75% отлично\n"
		<< "2.>50% 2 и 3\n"
		<< "3.полный список\n";

	while (exit == true) {
		cin >> choose;
		switch (choose) {
		case 1:
			system("cls");
			show_high(size);
			exit = false;
			break;
		case 2:
			system("cls");
			show_low(size);
			exit = false;
			break;
		case 3:
			system("cls");
			show(size);
			exit = false;
			break;
		}
	}
	delete[] database;