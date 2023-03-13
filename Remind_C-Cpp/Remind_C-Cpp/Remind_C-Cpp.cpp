#include <iostream>
#include <string>

//<-----------------									Private include
#include "bitwise.h"
#include "logger.h"
#include "sort.h"
//<-----------------									End-Private include

int main()
{
	//<-----------------								ClassInit
	Logger log;
	std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
////////////////////////////////////////////////////////////////////////////////////////////////////////	BITWISE OPERATIONS

		//<-----------------							PreDEF for BitWise
		int x = 10;

			//<-----------------						BitSet
			std::cout << "Bit Set:\n";
				log.theLoggerBitSet(x, 1);
				log.theLoggerBitSet(x, 2);
				log.theLoggerBitSet(x, 3);
				log.theLoggerBitSet(x, 4);

			//<-----------------						BitClear
			std::cout << "Bit Clear:\n";
				log.theLoggerBitClear(x, 1);
				log.theLoggerBitClear(x, 2);
				log.theLoggerBitClear(x, 3);
				log.theLoggerBitClear(x, 4);

			//<-----------------						BitFlip
			std::cout << "Bit Flip:\n";
				log.theLoggerBitFlip(x, 1);
				log.theLoggerBitFlip(x, 2);
				log.theLoggerBitFlip(x, 3);
				log.theLoggerBitFlip(x, 4);

			//<-----------------						BitCheck
			std::cout << "Bit Check:\n";
				log.theLoggerBitCheck(x, 1);
				log.theLoggerBitCheck(x, 2);
				log.theLoggerBitCheck(x, 3);
				log.theLoggerBitCheck(x, 4);

			//<-----------------						BitWrite
			std::cout << "Bit Write:\n";
				log.theLoggerBitWrite(x, 1, 1);
				log.theLoggerBitWrite(x, 2, 1);
				log.theLoggerBitWrite(x, 3, 1);
				log.theLoggerBitWrite(x, 4, 1);

			//<-----------------						BitGet
			std::cout << "Bit Get:\n";
				log.theLoggerBitGet(x, 1);
				log.theLoggerBitGet(x, 2);
				log.theLoggerBitGet(x, 3);
				log.theLoggerBitGet(x, 4);

			//<-----------------						BitSetRange
			std::cout << "Bit Write:\n";
				log.theLoggerBitWrite(x, 1, 7);
				log.theLoggerBitWrite(x, 2, 6);
				log.theLoggerBitWrite(x, 3, 5);
				log.theLoggerBitWrite(x, 4, 4);

////////////////////////////////////////////////////////////////////////////////////////////////////////	END-BITWISE OPERATIONS
				std::cout << "\n";
				std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
////////////////////////////////////////////////////////////////////////////////////////////////////////	STRINGS
		
				//<-----------------																INITs
				std::string str1 = "Hello";
				std::string str2 = ",World!";
		
				//<-----------------																Сцепление двух строк
				std::string result = str1 + " " + str2; 
				std::cout << result << std::endl;

				//<-----------------																Длина строки lenght();
				std::cout << "Length of str1: " << str1.length() << std::endl;

				//<-----------------																Поиск в строке find()
				if (result.find("World") != std::string::npos) {
					std::cout << "Found 'World' in result." << std::endl;
				}

				//<-----------------																Поиск под строки substr()
				std::string sub = result.substr(6, 5);
				std::cout << "Substring of result: " << sub << std::endl;

				//<-----------------																Замена под строки replace()
				result.replace(6, 5, "C++");
				std::cout << "Result after replacement: " << result << std::endl;

				//<-----------------																Удаление части строки erase()
				result.erase(0, 6);
				std::cout << "Result after erasing: " << result << std::endl;

////////////////////////////////////////////////////////////////////////////////////////////////////////	END-STRINGS
				std::cout << "\n";
				std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
////////////////////////////////////////////////////////////////////////////////////////////////////////	ALGORITHMS

			//<----------------------------------													Testing Algorithms
				int arr1[5] = { 10, 30, 50, 70, 90 };
					//<-----------------------------------										Bubble Sort						
					bubbleSort(arr1, 5);	

					std::cout << "Bubble Sort - ";
					for (int i = 0; i < 5; i++)
					{
						std::cout << arr1[i] << " ";
					}std::cout << "\n\n";

				int arr2[5] = { 10, 30, 50, 70, 90 };
					//<-----------------------------------										Selection Sort Algorithm
					selectionSort(arr2, 5);
					std::cout << "Selection Sort - ";
					for (int i = 0; i < 5; i++)
					{
						std::cout << arr2[i] << " ";
					}std::cout << "\n\n";

				int arr3[5] = { 10, 30, 50, 70, 90 };
					//<-----------------------------------										Insertion Sort Algorithm
					insertionSort(arr2, 5);
					std::cout << "Insertion Sort - ";
					for (int i = 0; i < 5; i++)
					{
						std::cout << arr3[i] << " ";
					}std::cout << "\n\n";

				int arr4[5] = { 10, 30, 50, 70, 90 };
					//<-----------------------------------										Quick Sort Algorithm
					quickSort(arr4, 10, 90);
					std::cout << "Quick Sort - ";
					for (int i = 0; i < 5; i++)
					{
						std::cout << arr4[i] << " ";
					}std::cout << "\n\n";

////////////////////////////////////////////////////////////////////////////////////////////////////////	END-ALGORITHMS
				std::cout << "\n";
				std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
////////////////////////////////////////////////////////////////////////////////////////////////////////	ALGORITHMS















	return 0;
}
