#include "logger.h"

void Logger_Bitwise::theLogger(int m_var, int m_pos)
{
	std::cout << "\tBefore - " << printBinaryForm(m_var);
	std::cout << "\t\tAfter - " << BIT_SET(m_var, m_pos);
}