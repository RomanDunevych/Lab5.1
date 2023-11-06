#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double y = 3.0;
			double z = 4.5;

			double one = (x + y + z) / (x * x + y * y);
			double two = h(x, y, z);

			Assert::AreEqual(one, two);

		}
	};
}
