//Public.h
#pragma once
#include "FuzzyNumber.h"
class Public : public FuzzyNumber
{
public:
	Public();
	Public(double x, double l, double r)
		:FuzzyNumber(x, l, r) {};
	Public(const Public& v);

	Public& operator =(const Public& n);

	Public& operator --();
	Public& operator ++();
	Public operator --(int);
	Public operator ++(int);

	friend Public operator +(const Public& a, const Public& b);
	friend Public operator *(const Public& a, const Public& b);

};

