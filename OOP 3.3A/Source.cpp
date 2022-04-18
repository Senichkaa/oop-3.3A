//Source.cpp
#include "Private.h"
#include "Public.h"

int main()
{
	Private A1(1.5, 3, 2), B1;
	Public A2(2, 4, 6), B2;

	cout << "A1: " << A1 << endl;

	cin >> B1;
	cout << "B1:" << B1 << endl;

	cout << "A2:" << A2 << endl;

	cin >> B2;
	cout << "B2:" << B2 << endl;

	Private C1 = A1 + B1;
	cout << "Private sum: " << C1 << endl;

	Private D1 = A1 * B1;
	cout << "Private multiply: " << D1 << endl;

	Public C2 = A2 + B2;
	cout << "Public sum: " << C2 << endl;

	Public D2 = A2 * B2;
	cout << "Public multiply: " << D2 << endl;
}