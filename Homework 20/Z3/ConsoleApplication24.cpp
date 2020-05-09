#include <iostream>
#include <ctime>
#include "function.h"
#define INTEGER
using namespace std;

int main()
{
	srand(time(0));

	int arr[10];

	rand_arr(arr, 10);
	show_arr(arr, 10);
	min_arr(arr, 10);
	max_arr(arr, 10);
	sort(arr, 10);
	reduct(arr, 10);

#undef INTEGER

#define DOUBLE
#include "function.h"
	double arr1[10];

	rand_arr(arr1, 10);
	show_arr(arr1, 10);
	min_arr(arr1, 10);
	max_arr(arr1, 10);
	sort(arr1, 10);
	reduct(arr1, 10);

#undef DOUBLE

#define CHAR
#include "function.h"
	char arr2[10];

	rand_arr(arr2, 10);
	show_arr(arr2, 10);
	min_arr(arr2, 10);
	max_arr(arr2, 10);
	sort(arr2, 10);
	reduct(arr2, 10);

#undef CHAR
}
