#include <iostream>
#include <string>
#pragma warning(disable : 4996)

using namespace std;

int mystrcmp(const char* str1, const char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 == len2) {
		return 0;
	}
	else if (len1 > len2) {
		return 1;
	}
	else if (len2 > len1) {
		return -1;
	}
}

int StringToNumber(const char* str) {
	int len = strlen(str);
	int sum = 0;

	for (int i = 0; i < len; i++) {
		sum+=(int)str[i];
	}
	return sum;
}

char* Uppercase(const char* str1){
	int len = strlen(str1);
	char* str2=new char[len];
	strcpy(str2, str1);
	for (int i = 0; i < len;i++) {
		if (str2[i] >= 'a' && str2[i] <= 'z') str2[i] = str2[i] - 32;
	}
	return str2;
}

int main()
{
	setlocale(LC_ALL, "rus");
	const char* str1 = { "I want chiken!" };
	const char* str2 = { "If you want chiken buy and eat it!!!" };
	int res=mystrcmp(str1, str2); 

	cout << str1 << endl << str2 << endl;
	cout << "Если 0 = строки равны, 1 = 1 строка больше 2, -1 = 2 строка больше 1:" << res << endl;
	cout << "Строка в числах=" << StringToNumber(str1)<<endl;
	cout << "Строка в верхнем регистре=" << Uppercase(str1);
}

