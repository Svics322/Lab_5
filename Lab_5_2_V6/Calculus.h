#pragma once

#include<bitset>

static class Calculus {
private:
 static const size_t N = 6;
public:
	template <typename T1>
	static std::bitset<N> calcComplement(T1& obj1);

	template <typename T1, typename T2>
	static std::bitset<N> calcIntersection(T1& obj1, T2& obj2);

	template <typename T1, typename T2>
	static std::bitset<N> calcUnion(T1& obj1, T2& obj2);

	template <typename T1, typename T2>
	static std::bitset<N> calcDifference(T1& obj1, T2& obj2);

	template <typename T1, typename T2>
	static std::bitset<N> calcSymmetric(T1& obj1, T2& obj2);
};