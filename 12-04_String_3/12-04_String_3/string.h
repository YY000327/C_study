#pragma once

#include <iostream>
#include <assert.h>

namespace ly
{
	class string
	{
	public:

		//string()
		//	:_str(new char[1])
		//	,_size(0)
		//	,_capacity(0)
		//{
		//	_str[0] = '\0';
		//}

		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}

		string(const char* str = "")

		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}

		const char* c_str()
		{
			return _str;
		}

		size_t size()
		{

			return _size;
		}

		char& operator[](size_t pos)//可以传这个位置的拷贝
		{
			assert(pos <= _size);

			return _str[pos];
		}

		void push_back(char ch);
		void append(const char* str);
		string& operator+=(char ch);
		string& operator+=(const char* str);

	private:
		size_t _size;
		size_t _capacity;
		char* _str;


	};

	void test_string1()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		string s2;
		cout << s2.c_str() << endl;//空指针的解引用

		for (size_t i = 0; i < s1.size(); i++)
		{
			s1[i]++;

		}

		cout << s1.c_str() << endl;

		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;

		}
		cout << endl;

		//傻瓜式的替换成迭代器
		for (auto ch : s1)
		{
			cout << ch << " ";
		}
		cout << endl;

	}
}