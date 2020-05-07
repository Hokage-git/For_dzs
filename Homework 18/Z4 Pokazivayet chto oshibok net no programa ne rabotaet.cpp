#include <iostream>
#include <locale>
#include <cmath>
#include <conio.h>
#include <string>

using namespace std;

typedef struct MyAutopark {
	string name;
	double Long;
	int klirens;
	double liters;
	double diametr;
	double dvizhok;
	string color;
	string korobka;
} avito;

MyAutopark* database;

double clong() {
	double Clong;
	cout << "Введите Длинну вашей машины в метрах ";
	cin >> Clong;
	return Clong;
}

int klirenc() {
	int klir;
	cout << "Введите клиренс в среднем положении пневмоподвески ";
	cin >> klir;
	return klir;
}

double lit() {
	double bak;
	cout << "Введите объём топливного бака ";
	cin >> bak;
	return bak;
}

double wheel() {
	double diam;
	cout << "Введите диаметр колёс в дюймах ";
	cin >> diam;
	return diam;
}

double dvizh() {
	double mosh;
	cout << "Введите мощность двигателя в лошадиных силах ";
	cin >> mosh;
	return mosh;
}

string col() {
	string cvet;
	cout << "Введите цвет своей машины ";
	cin >> cvet;
	return cvet;
}

int cbox() {
	int peredachi = 0;

	cout << "Какой тип коробки передач у вас ?\n"
		<< "1.Автомат\n"
		<< "2.Механика\n";

	while (peredachi != 1 || peredachi != 2) {
		cin >> peredachi;
		if (peredachi == 1)
			return 1;
		else if (peredachi == 2)
			return 2;
	}
}

string model() {
	string name1 = {};
	cout << "Введите имя вашего авто ";
	cin >> name1;
	return name1;
}

void show(int size) {
	for (int i = 0; i < size; i++) {
		cout <<"Машина номер "<< i+1 << ".\n";
		cout << "Имя: " << database[i].name << endl;
		cout << "Длинна=" << database[i].Long << endl;
		cout << "Клиренс=" << database[i].klirens << endl;
		cout << "Объём бака=" << database[i].liters << endl;
		cout << "Диаметр колёс=" << database[i].diametr << endl;
		cout << "Мощность двигателя=" << database[i].dvizhok << " Лошадиных(-ая) сил(-а)" << endl;
		cout << "Цвет=" << database[i].color << endl;
		cout << "Тип коробки передач=" << database[i].korobka<<endl<<endl;
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	int size;
	const char* mach = "Механика";
	const char* automatik = "Автомат";
	int box;

	cout << "Это ваш автопарк.\n" <<
		"Сколько машин вы хотите поместить в него ?\n";
	cin >> size;

	database = new MyAutopark[size];

	cout << "Пришло время заполнить его:\n";

	for (int i = 0; i < size; i++) {
		cout << "Машина номер " << i + 1 << endl;

		database[i].name= model();
		database[i].Long = clong();
		database[i].klirens = klirenc();
		database[i].liters = lit();
		database[i].diametr = wheel();
		database[i].dvizhok = dvizh();
		database[i].color = col();
		box = cbox();
		if (box == 1)
			database[i].korobka=automatik;
		else if (box == 2)
			database[i].korobka= mach;

		system("cls");
	}
	show(size);
	delete[] database;
}
