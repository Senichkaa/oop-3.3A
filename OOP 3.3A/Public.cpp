//Public.cpp
#include "Public.h"

Public::Public()
	:FuzzyNumber(0,0,0)
{
}

Public::Public(const Public& v)
	: FuzzyNumber(v)
{
}

Public& Public::operator=(const Public& n)
{
	FuzzyNumber::operator = (n);
	return *this;
}

Public& Public::operator--()
{
	this->set_x(this->get_x() - 1);
	return *this;
}

Public& Public::operator++()
{
	this->set_x(this->get_x() + 1);
	return *this;
}

Public Public::operator--(int)
{
	Public a(*this);
	this->set_x(this->get_x() - 1);
	return *this;
}

Public Public::operator++(int)
{
	Public a(*this);
	this->set_x(this->get_x() + 1);
	return *this;
}

Public operator+(const Public& a, const Public& b)
{
	Public T(0,0,0);
	T.set_l(a.get_l() + b.get_l());
	T.set_x(a.get_x() + b.get_x());
	T.set_r(a.get_r() + b.get_r());
	return T;

}

Public operator*(const Public& a, const Public& b)
{
	Public N;
	N.set_l(a.get_x() * b.get_x() - b.get_x() * a.get_l() - a.get_x() * b.get_l() - a.get_l() * b.get_l());
	N.set_x(a.get_x() * b.get_x());
	N.set_r(a.get_x() * b.get_x() + b.get_x() * a.get_r() + a.get_x() * b.get_r() + a.get_r() * b.get_r());
	return N;

}
