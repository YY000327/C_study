#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;


////普通函数
//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//
////函数模板
//// 通用加法函数
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}

//int main()
//{
//	//匹配调用原则：
//	// 1. 合适匹配的情况下，有现成的就吃现成的
//	// 2. 有更合适的就吃更合适的，没有就将就吃
//	// 3. 有更合适的就吃更合适的，哪怕要自己现做
//	Add(1, 2);
//	Add(1.1, 2.2);
//
//	
//
//	return 0;
//}

//template <class T>
//class Stack
//{
//public:
//
//	Stack(int n = 4);
//
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		delete[] _a;
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//	void Push(const T& x)
//	{
//
//	}
//
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};
//
//
//template<class T>
//Stack<T>::Stack(int n)
//{
//	cout << "Stack(int n = 4)" << endl;
//
//	_a = new T[n];
//	_top = 0;
//	_capacity = n;
//}
//
//int main()
//{
//
//	//普通类：类名 -> 类型
//	//类模板实例化的类： 类名不是类型，类名<数据类型> 才是整个类的类型
//	//显示实例化
//	Stack<int>  st1;
//	Stack<double> st2;
//	//类模板实例化不同类型，他们就是不同的类
//
//	
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("hello world");
//	string s3 = s2;
//	string s4(s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//	string s5(s2, 1,6);
//	cout << s5 << endl;
//
//	string s6(s2, 1);
//	cout << s6 << endl;
//
//	string s7(s2, 1, 100);
//	cout << s7 << endl;
//
//	string s8("helloworld", 5);
//	cout << s8 << endl;
//
//	string s9(10, 'x');
//	cout << s9 << endl;
//
//	s1 = s2;
//	cout << s1 << endl;
//
//	s1 = "world";
//	cout << s1 << endl;
//
//	s1 = 'x';
//	cout << s1 << endl;
//
//
//
//	return 0;
//}
namespace i {

	class string
	{
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}
//
//
//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//		cout << s1.operator[](i) << " ";
//	}
//	cout << endl;
//
//	s1[0] = 'x';
//	cout << s1 << endl;
//
//
//	//c++自带swap，函数模板的swap
//	// string 给逆置一下
//	size_t begin = 0, end = s1.size() - 1;
//	while (begin < end)
//	{
//		//char tmp = s1[begin];
//		//s1[begin] = s1[end];
//		//s1[end] = tmp;
//
//		swap(s1[begin], s1[end]);
//		++begin;
//
//		--end;
//	}
//	cout << s1 << endl;
//
//	reverse(s1.begin(), s1.end());
//	cout << s1 << endl;
//
//
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	vector<int> ::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//	reverse(v.begin(), v.end());
//
//	vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//
//	list<double> lt;
//	lt.push_back(1.1);
//	lt.push_back(2.1);
//	lt.push_back(3.1);
//	lt.push_back(4.1);
//	lt.push_back(5.1);
//	list<double>::iterator lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//	reverse(lt.begin(), lt.end());
//
//	lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//
//
//
//	return 0;
//}


int main()
{
	string s1("hello world");
	const string s2("hello world");

	s1[0] = 'x';
	//s2[0] = 'x';

	cout << s2[0] << endl;

	string::const_iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//
	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;

	return 0;
}