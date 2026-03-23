#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../TP4_TU/TP4_TU.h" 
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUTest
{
	TEST_CLASS(TP4TUTest)
	{
	public:
		
		TEST_METHOD(TestEstPair)
		{
			Assert::AreEqual(estPair(6), 1);

		}

		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(4), 1);
		}
		TEST_METHOD(TestEstPair3)
		{
			Assert::AreEqual(estPair(7), 0);

		}

		TEST_METHOD(TestEstPair4)
		{
			Assert::AreEqual(estPair(0), 1);
		}
		TEST_METHOD(TestEstPair5)
		{
			Assert::AreEqual(estPair(-2), 1);
		}
		TEST_METHOD(TestEstPair6)
		{
			Assert::AreEqual(estPair(-3), 0);
		}
		//Questions:1)Quand on remplace return n % 2 == 0; tous les test fonctionnent
		//2)Je peux en déduire sur l'implementation que la condition était incorrecte c'est pour ça que l'on remplace 1 part 0
		//3)La bonne implémentation est donc int estPair(int n) { return n % 2 == 0;}
		
		TEST_METHOD(TestMax2_1)
		{
			Assert::AreEqual(max2(5, 3), 5);
		}
	};
}
