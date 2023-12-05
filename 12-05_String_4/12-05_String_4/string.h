#pragma once

//#include <iostream>
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

		typedef char* const_iterator;

		const_iterator begin() const
		{
			return _str;
		}
		const_iterator end() const
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

		// s2(s1)
		// 传统写法
		//string(const string& s)
		//{
		//	_str = new char[s._capacity + 1];
		//	strcpy(_str, s._str);
		//	_size = s._size;
		//	_capacity = s._capacity;
		//}

		// 现代写法
		string(const string& s)
		{
			string tmp(s._str);
			swap(tmp);
		}


	/*	string& operator=(const string& s)
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];
				strcpy(tmp, s._str);
				delete[] _str;

				_str = tmp;
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}*/

		string& operator=(string s)
		{
			swap(s);
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}

		const char* c_str() const
		{
			return _str;
		}

		size_t size() const
		{

			return _size;
		}

		const char& operator[](size_t pos) const//可以传这个位置的拷贝
		{
			assert(pos <= _size);

			return _str[pos];
		}
		char& operator[](size_t pos)//可以传这个位置的拷贝
		{
			assert(pos <= _size);

			return _str[pos];
		}
		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}

		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				size_t newCapacity = _capacity == 0 ? 4 : _capacity * 2;
				reserve(newCapacity);
			}
			_str[_size] = ch;
			_size++;
			_str[_size] = '\0';

		}
		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

			strcpy(_str + _size, str);
			_size += len;
		}
		string& operator+=(char ch) {
			push_back(ch);
			return *this;
		}
		string& operator+=(const char* str) {
			append(str);

			return *this;
		}
		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);

			if (_size == _capacity)
			{
				size_t newCapacity = _capacity == 0 ? 4 : _capacity * 2;
				reserve(newCapacity);
			}

			//int end = _size;

			//while (end >=(int) pos)
			//{
			//	_str[end + 1] = _str[end];
			//	--end;
			//}

			size_t end = _size + 1;

			while (end > pos)
			{
				_str[end] = _str[end - 1];
				--end;
			}
			_str[pos] = ch;
			_size++;

		}

		void insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			int end = _size;
			while (end >= (int)pos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			strncpy(_str + pos, str, len);
			_size += len;
		}
		void erase(size_t pos, size_t len = npos)
		{
			assert(pos < _size);

			if (len == npos || pos + len >=_size)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}

		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);

		}

		size_t find(char ch, size_t pos = 0)
		{
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t find(const char* str)
		{
			const char* ptr = strstr(_str, str);
			if (ptr == NULL)
			{
				return npos;
			}
			else
			{
				return ptr - _str;
			}
		}

		string substr(size_t pos = 0, size_t len = npos)
		{
			assert(pos < _size);
			size_t end = pos + len;
			if (len == npos || pos + len >= _size)
			{
				end = _size;
			}
			string str;
			str.reserve(end - pos);
			for (size_t i = pos; i < end; i++)
			{
				str += _str[i];
			}
			return str;
		}

		void clear()
		{
			_size = 0;
			_str[0] = '\0';
		}
	private:
		size_t _size = 0;
		size_t _capacity = 0;
		char* _str = nullptr;

		const static size_t npos = -1;

		//const static int N = 10;
		//int a[N];


	};






	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch : s)
		{
			out << ch;
		}
		return out;

	}

	//istream& operator>>(istream& in, string& s)
	//{
	//	s.clear();

	//	char ch = in.get();
	//	while (ch != ' ' && ch != '\n')
	//	{
	//		s += ch;
	//		ch = in.get();
	//	}

	//	return in;
	//}
	istream& operator>>(istream& in, string& s)
	{
		s.clear();
		char buff[128];
		char ch = in.get();
		int i = 0;
		while (ch != ' ' && ch != '\n')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
			ch = in.get();
		}

		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

	void print_str(const string& s)
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			/*s[i]++;*/
			cout << s[i] << " ";

		}

		cout  << endl;
		string::const_iterator it = s.begin();
		while (it != s.end())
		{
			//不能修改
			cout << *it << " ";
			++it;

		}
		cout << endl;
	}

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

	void test_string2()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		s1 += ' ';
		s1 += "xxxxxx";
		cout << s1.c_str() << endl;

		s1.insert(5, 'y');
		cout << s1.c_str() << endl;

		s1.insert(0, 'y');
		cout << s1.c_str() << endl;

		s1.insert(0, "xxxxxx");
		cout << s1.c_str() << endl;



	}

	void test_string3()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		s1.erase(5, 3);
		cout << s1.c_str() << endl;

		s1.erase(5, 100);
		cout << s1.c_str() << endl;

		s1.erase(2);
		cout << s1.c_str() << endl;


	}
	void test_string4()
	{
		string s1("hello world");
		string s2("xxxx");
		std::swap(s1, s2);
		s1.swap(s2);

		string str("https://cplusplus.com/reference/string/string/?kw=string");
		
		string sub1, sub2, sub3;
		size_t pos1 = str.find(':');
		sub1 = str.substr(0, pos1 - 0);
		cout << sub1.c_str() << endl;
		
		size_t pos2 = str.find('/', pos1 + 3);
		sub2 = str.substr(pos1 + 3, pos2 - (pos1 + 3));
		cout << sub2.c_str() << endl;
		
		sub3 = str.substr(pos2 + 1);
		cout << sub3.c_str() << endl;


	}
	void test_string5()
	{
		string s1("hello world");
		string s2(s1);

		string s3("xxxxxx");
		s1 = s3;

	}
	void test_string6()
	{
		string s1("hello world");
		string s2(s1);

		string s3("xxxxxx");
		s1 = s3;

		cout << s1.c_str() << endl;
		cout << s1 << endl;

		cin >> s1;
		cout << s1 << endl;

	/*	char ch1, ch2;
		cin >> ch1 >> ch2;
		cout << ch1 << ch2 << endl;*/

	}

	void test_string7()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		cout << s1 << endl;

		s1.clear();
		cout << s1.c_str() << endl;
		cout << s1 << endl;


	}

	void test_string8()
	{
		string s1("hello world");
		string s2(s1);

		string s3("xxxxxxxx");
		s1 = s3;
		cout << s1 << endl;

	}

}