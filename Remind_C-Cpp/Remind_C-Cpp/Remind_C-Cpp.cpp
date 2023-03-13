#include <iostream>

//<-----------------	Private include
#include "bitwise.h"
#include "logger.h"
//<-----------------	End-Private include

int main()
{
	//<-----------------	PreDEF
	Logger log;

		int x = 10;

	log.theLogger(x, 1);
	log.theLogger(x, 2);
	log.theLogger(x, 3);
	log.theLogger(x, 4);

	return 0;
}
