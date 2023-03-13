#pragma once

#include <iostream>
#include "bitwise.h"

class Logger
{
private:
	Logger();

protected:


public:
	virtual void theLogger() = 0;									//<		Virtual functions

};

class Logger_Bitwise : public Logger 
{
private:
	Logger_Bitwise();

protected:


public:
	virtual void theLogger(int m_var, int m_pos);

};