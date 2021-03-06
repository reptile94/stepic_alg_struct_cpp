#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

#define TASK 3

using namespace std;

struct node {
	long key;
	long left;
	long right;
};

vector<node> tree;
vector<long> arr_tree;
bool correct = true;

#if TASK == 1

void print_tree(node root, string order) {
	if (order == "pre")
		cout << root.key << ' ';

	if (root.left != -1)
		print_tree(tree[root.left], order);
	
	if (order == "in")
		cout << root.key << ' ';
	
	if (root.right != -1)
		print_tree(tree[root.right], order);

	if (order == "post")
		cout << root.key << ' ';
}
#endif

#if TASK == 2

void make_arr(node root) {

	if (root.left != -1)
		make_arr(tree[root.left]);

	arr_tree.push_back(root.key);

	if (root.right != -1)
		make_arr(tree[root.right]);
}

#endif

#if TASK == 3

 long check_tree(node root) {

	if (root.left != -1)
	{
		long left = check_tree(tree[root.left]);
		if (root.key <= left)
			correct = false;
		return max(root.key, left);
	}
		

	if (root.right != -1)
	{
		long right = check_tree(tree[root.right]);
		if (root.key > right)
			correct = false;
		return min(root.key, right);
	}

	return root.key;
}

#endif

int main()
{

	long n, k, l, r;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k >> l >> r;
		tree.push_back(node{ k, l, r });
	}

#if TASK == 1

	print_tree(tree[0], "in");
	cout << '\n';
	print_tree(tree[0], "pre");
	cout << '\n';
	print_tree(tree[0], "post");
	cout << '\n';

#endif

#if TASK == 2

	if (n == 0)
	{
		cout << "CORRECT\n";
		return 0;
	}

	make_arr(tree[0]);

	for (int i = 0; i < n-1; i++)
		if (arr_tree[i] > arr_tree[i + 1] || arr_tree[i] == arr_tree[i + 1])
		{
			cout << "INCORRECT\n";
			return 0;
		}
	
	cout << "CORRECT\n";

#endif

#if TASK == 3

	if (n == 0)
	{
		cout << "CORRECT\n";
		return 0;
	}

	check_tree(tree[0]);

	if (correct)
		cout << "CORRECT\n";
	else
		cout << "INCORRECT\n";

#endif

    return 0;
}

