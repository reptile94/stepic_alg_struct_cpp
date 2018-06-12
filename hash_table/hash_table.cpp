// hash_table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <forward_list>
#include <algorithm>
#include <cmath>

using namespace std;

//// Task 2

//const int p = 1000000007;
//const int x = 263;
//
//
//long long modpow(int x, int y, int m) {
//	long long acc = 1, z = x % m;
//	while (y) {
//		if (y & 1)
//			acc = (acc * z) % m;
//		z = (z * z) % m;
//		y >>= 1;
//	}
//	return acc;
//}
//
//int get_hash(string S, int m)
//{
//	long long hash = 0;
//
//	for (int i = 0; i < S.size(); ++i)
//		hash = (hash + (S[i] * modpow(x,i,p))) % p;
//
//	return hash % m;
//}

//// Task 3

//vector<int> z_function(string s) {
//	int n = (int)s.length();
//	vector<int> z(n);
//	for (int i = 1, l = 0, r = 0; i<n; ++i) {
//		if (i <= r)
//			z[i] = min(r - i + 1, z[i - l]);
//		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
//			++z[i];
//		if (i + z[i] - 1 > r)
//			l = i, r = i + z[i] - 1;
//	}
//	return z;
//}


int main()
{
	//// Task1

	//map<int, string> book;
	//vector<string> found_names;

	//int n;
	//cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	string command;
	//	int number;
	//	cin >> command >> number;
	//	
	//	if (command == "add")
	//	{
	//		string name;
	//		cin >> name;
	//		book[number] = name;
	//	}

	//	if (command == "find")
	//	{
	//		string name = book[number];
	//		if (name == "")
	//			found_names.push_back("not found");
	//		else
	//			found_names.push_back(name);
	//	}

	//	if (command == "del")
	//		book[number] = "";
	//}

	//for (auto n : found_names)
	//	cout << n << '\n';

	//// Task2

	//map<int, forward_list<string>> hash_map;
	//vector<string> output;

	////cout << get_hash("world", 5) << get_hash("HellO", 5);
	////cout << get_hash("aaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaaaaaaaaaaaaaaa sdd sre wew re wr swedrwe werwer weaa", 17);

	//int m, n;
	//cin >> m >> n;
	//for (int i = 0; i < n; ++i)
	//{
	//	string command, S;
	//	cin >> command >> S;

	//	if (command == "add")
	//		if (find(hash_map[get_hash(S, m)].begin(), hash_map[get_hash(S, m)].end(), S) == hash_map[get_hash(S, m)].end())
	//			hash_map[get_hash(S, m)].push_front(S);
	//		

	//	if (command == "del")
	//		hash_map[get_hash(S, m)].remove(S);
	//		

	//	if (command == "find")
	//		if (find(hash_map[get_hash(S, m)].begin(), hash_map[get_hash(S, m)].end(), S) != hash_map[get_hash(S, m)].end())
	//			output.push_back("yes\n");
	//		else
	//			output.push_back("no\n");

	//	if (command == "check")
	//	{
	//		for (auto i = hash_map[stoi(S)].begin(); i != hash_map[stoi(S)].end(); ++i)
	//			output.push_back(*i + " ");
	//		output.push_back("\n");
	//	}

	//}

	//for (auto out : output)
	//	cout << out;

	//// Task 3

	//string pattern;
	//string text;

	//cin >> pattern >> text;

	//int p_size = pattern.size();
	//int t_size = text.size();

	//string s = pattern + "#" + text;

	//auto z = z_function(s);

	//for (int i = 0; i < t_size; ++i)
	//	if (z[i + p_size + 1] == p_size)
	//		cout << i << ' ';

    return 0;
}

