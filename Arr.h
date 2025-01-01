#pragma once
class Arr
{
private:
	int* arr;
	int size;
public:
	Arr();
	Arr(int size);
	Arr(int* arr, int size);
	Arr(const Arr& obj);
	int getSize();
	int* getArr();
	void showArr();
	void setSize(int size);
	void setArr(int* arr, int size);
	void sortArr();
	int findMin();
	int findMax();
	~Arr();
};

