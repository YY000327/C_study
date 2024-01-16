#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;
//int main()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	list <int> ::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		*it += 10;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	lt.reverse();
//	cout << endl;
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//
//
//}
//int main()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(3);
//	lt.push_back(3);
//	lt.push_back(3);
//
//	lt.push_back(4);
//	lt.push_back(5);
//	lt.push_back(5);
//	lt.push_back(2);
//	lt.push_back(5);
//	lt.push_back(5);
//
//
//	list <int> ::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		//*it += 10;
//
//		cout << *it << " ";
//		++it;
//	}
//	lt.sort();
//	lt.unique();
//	cout << endl;
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//sort(lt.begin(), lt.end());²»Ö§³Ö
//
//	return 0;
//
//
//}

void test_op1()
{
	srand(time(0));
	const int N = 1000000;

	list<int> lt1;
	list<int> lt2;

	vector<int> v;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt1.push_back(e);
		v.push_back(e);
	}

	int begin1 = clock();
	// 
	sort(v.begin(), v.end());
	int end1 = clock();

	int begin2 = clock();
	lt1.sort();
	int end2 = clock();

	printf("vector sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

void test_op2()
{
	srand(time(0));
	const int N = 1000000;

	list<int> lt1;
	list<int> lt2;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt1.push_back(e);
		lt2.push_back(e);
	}

	int begin1 = clock();
	// vector

	vector<int> v(lt2.begin(), lt2.end());
	// 
	sort(v.begin(), v.end());

	// lt2
	lt2.assign(v.begin(), v.end());

	int end1 = clock();

	int begin2 = clock();
	lt1.sort();
	int end2 = clock();

	printf("list copy vector sort copy list sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

//int main()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(4);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(4);
//	lt.push_back(3);
//
//	lt.push_back(5);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	lt.sort();
//	lt.unique();
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//sort(lt.begin(), lt.end());
//	test_op2();
//
//	return 0;
//}

int main()
{
	//LRU
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
	lt.splice(lt.end(), lt, find(lt.begin(), lt.end(), 2));
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}