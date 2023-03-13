#pragma once

//<-----------------	MacroDefines
#define BIT_SET(var, pos) ((var) |= (1 << (pos)))															//<	������������� ��� �� ������� pos � ���������� var.
#define BIT_CLEAR(var, pos) ((var) &= ~(1 << (pos)))														//< ���������� ��� �� ������� pos � ���������� var.
#define BIT_FLIP(var, pos) ((var) ^= (1 << (pos)))															//< ����������� ��� �� ������� pos � ���������� var
#define BIT_CHECK(var, pos) ((var) & (1 << (pos)))															//< ���������, ���������� �� ��� �� ������� pos � ���������� var.
#define BIT_WRITE(var, pos, val) ((var) = ((var) & ~(1 << (pos))) | ((val) << (pos)))						//< ���������� �������� val � ��� �� ������� pos � ���������� var.
#define BIT_GET(var, pos) (((var) >> (pos)) & 1)															//< �������� �������� ���� �� ������� pos � ���������� var.
#define BIT_RANGE_SET(var, start, end) ((var) |= (((1 << ((end) - (start) + 1)) - 1) << (start)))			//< ������������� ���� � ��������� �� start �� end � ���������� var.
//<-----------------	EndDefines



//<-----------------	Functions