/*

Task 1: Расстановка скобок в коде

Sample Input 1: ([](){([])})
Sample Output 1: Success
Sample Input 2: ()[]}
Sample Output 2: 5
Sample Input 3: {{[()]]
Sample Output 3: 7

*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <assert.h>

int isBalanced(std::string str) {

	std::stack<char> Stack;
	std::stack<int> first_stack;
	int first_in = -1;
	int i = 0;
	for (; i < str.length(); ++i) {
		char c = str[i];
		if (c == '(' || c == '[' || c == '{') {
			Stack.push(c);
			first_stack.push(i + 1);
		}
		else if(c == ')' || c == ']' || c == '}')
		{
			if (Stack.empty())
				return i+1;
			char top = Stack.top();
			Stack.pop();
			first_stack.pop();
			if (top == '[' && c != ']' || top == '(' && c != ')' || top == '{' && c != '}')
				return i + 1;
		}
	}
	if (Stack.empty())
		return 0;
	else
		return first_stack.top();
}


int main()
{
	//Task 1

	//std::string str;
	//std::getline(std::cin, str);
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

    return 0;
}

