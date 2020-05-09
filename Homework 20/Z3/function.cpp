#include <iostream>
#include "function.h"
#include <ctime>

using namespace std;

//================================================//

void rand_arrint(int arr[],int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() * 50 / RAND_MAX;
	}
}

void rand_arrdouble(double arr[], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() * 50.1 / RAND_MAX;
	}
}

void rand_arrchar(char arr[], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() * 50 / RAND_MAX;
	}
}

//===============Рандомное заполнение=============//

void show_arrint(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}

void show_arrdouble(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}

void show_arrchar(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}

//============Вывод Массива=======================//

void min_arrint(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

void min_arrdouble(double arr[], int size) {
	double temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

void min_arrchar(char arr[], int size) {
	char temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

//============Минимальный Элемент=================//

void max_arrint(int arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		if (arr[0] < arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

void max_arrdouble(double arr[], int size) {
	double temp = 0;
	for (int i = 0; i < size; i++) {
		if (arr[0] < arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

void max_arrchar(char arr[], int size) {
	char temp = 0;
	for (int i = 0; i < size; i++) {
		if (arr[0] < arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	cout << arr[0];
}

//============Максимальный Элемент================//

void sortint(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	show_arrint(arr, size);
}

void sortdouble(double arr[], int size) {
	double temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	show_arrdouble(arr, size);
}

void sortchar(char arr[], int size) {
	char temp;
	for (int i = 0; i < size; i++) {
		if (arr[0] > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	show_arrchar(arr, size);
}

//============Сортировка==========================//

void reductint(int arr[]) {
	int elem;
	cout << "Какой элемент вы хотите изменить?";
	cin >> elem;

	cout << "Введите число на которое вы хотите изменить прежнее: ";
	cin >> arr[elem - 1];
}

void reductdouble(double arr[]) {
	int elem;
	cout << "Какой элемент вы хотите изменить?";
	cin >> elem;

	cout << "Введите число на которое вы хотите изменить прежнее: ";
	cin >> arr[elem - 1];
}

void reductchar(char arr[]) {
	int elem;
	cout << "Какой элемент вы хотите изменить?";
	cin >> elem;

	cout << "Введите число на которое вы хотите изменить прежнее: ";
	cin >> arr[elem - 1];
}

//======Изменение элемента массива================//


