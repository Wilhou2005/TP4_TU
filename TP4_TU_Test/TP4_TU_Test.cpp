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
		TEST_METHOD(TestMax2_2)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}
		TEST_METHOD(TestMax2_3)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}
		TEST_METHOD(TestMax2_4)
		{
			Assert::AreEqual(max2(4, 4), 4);
		}
		//Questionns:1)Le test qui revele le bug le pluys clairement est le test 2
		//2) int max2(int a, int b) {if (a > b) { return a;}return b;}
		
		TEST_METHOD(TestFactorielle_1)
		{
			Assert::AreEqual(factorielle(0), 1);
		}
		TEST_METHOD(TestFactorielle_2)
		{
			Assert::AreEqual(factorielle(1), 1);
		}
		TEST_METHOD(TestFactorielle_3)
		{
			Assert::AreEqual(factorielle(4), 24);
		}
		TEST_METHOD(TestFactorielle_4)
		{
			Assert::AreEqual(factorielle(5), 120);
		}
		TEST_METHOD(TestFactorielle_5)
		{
			Assert::AreEqual(factorielle(-3), -1);
		}

		//Questions:1)La factorielle n'est pas définie pour les entiers negatifs 
		//2)La stratégie la plus simple à adopter serait de renvoyer une valeur d'erreur 

		TEST_METHOD(TestContientMajuscule_1)
		{
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}
		TEST_METHOD(TestContientMajuscule_2)
		{
			Assert::AreEqual(contientMajuscule("BonJour"), 1);
		}
		TEST_METHOD(TestContientMajuscule_3)
		{
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(TestContientMajuscule_4)
		{
			Assert::AreEqual(contientMajuscule(""), 0);
		}
		TEST_METHOD(TestContientMajuscule_5)
		{
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}

		TEST_METHOD(TestDivisionExacte_1)
		{
			Assert::AreEqual(divisionExacte(10, 2), 1);
		}

		TEST_METHOD(TestDivisionExacte_2)
		{
			Assert::AreEqual(divisionExacte(10, 3), 0);
		}

		TEST_METHOD(TestDivisionExacte_3)
		{
			Assert::AreEqual(divisionExacte(0, 5), 1);
		}
		TEST_METHOD(TestDivisionExacte_4)
		{
			Assert::AreEqual(divisionExacte(10, 0), 0);
		}
		//Question:Ce cas est dangereux car il provoque une division par 0 et donc le programme ne s'execute pas

		TEST_METHOD(TestSommeTableau_1)
		{
			int tab[] = { 1, 2, 3 };
			Assert::AreEqual(sommeTableau(tab, 3), 6);
		}

		TEST_METHOD(TestSommeTableau_2)
		{
			int tab[] = { 5 };
			Assert::AreEqual(sommeTableau(tab, 1), 5);
		}

		TEST_METHOD(TestSommeTableau_3)
		{
			int tab[] = { -1, 4, -3 };
			Assert::AreEqual(sommeTableau(tab, 3), 0);
		}

		TEST_METHOD(TestSommeTableau_4)
		{
			Assert::AreEqual(sommeTableau(nullptr, 0), 0);
		}
	};
}
