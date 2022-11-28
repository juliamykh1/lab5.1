#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest511
{
	TEST_CLASS(UnitTest511)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			g = h(1., 0.);
			Assert::AreEqual(g, 1.);
		}
	};
}
