#include <iostream>

using namespace std;

struct man {
	string surname;
	string name;
	int age;
	int dob[3];
	//	 дд.мм.гггг
};

man* database;
man tempbase;

void sort(int size) {
	for (int i = 0; i < size; i++) {
		if (database[0].surname.length() < database[i].surname.length()) {
			tempbase = database[i];
			database[i] = database[0];
			database[0] = tempbase;
		}
	}
	for (int i = 0; i < size; i++) {
			cout << "Имя: " << database[i].name << endl
				<< "Фамилия: " << database[i].surname << endl
				<< "Возраст: " << database[i].age << endl
				<< "Дата рождения: " << database[i].dob[0] << "." << database[i].dob[1] << "." << database[i].dob[2] << endl;
	}
}

void birthday(int size) {
	setlocale(0, "");
	int month;
	cout << "Введите номер месяца для показа именинников: ";
	cin >> month;
	
	for (int i = 0; i < size; i++) {
		if (database[i].dob[1] == month - 1) {
			cout << database[i].name << " " << database[i].surname << " его день рождения " << database[i].dob[0] << endl;
		}
	}
}

void name_found(int size) {
	setlocale(0, "");
	string name1;
	string surname1;
	cout << "Введите имя и фамилию человека, которого хотите найти: ";
	cin >> name1 >> surname1;

	for (int i = 0; i < size; i++) {
		if (database[i].name == name1 && database[i].surname == surname1) {
			cout << "Имя: " << database[i].name << endl
				<< "Фамилия: " << database[i].surname << endl
				<< "Возраст: " << database[i].age << endl
				<< "Дата рождения: " << database[i].dob[0] <<"."<< database[i].dob[1] <<"."<< database[i].dob[2] << endl;
		}
	}

}

void edit(int size) {
	int num;
	cout << "Введите номер сотрудника для редакции: ";
	cin >> num;

	cout << "Укажите имя и фамилию через пробел: ";
	cin >> database[num].name >> database[num].surname;

	cout << "Укажите количество полных лет: ";
	cin >> database[num].age;

	cout << "Введите дату рождения по форме дд.мм.гггг: ";
	cin >> database[num].dob[0] >> database[num].dob[1] >> database[num].dob[2];
}

int main()
{
	setlocale(0, "");
	int size;
	int choose;
	cout << "Сколько у вас человек? ";
	cin >> size;
	
	database = new man[size];

	for (int i = 0; i < size; i++) {
		cout << "Укажите имя и фамилию через пробел: ";
		cin >> database[i].name >> database[i].surname;

		cout << "Укажите количество полных лет: ";
		cin >> database[i].age;

		cout << "Введите дату рождения по форме дд.мм.гггг: ";
		cin >> database[i].dob[0] >> database[i].dob[1] >> database[i].dob[2];
	}
	
	cout << "Что вам требуется для работы с базой данных?" << endl
		<< "1.Вывод информации с сортировкой по фамилии или имени" << endl
		<< "2.Вывод списка именинников месяца с указанием даты рождения" << endl
		<< "3.-" << endl
		<< "4.Поиск по фамилии и имени" << endl
		<< "5.Редактирование записи" << endl;
	
	bool exit = true;
	while (exit == true) {
		switch (choose) {
		case 1:
			system("cls");
			sort(size);
			exit = false;
			break;
		case 2:
			system("cls");
			birthday(size);
			exit = false;
			break;
		case 3:
			system("cls");
			cout << "Ну написано же минус, зачем выбирать этот вариант?";
			exit = false;
			break;
		case 4:
			system("cls");
			name_found(size);
			exit = false;
			break;
		case 5:
			system("cls");
			edit(size);
			exit = false;
			break;
		}
	}
}

