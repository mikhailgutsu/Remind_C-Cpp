#include <iostream>

#include "bitwise.h"

int printBinaryForm(int a)
{
	for (int i = 1; i < 9; i++)
		std::cout << (a & (256 >> i) ? '1' : '0');

	return a;
}

void bitSetOperation(int m_var, int m_pos)
{
	BIT_SET(m_var, m_pos);
}