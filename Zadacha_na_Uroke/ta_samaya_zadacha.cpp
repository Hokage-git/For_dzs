#include <iostream>
#pragma warning(disable : 4996)

using namespace std;

char* twistWords(const char* str) {
	char* r_str = new char[strlen(str)+1];
	int count = 0;
	int len = strlen(str);
	char current_word[255] = {};
	int j = 0;
	int rev_count;
	strcpy(r_str, str);

	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			current_word[j] = str[i];
			j++;
			count++;
			rev_count = strlen(current_word);
		}
		else if (count >= 6) {
			for (int h = 0; h < strlen(current_word); h++) {
				r_str[i] = current_word[rev_count];
				i--;
				rev_count--;
			}
		}
		else {
			count = 0;
			j = 0;
		}
	}

	return r_str;
	delete[] r_str;
}

int main()
{
	const char* str = { "To be or not to be that is the question " };

	char* right_word=twistWords(str);
	cout << right_word;
}
