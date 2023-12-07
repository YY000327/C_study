#pragma once
#include <iostream>
#include <assert.h>
#include <vector>
using namespace std;

namespace ly
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		vector()
			:_start(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{}
		
	/*	vector(const vector<T>& v)
		{
			_start = new T[v.capacity()];
			memcpy(_start, v._start, v.size() * sizeof(T));
			_finish = _start + v.size();
			_endofstorage = _start + v.capacity();
		}*/

		//v2(v1)
		vector(const vector<T>& v)
		{
			reserve(v.capacity());
			for (auto e : v)
			{
				push_back(e);
			}
		}
		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);

		}

		//v1 = v3
		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}


		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}

		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}
		const_iterator end() const
		{
			return _finish;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old = size();
				T* tmp = new T[n];
				if (_start) {
					memcpy(tmp, _start, old * sizeof(T));
					delete[] _start;
				}

				_start = tmp;
				_finish = _start + old;
				_endofstorage = _start + n;

			}

		}
		void resize(size_t n, T val = T());

		void push_back(const T& x)
		{
			if (_finish == _endofstorage)
			{
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
			}
			*_finish = x;
			++_finish;
		}

		void pop_back()
		{
			assert(size() > 0);
			--_finish;
		}

		void insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);
			assert(pos >= _start);

			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capacity() * 2);
				pos = _start + len;

			}

			memmove(pos + 1, pos, sizeof(T) * (_finish - pos));
			*pos = x;
			++_finish;

		}

		//void erase(interator pos);

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _endofstorage - _start;
		}

		T& operator[](size_t pos)
		{
			assert(pos < size());

			return _start[pos];

		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;

	};

	void print_vector(const vector<int>& v)
	{
		
		for (auto e : v)
		{
				cout << e << " ";
		}
		cout << endl;
	}

	void test_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		vector<int> ::iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;

		v[0]++;
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		v.insert(v.begin(), 100);
		
		v.insert(v.begin(), 100);

		print_vector(v);

		v.insert(v.begin(), 100);
		v.insert(v.begin(), 100);
		v.insert(v.begin(), 100);
		print_vector(v);

		int i = 0;
		int j = int();
		int k = int(10);
		//内置类型也有构造函数
	}
	void test_vector2()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		//vector<int> v1 = v;

		//for (auto e : v)
		//{
		//	cout << e << " ";
		//}
		//cout << endl;
		//for (auto e : v1)
		//{
		//	cout << e << " ";
		//}
		//cout << endl;


		vector<int> v2;
		v2.push_back(11);
		v2.push_back(222);
		v2.push_back(33);
		v2.push_back(44);
		v2.push_back(55);


		v = v2;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;


	}


}