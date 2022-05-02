#pragma once
#include <iostream>
#include <time.h>
#include <string>

int func(int x, int y) {
	int k;
	if (x > y)
		throw std::invalid_argument ("The first number is greater than or equal to the second");
	if (x == y)
		throw std::invalid_argument("The first number is greater than or equal to the second");

	k = rand() % (x - y) + x;
	
	return k;
}