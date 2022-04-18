//Private.cpp
#include "Private.h"

Private::Private()
	:FuzzyNumber(0, 0, 0)
{
}

Private::Private(const Private& v)
	:FuzzyNumber(v)
{
}

Private& Private::operator=(const Private& n)
{
	FuzzyNumber::operator=(n);
	return *this;
}

Private::operator string() const
{
	stringstream ss;
	ss << "(" << get_l() << "; " << get_x() << "; " << get_r() << ")" << endl;
	return ss.str();
}

Private& Private::operator--()
{
	this->set_x(this->get_x() - 1);
	return *this;
}

Private& Private::operator++()
{
	this->set_x(this->get_x() + 1);
	return *this;
}

Private Private::operator--(int)
{
	Private a(*this);
	this->set_x(this->get_x() - 1);
	return a;
}

Private Private::operator++(int)
{
	Private a(*this);
	this->set_x(this->get_x() + 1);
	return a;
}

ostream& operator<<(ostream& out, const Private& a)
{
	return out << string(a);
}

istream& operator>>(istream& in, Private& a)
{
	int x, l, r;
	do
	{
		cout << "x = "; in >> x;
		cout << "l = "; in >> l;
		cout << "r = "; in >> r;
	} while (!(x > (x - l) && (x + r) > x));
	a.set_x(x); a.set_l(l); a.set_r(r);
	return in;
}

Private operator+(const Private& a, const Private& b)
{
	Private T(0, 0, 0);
	T.set_l(a.get_l() + b.get_l());
	T.set_x(a.get_x() + b.get_x());
	T.set_r(a.get_r() + b.get_r());
	return T;
}

Private operator*(const Private& a, const Private& b)
{
	Private N;
	N.set_l(a.get_x() * b.get_x() - b.get_x() * a.get_l() - a.get_x() * b.get_l() - a.get_l() * b.get_l());
	N.set_x(a.get_x() * b.get_x());
	N.set_r(a.get_x() * b.get_x() + b.get_x() * a.get_r() + a.get_x() * b.get_r() + a.get_r() * b.get_r());
	return N;
}
