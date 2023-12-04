#define  _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	string s1("hello world");
//
//	s1.insert(5 , "xxxx");
//	cout << s1 << endl;
//
//	//s1.insert(0, 5, 'x');
//
//	s1.insert(s1.begin(), 'y');
//
//	cout << s1 << endl;
//
//	s1.erase(5, 4);
//	cout << s1 << endl;
//
//	s1.erase(5);
//	cout << s1 << endl;
//
//
//
//
//	return 0;
//}

//int main()
//{	
//	
//
//	string s1("hello world    hello   world");
//	//s1.replace(5,1,"%%");
//	cout << s1 << endl;
//
//	//所有空格都替换成10%
//	size_t pos = s1.find(' ',0);
//	while (pos != string::npos)
//	{
//		s1.replace(pos, 1, "10%", pos+3);
//		// 效率更低，能不用就不用了
//		pos = s1.find(' ');
//	}
//	cout << s1 << endl;
//
//
//	string s2("hello world    hello   world");
//	cout << s2 << endl;
//	string s3;
//	for (auto ch : s2)
//	{
//		if (ch == ' ')
//		{
//			s3 += "20%";
//		}
//		else
//		{
//			s3 += ch;
//		}
//		
//	}
//	cout << s3 << endl;
//	s2.swap(s3);
//	cout << s2 << endl;
//
//
//
//
//	return 0;
//}

//int main()
//{
//	string filename("Test.cpp");
//	//FILE* fout = fopen(filename.c_str(), "r");
//	FILE* fout = fopen(filename.data(), "r");
//
//	char ch = fgetc(fout);
//	while (ch != EOF)
//	{
//		cout << ch;
//		ch = fgetc(fout);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//string s1("Test.cpp");
//	//string s2("Test.tar.zip");
//	//size_t pos1 = s1.find('.');
//	//if (pos1 != string:: npos)
//	//{
//	//	//string suff = s1.substr(pos1, s1.size() - pos1);
//	//	string suff = s1.substr(pos1);
//
//	//	cout << suff << endl;
//	//}
//
//
//
//
//	//size_t pos2 = s2.rfind('.');
//
//	//if (pos2 != string::npos)
//	//{
//	//	//string suff = s1.substr(pos1, s1.size() - pos1);
//	//	string suff = s2.substr(pos2);
//
//	//	cout << suff << endl;
//	//}
//
//	string str("https://cplusplus.com/reference/string/string/?kw=string");
//
//	string sub1, sub2, sub3;
//	size_t pos1 = str.find(':');
//	sub1 = str.substr(0, pos1 - 0);
//	cout << sub1 << endl;
//
//	size_t pos2 = str.find('/', pos1 + 3);
//	sub2 = str.substr(pos1 + 3, pos2 - (pos1 + 3));
//	cout << sub2 << endl;
//
//	sub3 = str.substr(pos2 + 1);
//	cout << sub3 << endl;
//
//	return 0;
//
//}
//
//int main()
//{
//	std::string str("Please, replace the vowels in this sentence by asterisks.");
//	std::size_t found = str.find_first_not_of("abc");
//	while (found != std::string::npos)
//	{
//		str[found] = '*';
//		found = str.find_first_not_of("abc", found + 1);
//	}
//
//	std::cout << str << '\n';
//
//
//	return 0;
//}

//void SplitFilename(const std::string& str)
//{
//	std::cout << "Splitting: " << str << '\n';
//	std::size_t found = str.find_last_of("/\\");
//	std::cout << " path: " << str.substr(0, found) << '\n';
//	std::cout << " file: " << str.substr(found + 1) << '\n';
//}
//
//int main()
//{
//	std::string str1("/usr/bin/man");
//	std::string str2("c:\\windows\\winhelp.exe");
//
//	SplitFilename(str1);
//	SplitFilename(str2);
//
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	string s2("world");
//
//	string ret1 = s1 + s2;
//	cout << ret1 << endl;
//
//	string ret2 = s1 + "xx";
//	cout << ret2 << endl;
//
//	string ret3 = "xx" + s1;
//	cout << ret3 << endl;
//
//
//	return 0;
//}

//int main() {
//    string str;
//    //cin >> str;
//
//    getline(cin, str);
//    size_t pos = str.rfind(' ');
//
//    if (pos != string::npos)
//    {
//        cout << str.size() - pos - 1 << endl;
//    }
//    else
//    {
//        cout << str.size() << endl;
//    }
//
//    //string s2;
//    //cin >> s2;
//    //cout << s2 << endl;
//    //cout << str << endl;
//
//    //string s1, s2;
//    //cin >> s1 >> s2;
//    //cout << s1 << endl;
//    //cout << s2 << endl;
//
//}

#include "string.h"

int main()
{

	ly:: test_string1();

	return 0;
}