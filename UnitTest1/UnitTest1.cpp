#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = { "i like apple" };
			int pos = 0;
			startwitha(str,pos);
			Assert::AreEqual(pos,7);
		}
	};
}
