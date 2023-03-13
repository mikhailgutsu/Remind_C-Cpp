#include <iostream>

#include "bitwise.h"

int printBinaryForm(int a)
{
	for (int i = 7; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}

	return a;
}

void bitSetOperation(int m_var, int m_pos)
{
	BIT_SET(m_var, m_pos);
}