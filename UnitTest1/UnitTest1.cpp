#include "pch.h"
#include "CppUnitTest.h"
#include"..\Lab_5_1_V6\A_class.cpp"
#include"..\Lab_5_1_V6\B_class.cpp"
#include"..\Lab_5_1_V6\C_class.cpp"
#include"..\Lab_5_1_V6\D_class.cpp"
#include"..\Lab_5_1_V6\Utils.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CheckStartInput)
		{
			A a = A();	
			B b = B();
			C c = C();
			D d = D();
			Assert::AreEqual(a.getElement(0), 'a');
			Assert::AreEqual(b.getElement(2), 'z');
			Assert::AreEqual(c.getElement(1), '1');
		}
		TEST_METHOD(CheckCartProduct)
		{
			A a = A();
			B b = B();
			C c = C();
			D d = D();
			d.calcCartProd(b, c, a);
			Assert::AreEqual(d.getElement(0, 0), 'x');
			Assert::AreEqual(d.getElement(17,0), 'z');
			Assert::AreEqual(d.getElement(17, 1), '1');
			Assert::AreEqual(d.getElement(17, 2), 'c');
		}
	};
}
