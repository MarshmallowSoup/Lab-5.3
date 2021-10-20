#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_5-3\Lab_5-3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53
{
	TEST_CLASS(UnitTestLab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k = f(0);
			Assert::AreEqual(0., k);
		}
	};
}
