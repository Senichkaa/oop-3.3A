//FuzzyNumber.cpp
#include "FuzzyNumber.h"

FuzzyNumber::FuzzyNumber()
{
	x = 0;
	l = 0;
	r = 0;
}

FuzzyNumber::FuzzyNumber(double x, double l, double r)
{
	if (x > (x - l) && (x + r) > x)
	{
		set_x(x); set_l(l); set_r(r);
	}
	else
	{
		set_x(0); set_l(0); set_r(0);
	}
}

FuzzyNumber::FuzzyNumber(const FuzzyNumber& v)
{
	x = v.x;
	l = v.l;
	r = v.r;
}

FuzzyNumber& FuzzyNumber::operator=(const FuzzyNumber& n)
{
	x = n.x;
	l = n.l;
	r = n.r;
	return *this;
}

FuzzyNumber::operator string() const
{
	stringstream ss;
	ss << "(" << l << "; " << x << "; " << r << ")" << endl;
	return ss.str();
}

ostream& operator<<(ostream& out, const FuzzyNumber& a)
{
	return out << string(a);
}

istream& operator>>(istream& in, FuzzyNumber& a)
{
	do
	{
		cout << "x = "; in >> a.x;
		cout << "l = "; in >> a.l;
		cout << "r = "; in >> a.r;
	} while (!(a.x > (a.x - a.l) && (a.x + a.r) > a.x));
	return in;
}
