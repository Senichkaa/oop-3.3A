#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.3A/FuzzyNumber.cpp"
#include "../OOP 3.3A/Private.cpp"
#include "../OOP 3.3A/Public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33A
{
	TEST_CLASS(UTOOP33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Public k;
			k++;
			Assert::AreEqual(k.get_l(), 0.);
		}
	};
}
