#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 5_3/Lab 5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor53
{
	TEST_CLASS(UnitTestfor53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			p(1);
			t = p(-3);
			Assert::AreEqual(t, 1.29114, 0.01);

		}
	};
}
