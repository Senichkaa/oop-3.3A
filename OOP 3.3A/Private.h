//Private.h
#pragma once
#include "FuzzyNumber.h"
class Private : private FuzzyNumber
{
public:
	Private();
	Private(double x, double l, double r)
		:FuzzyNumber(x, l, r) {};
	Private(const Private& v);

	Private& operator =(const Private& n);
	operator string() const;

	Private& operator --();
	Private& operator ++();
	Private operator --(int);
	Private operator ++(int);

	friend ostream& operator <<(ostream& out,const Private& a);
	friend istream& operator >>(istream& in,  Private& a);


	friend Private operator +(const Private& a, const Private& b);
	friend Private operator *(const Private& a, const Private& b);
};

