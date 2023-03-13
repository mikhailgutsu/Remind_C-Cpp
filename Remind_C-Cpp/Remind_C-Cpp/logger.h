#pragma once

#include <iostream>
#include "bitwise.h"

class Logger
{
private:
	

protected:


public:
	void theLoggerBitSet(int m_var, int m_pos);
	void theLoggerBitClear(int m_var, int m_pos);
	void theLoggerBitFlip(int m_var, int m_pos);
	void theLoggerBitCheck(int m_var, int m_pos);
	void theLoggerBitWrite(int m_var, int m_pos, int val);
	void theLoggerBitGet(int m_var, int m_pos);

};
