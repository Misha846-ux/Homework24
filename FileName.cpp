#include <iostream>
#include "Arr.h"
using namespace std;



int main()
{
	int size = 10;
	int* test_arr = new int[size] {9, 5, 6, 7, 1, 2, 3, 0, 4, 1};
	Arr test1 = { test_arr,size };
	cout << test1.findMin() << endl;
	cout << test1.findMax() << endl;
	test1.showArr();
	cout << endl;
	test1.sortArr();
	test1.showArr();
	Arr test2 = test1;
	cout << endl;
	test2.showArr();

	return 0;
}