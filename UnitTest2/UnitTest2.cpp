#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_5_2_V6\A_class.cpp"
#include "..\Lab_5_2_V6\B_class.cpp"
#include "..\Lab_5_2_V6\Calculus.cpp"
#include "..\Lab_5_2_V6\Utils.cpp";
#include <bitset>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	private:
		const static size_t N = 6;
	public:
		TEST_METHOD(Check_Complement)
		{
			A a = A();			
			std::bitset<N> bitset_test = std::bitset<N>("000111");
			std::bitset<N> bitset_check = Calculus::calcComplement(a);
			Assert::IsTrue(bitset_test == bitset_check);
		}
		TEST_METHOD(Check_Intersection)
		{
			A a = A();
			B b = B();
			std::bitset<N> bitset_test = std::bitset<N>("111000");
			std::bitset<N> bitset_check = Calculus::calcIntersection(a, b);
			Assert::IsTrue(bitset_test == bitset_check);
		}
		TEST_METHOD(Check_Union)
		{
			A a = A();
			B b = B();
			std::bitset<N> bitset_test = std::bitset<N>("111111");
			std::bitset<N> bitset_check = Calculus::calcUnion(a, b);
			Assert::IsTrue(bitset_test == bitset_check);
		}
		TEST_METHOD(Check_Difference)
		{
			A a = A();
			B b = B();
			std::bitset<N> bitset_test = std::bitset<N>("000000");
			std::bitset<N> bitset_check = Calculus::calcDifference(a, b);
			Assert::IsTrue(bitset_test == bitset_check);
		}
		TEST_METHOD(Check_Symmetric)
		{
			A a = A();
			B b = B();
			std::bitset<N> bitset_test = std::bitset<N>("000111");
			std::bitset<N> bitset_check = Calculus::calcSymmetric(a, b);
			Assert::IsTrue(bitset_test == bitset_check);
		}
		TEST_METHOD(Check_Symmetric_ERROR)
		{
			A a = A();
			B b = B();
			std::bitset<N> bitset_test = std::bitset<N>("011111");
			std::bitset<N> bitset_check = Calculus::calcSymmetric(a, b);
			Assert::IsTrue(bitset_test == bitset_check);
		}
	};
}
