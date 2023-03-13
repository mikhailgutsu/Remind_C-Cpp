#include "logger.h"

void Logger::theLoggerBitSet(int m_var, int m_pos)
{
	std::cout << "\tBefore - " << m_var;
	std::cout << "\t\tAfter - ";
	BIT_SET(m_var, m_pos);
	std::cout << printBinaryForm(m_var) << std::endl;
}

void Logger::theLoggerBitClear(int m_var, int m_pos)
{
	std::cout << "\tBefore - " << m_var;
	std::cout << "\t\tAfter - ";
	BIT_CLEAR(m_var, m_pos);
	std::cout << printBinaryForm(m_var) << std::endl;
}

void Logger::theLoggerBitFlip(int m_var, int m_pos)
{
	std::cout << "\tBefore - " << m_var;
	std::cout << "\t\tAfter - ";
	BIT_FLIP(m_var, m_pos);
	std::cout << printBinaryForm(m_var) << std::endl;
}

void Logger::theLoggerBitCheck(int m_var, int m_pos)
{
	if (!BIT_CHECK(m_var, m_pos))
	{
		std::cout << "\t\t-1-" << std::endl;
	}
	if (BIT_CHECK(m_var, m_pos))
	{
		std::cout << "\t\t-0-" << std::endl;
	}
}

void Logger::theLoggerBitWrite(int m_var, int m_pos, int val)
{
	std::cout << "\tBefore - " << m_var;
	std::cout << "\t\tAfter - ";
	BIT_WRITE(m_var, m_pos, val);
	std::cout << printBinaryForm(m_var) << std::endl;
}

void Logger::theLoggerBitGet(int m_var, int m_pos)
{
	if (!BIT_GET(m_var, m_pos))
	{
		std::cout << "\t\t-1-" << std::endl;
	}
	if (BIT_GET(m_var, m_pos))
	{
		std::cout << "\t\t-0-" << std::endl;
	}
}