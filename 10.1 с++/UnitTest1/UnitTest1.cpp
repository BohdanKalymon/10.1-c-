#include "pch.h"
#include "CppUnitTest.h"
#include <search.h>
#include "../10.1 с++/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// egr,- ,- ,- ,- ,- ,- ,-reee //
			Assert::AreEqual(Count(), 7);
		}
	};
}
