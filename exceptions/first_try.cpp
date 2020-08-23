#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	try {
		int* ptr;
		int size;

		cout << "\n\nInput size\n\n";
		cin >> size;

		if (size < 1 || size>500) {
			throw "\n\nERR size\n\n";
		}
		ptr = new int[size];

		if (!ptr) {
			throw "\n\nErr Memory!!!\n\n";
		}

		for (int i = 0; i < size; i++) {
			ptr[i] = rand()*10/RAND_MAX;
			cout << ptr[i] << " ";
		}
	}

	catch (int s) {
		cout << "\nError - A = " << s << "\n\n";
	}

	catch (char* s) {
		cout << s;
	}
}