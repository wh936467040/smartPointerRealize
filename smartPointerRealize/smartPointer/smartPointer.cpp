// smartPointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "smartPointer.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	{
		smartPointer<test> p (new test(22));
		cout << "access data by smart pointer ,data = " << p -> a << endl;
	}
	cin.get();
}

