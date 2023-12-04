#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;
//
//void func(const string& s)
//{
//	//string::const_reverse_iterator it = s.rbegin();
//	auto it = s.crbegin();
//	while (it != s.crend())
//	{
//		//*it1 = 'x';
//		cout << *it << " ";
//		++it;
//
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	string s1("hello world");
//	//遍历
//	//1. 下标+[]
//	//2. 迭代器
//	//3. 范围for
//	//string::reverse_iterator it1 = s1.rbegin();
//	//while (it1 != s1.rend())
//	//{
//	//	cout << *it1 << " ";
//	//	++it1;
//
//	//}
//	//cout << endl;
//	func(s1);
//
//	return 0;
//}

//reserve 保留
//reverse 反转
//int main()
//{
//	try
//	{
//		string s1;
//		string s2("hello world");
//
//		//实践中没有参考价值
//		cout << s1.max_size() << endl;
//		cout << s2.max_size() << endl;
//
//		s1.reserve(s1.max_size());
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

//int main()
//{
//	try
//	{
//		string s1;
//		string s2("hello world");
//
//		//实践中没有参考价值
//	/*	cout << s1.capacity() << endl;
//		cout << s2.capacity() << endl;*/
//
//		
//
//		//确定需要多少空间，就提前扩容
//		s1.reserve(500);
//		size_t old = s1.capacity();
//		cout << old << endl;
//		//检测string扩容机制
//		for (size_t i = 0; i < 500; i++)
//		{
//			s1.push_back('x');
//			if (old != s1.capacity())
//			{
//				cout << s1.capacity() << endl;
//
//				old = s1.capacity();
//			}
//		}
//		
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

//int main()
//{
//
//	string s1;
//	string s2("hello worldxxxxxxx");
//
//	
//	//不能缩容
//	s1.reserve(10);
//	cout << s1.capacity() << endl;
//
//	s2.reserve(10);
//
//	cout << s2.capacity() << endl;
//
//
//	return 0;
//
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	
//
//	// > capacity  -> 扩容+尾插
//	//s1.resize(100);
//
//	s1.resize(30,'x');
//
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	cout << s1 << endl;
//
//
//	// size < n < capacity  -> 尾插
//	string s2("hello world");
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//	cout << s2 << endl;
//	s2.resize(12);
//
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//	cout << s2 << endl;
//
//	// n < size  ->删除数据，保留n个
//	string s3("hello world");
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//	cout << s3 << endl;
//	s3.resize(5);
//
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//	cout << s3 << endl;
//
//	string s5;
//	s5.resize(100, '#');
//
//
//	return 0;
//}


//int main()
//{
//	try
//	{
//		string s1("hello world");
//		///s1[12];
//
//		cout << s1.at(20) << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

// 增 push_back append (+=) /insert
// 删 erase
// 查 []
// 改 [] / 迭代器
//
//int main()
//{
//	string s1("hello");
//	s1.push_back(' ');
//	s1.append("world");
//	cout << s1 << endl;
//
//	const string& s3 = "xxxxx";
//
//	string s2 = "xxxx";
//	s2.append(++s1.begin(), --s1.end());
//	cout << s2 << endl;
//
//	s1 += '!';
//	s1 += "xxxxxxx";
//	s1 += s2;
//
//	return 0;
//}

int main()
{


	return 0;
}