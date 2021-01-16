#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5_1/Lab_5_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n = sum(20, 5);
			Assert::AreEqual(n, 0.0408615, 0.0000001); // Добавив похибку, оскільки тут використовується double 
		}
	};
}
