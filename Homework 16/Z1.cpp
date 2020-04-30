#include <iostream>

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

int main()
{
	const char* str1 = { "I want chiken!" };
	const char* str2 = { "If you want chiken buy and eat it!!!" };
	int res=mystrcmp(str1, str2);

	cout << res;
}

