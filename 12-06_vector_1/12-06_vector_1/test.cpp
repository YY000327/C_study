#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

//int main()
//{
//	string s1;
//	cout << sizeof(s1) << endl;
//
//	string s2("1234");
//	cout << sizeof(s2) << endl;
//
//	string s3("1111111111111111111111111");
//	cout << sizeof(s3) << endl;
//
//
//
//	return 0;
//}

void test_vector1()
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	vector<int>::iterator it1 = v.begin();
	while (it1 != v.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;
	for (auto e : v)
	{
		cout << e << " ";

	}
	cout << endl;
}
void test_vector2()
{
	vector <int> v1(10, 1);
	for (auto e : v1)
	{
		cout << e << " ";

	}
	cout << endl;

	vector <int> v2(v1.begin(),v1.end());
	for (auto e : v2)
	{
		cout << e << " ";

	}
	cout << endl;

	string s1("12345");
	vector <int> v3(s1.begin(), s1.end());
	for (auto e : v3)
	{
		cout << e << " ";

	}
	cout << endl;

}
//void TestVectorExpand()
//{
//	size_t sz;
//	vector<int> v;
//	v.resize(100);
//	sz = v.capacity();
//	cout << "making v grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
void TestVectorExpand()
{
	size_t sz;
	vector<int> v;
	v.reserve(100);
	sz = v.capacity();
	cout << "making v grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}
void test_vector3()
{
	//TestVectorExpand();

	vector<int> v;
	for (size_t i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(10);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.shrink_to_fit();
	cout << v.size() << endl;
	cout << v.capacity() << endl;

}

void test_vector4()
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for (auto e : v)
	{
		cout << e << " ";

	}
	cout << endl;

	v.insert(v.begin(), 0);
	for (auto e : v)
	{
		cout << e << " ";

	}
	cout << endl;

	//vector<int> ::iterator it = find(v.begin(), v.end(), 3);
	auto it = find(v.begin(), v.end(), 3);

	v.insert(it, 30);

	for (auto e : v)
	{
		cout << e << " ";

	}
	cout << endl;
	list<int> lt;
	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(30);
	lt.push_back(10);
	auto lit = find(lt.begin(), lt.end(), 30);
	lt.insert(lit, 300);
	for (auto e : lt)
	{
		cout << e << " ";

	}
	cout << endl;

	vector<string> vstr;
	string s1("ÕÅÈý");
	vstr.push_back(s1);
	vstr.push_back(string("lisi"));
	vstr.push_back("wangwu");
	for (const auto& e : vstr)
	{
		cout << e << " ";

	}
	cout << endl;

	cout << vstr[0][0];
	cout << vstr[0][2] << endl;

}

int main()
{
	test_vector4();

	return 0;
}