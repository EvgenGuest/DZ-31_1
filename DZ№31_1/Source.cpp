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
		cout << "������ 1.\n������� 2 ����� ���������: ";
		cin >> n >> m;
		cout << "��������� ����� ���������: " << func(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "������: " << ex.what() << endl;
	}
	return 0;
}
