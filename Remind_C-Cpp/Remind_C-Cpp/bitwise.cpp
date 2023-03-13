#include <iostream>

#include "bitwise.h"

int printBinaryForm(int a)
{
	for (int i = 7; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}

	std::cout << "\t\tResult - ";

	return a;
}
