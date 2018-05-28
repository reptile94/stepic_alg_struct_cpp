// Week 1

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <assert.h>
#include <map>

////Task 1

//int isBalanced(std::string str) {
//
//	std::stack<char> Stack;
//	std::stack<int> first_stack;
//	int first_in = -1;
//	int i = 0;
//	for (; i < str.length(); ++i) {
//		char c = str[i];
//		if (c == '(' || c == '[' || c == '{') {
//			Stack.push(c);
//			first_stack.push(i + 1);
//		}
//		else if(c == ')' || c == ']' || c == '}')
//		{
//			if (Stack.empty())
//				return i+1;
//			char top = Stack.top();
//			Stack.pop();
//			first_stack.pop();
//			if (top == '[' && c != ']' || top == '(' && c != ')' || top == '{' && c != '}')
//				return i + 1;
//		}
//	}
//	if (Stack.empty())
//		return 0;
//	else
//		return first_stack.top();
//}

////Task 2
//
//std::map<int, int> Map;
//int* pars = new int[100000];
//
//int getDepth(int par) {
//	if (par == -1)
//		return 1;
//	if (Map.find(par) == Map.end())
//		return getDepth(pars[par])+1;
//	else
//		return Map[par]+1;
//}

int main()
{
	////Task 1

	//std::string str;
	//std::cin >> str;
	//int err = isBalanced(str);
	//if (err == 0)
	//	std::cout << "Success";
	//else
	//	std::cout << err;
	//

	//assert(isBalanced("([](){([])})") == 0);
	//assert(isBalanced("()[]}") == 5);
	//assert (isBalanced("{{[()]]") == 7);
	//assert (isBalanced("{{{[][][]") == 3);
	//assert (isBalanced("{*{{}") == 3);
	//assert (isBalanced("[[*") == 2);
	//assert (isBalanced("{*}") == 0);
	//assert (isBalanced("{{") == 2);
	//assert (isBalanced("{}") == 0);
	//assert (isBalanced("") == 0);
	//assert (isBalanced("}") == 1);
	//assert (isBalanced("*{}") == 0);
	//assert (isBalanced("{{{**[][][]") == 3);

	////

	////Task 1


	//int n;
	//std::cin >> n;
	//
	//for (int i = 0; i < n; ++i)
	//	std::cin >> pars[i];
	//for (int i = 0; i < n; ++i)
	//{
	//	int par = pars[i];
	//	if (par == -1)
	//		Map[i] = 1;
	//	else
	//		Map[i] = getDepth(par);
	//}

	//int max = 1;
	//for (auto it = Map.cbegin(); it != Map.cend(); ++it)
	//	if (it->second > max)
	//		max = it->second;

	//std::cout << max;

	////


	////Task4

	std::stack<int> maxStack;
	int q;
	std::cin >> q;
	for (int i = 0; i < q; ++i)
	{
		std::string str;
		std::cin >> str;
		if (str == "push") {
			int v;
			std::cin >>v;
			if (maxStack.empty() || v > maxStack.top())
				maxStack.push(v);
			else
				maxStack.push(maxStack.top());
		}
		if (str == "pop")
			maxStack.pop();
		if (str == "max")
			std::cout << maxStack.top() << '\n';
	}

    return 0;
}

