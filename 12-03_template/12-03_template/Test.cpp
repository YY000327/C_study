#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//class Stack
//{
//
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//		_a = new int[capacity];
//		_top = 0;
//		_capacity = capacity;
//
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete[] _a;
//		_a = nullptr;
//		_top = 0;
//		_capacity = 0;
//
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//
//};

class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

//
//
//int main()
//{
//	Stack s1;
//	Stack* p1 = new Stack;
//	delete p1;
//
//	Stack* p2 = (Stack*)operator new(sizeof(Stack));
//	operator delete(p2);
//
//	//Stack* p3 = new Stack[10];
//	///*delete[] p3;*/
//	//delete p3;
//
//	A* p3 = new A[10];
//	delete p3;
//
//	//一定要配对使用
//	//new 和delete ||new []和delete[] || malloc和free
//
//	//int* p5 = new int[10];
//	//free(p5);
//
//
//	return 0;
//}

//int main()
//{
//	// 构造函数自动调用
//	A aa1;
//	A* p1 = (A*)operator new(sizeof(A));
//
//	// 不能显示调用构造函数
//	//p1->A(1);
//	// 但是可以用定位new显示调用, 配合内存池使用
//	new(p1)A(1);
//
//
//	//析构函数可以显示调用
//	p1->~A();
//	operator delete(p1);
//
//	return 0;
//}


//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

// 跟具体类型无关的代码， 泛型编程

// 函数模板
// 模板的实例化
//template <typename T>
//template <class T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	double c = 1.1, d = 2.2;
//
//	//调用的是不是同一个函数
//	Swap(a, b);
//	Swap(c, d);
//
//	auto a = 0;
//
//	return 0;
//}

// 模板参数 很类似函数参数， 函数参数定义的是形参对象，模板参数定义的是类型
template<class X, class Y>

void func(const X& x, const Y& y)
{
	cout << x << endl;
	cout << y << endl;
}

// 通用加法函数
template<class T>
T Add(T left, T right)
{
	return left + right;
}

template<class T>
T* f(int n)
{
	T* p = new T[n];
	
	return p;
}

//
//int main()
//{
//	////推演实例化
//	////函数参数传递推出模板参数的类型生成对应的函数
//	//func(1, 2);
//	//func(1.1, 2.2);
//	//func(1.1, 2);
//
//	//cout << Add(1, (int)2.2) << endl;
//	////显示实例化
//	//cout << Add<int>(1, 2.2) << endl;
//	//cout << Add<double>(1, 2.2) << endl;
//
//	//只能显式实例化调用
//	double* p= f<double>(10);
//
//	return 0;
//}

//typedef int STDaType;
//
//class Stack
//{
//
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//		_a = new STDaType[capacity];
//		_top = 0;
//		_capacity = capacity;
//
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete[] _a;
//		_a = nullptr;
//		_top = 0;
//		_capacity = 0;
//
//	}
//
//private:
//	STDaType* _a;
//	int _top;
//	int _capacity;
//
//};

//typedef int STDaType;

template <class T>

class Stack
{

public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_a = new T[capacity];
		_top = 0;
		_capacity = capacity;

	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		delete[] _a;
		_a = nullptr;
		_top = 0;
		_capacity = 0;

	}

private:
	T* _a;
	int _top;
	int _capacity;

};

int main()
{
	//显示实例化
	Stack<int> st1;//int
	Stack<double> st2;//double

	return 0;
}


