#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab53
{
	TEST_CLASS(lab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				double z;
				z = j(1);
				Assert::AreEqual(z, 0.589613, 0.00001);
		}
	};
}
