#pragma once

//<-----------------	MacroDefines
#define BIT_SET(var, pos) ((var) |= (1 << (pos)))															//<	устанавливает бит на позиции pos в переменной var.
#define BIT_CLEAR(var, pos) ((var) &= ~(1 << (pos)))														//< сбрасывает бит на позиции pos в переменной var.
#define BIT_FLIP(var, pos) ((var) ^= (1 << (pos)))															//< инвертирует бит на позиции pos в переменной var
#define BIT_CHECK(var, pos) ((var) & (1 << (pos)))															//< проверяет, установлен ли бит на позиции pos в переменной var.
#define BIT_WRITE(var, pos, val) ((var) = ((var) & ~(1 << (pos))) | ((val) << (pos)))						//< записывает значение val в бит на позиции pos в переменной var.
#define BIT_GET(var, pos) (((var) >> (pos)) & 1)															//< получает значение бита на позиции pos в переменной var.
#define BIT_RANGE_SET(var, start, end) ((var) |= (((1 << ((end) - (start) + 1)) - 1) << (start)))			//< устанавливает биты в диапазоне от start до end в переменной var.
//<-----------------	EndDefines



//<-----------------	Functions