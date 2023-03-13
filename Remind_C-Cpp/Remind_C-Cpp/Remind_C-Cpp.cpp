#include <iostream>

//<-----------------									Private include
#include "bitwise.h"
#include "logger.h"
//<-----------------									End-Private include

int main()
{
	//<-----------------								ClassInit
	Logger log;

	//<-----------------								PreDEF for BitWise
	int x = 10;

		//<-----------------							BitSet
		std::cout << "Bit Set:\n";
			log.theLoggerBitSet(x, 1);
			log.theLoggerBitSet(x, 2);
			log.theLoggerBitSet(x, 3);
			log.theLoggerBitSet(x, 4);

		//<-----------------							BitClear
		std::cout << "Bit Clear:\n";
			log.theLoggerBitClear(x, 1);
			log.theLoggerBitClear(x, 2);
			log.theLoggerBitClear(x, 3);
			log.theLoggerBitClear(x, 4);

		//<-----------------							BitFlip
		std::cout << "Bit Flip:\n";
			log.theLoggerBitFlip(x, 1);
			log.theLoggerBitFlip(x, 2);
			log.theLoggerBitFlip(x, 3);
			log.theLoggerBitFlip(x, 4);

		//<-----------------							BitCheck
		std::cout << "Bit Check:\n";
			log.theLoggerBitCheck(x, 1);
			log.theLoggerBitCheck(x, 2);
			log.theLoggerBitCheck(x, 3);
			log.theLoggerBitCheck(x, 4);

		//<-----------------							BitWrite
		std::cout << "Bit Write:\n";
			log.theLoggerBitWrite(x, 1, 1);
			log.theLoggerBitWrite(x, 2, 1);
			log.theLoggerBitWrite(x, 3, 1);
			log.theLoggerBitWrite(x, 4, 1);

		//<-----------------							BitGet
		std::cout << "Bit Get:\n";
			log.theLoggerBitGet(x, 1);
			log.theLoggerBitGet(x, 2);
			log.theLoggerBitGet(x, 3);
			log.theLoggerBitGet(x, 4);



	return 0;
}
