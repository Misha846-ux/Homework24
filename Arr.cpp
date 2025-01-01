#include "Arr.h"
#include <iostream>
using namespace std;
Arr::Arr() {
	this->arr = nullptr;
	this->size = 0;
}

Arr::Arr(int size) {
	this->arr = new int[size];
	this->size = size;
}

Arr::Arr(int* arr, int size) {
	this->size = size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = arr[i];
	}
}

Arr::Arr(const Arr& obj) {
	this->size = obj.size;
	if (this->arr != nullptr) {
		delete[] this->arr;
	}
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = obj.arr[i];
	}
}

int Arr::getSize() {
	return this->size;
}

int* Arr::getArr() {
	return this->arr;
}

void Arr::showArr() {
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << ' ';
	}
}

void Arr::setSize(int size) {
	this->size = size;
}

void Arr::setArr(int* arr, int size) {
	this->size = size;
	if (this->arr != nullptr) {
		delete[] arr;
	}
	this->arr = new int[size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = arr[i];
	}
}

void Arr::sortArr() {
	int cell;
	for (int i = 1; i < this->size; i++) {
		for (int j = 0; j < this->size - i; j++) {
			if (this->arr[j] > this->arr[j + 1]) {
				cell = this->arr[j];
				this->arr[j] = this->arr[j + 1];
				this->arr[j + 1] = cell;
			}
		}
	}
}

int Arr::findMin() {
	int min = 0;
	bool check = true;
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] < min || check == true) {
			check = false;
			min = this->arr[i];
		}
	}
	return min;
}

int Arr::findMax() {
	int max = 0;
	bool check = true;
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] > max || check == true) {
			check = false;
			max = this->arr[i];
		}
	}
	return max;
}

Arr::~Arr() {
	if (this->arr != nullptr) {
		delete[] this->arr;
	}
}