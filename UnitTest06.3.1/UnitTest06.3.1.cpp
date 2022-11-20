#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.3.1/ChyrunSofialab6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0631
{
	TEST_CLASS(UnitTest0631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 1,2,3,4,5,6 };
			t = Sort(a, n);
			Assert::AreEqual(t, 3);
		}
	};
}
