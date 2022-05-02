#include<iostream>
#include "Functions.h"
#include <time.h>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));	
	int n, m;
	try{
		cout << "Задача 1.\nВведите 2 числа диапазона: ";
		cin >> n >> m;
		cout << "Случайное число диапазона: " << func(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "Ошибка: " << ex.what() << endl;
	}
	return 0;
}
