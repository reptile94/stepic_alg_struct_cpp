// priority_queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>


//// Task 1
////int n = 6;
////std::vector<int> A = { 7, 6, 5, 4, 3, 2 };
//std::vector<int> A;
//std::vector<std::pair<int, int>> swaps;
//
//
//int left(int i) {
//	return (i + 1) * 2 - 1;
//}
//
//int right(int i) {
//	return (i + 1) * 2;
//}
//
//
//void SiftDown(int i, int n) {
//	int maxIndex = i;
//	
//	int l = left(i);
//	if (l < n && A[l] < A[maxIndex])
//		maxIndex = l;
//	
//	int r = right(i);
//	if (r < n && A[r] < A[maxIndex])
//		maxIndex = r;
//
//	if (i != maxIndex)
//	{
//		std::swap(A[i], A[maxIndex]);
//		swaps.push_back(std::make_pair(i, maxIndex));
//		SiftDown(maxIndex, n);
//	}
//}

int main()
{
	//// Task 1

	//int n;
	//std::cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	int a;
	//	std::cin >> a;
	//	A.push_back(a);
	//}


	//for (int i = (n - 1) / 2; i > -1; i--)
	//	SiftDown(i, n);

	//std::cout << swaps.size() << '\n';
	//for (auto swap : swaps)
	//	std::cout << swap.first << ' ' << swap.second << '\n';
	
    return 0;
}

