#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3_it/Lab_06_3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n];
			int Low = 1;
			int High = 31;
			Create(a, n, Low, High);
			Sort(a, n);
			// чи в порядку спадання
			for (int i = 0; i < n - 1; i++) {
				Assert::IsTrue(a[i] >= a[i + 1]);
			}
		}
	};
}
