// smartPointer.cpp : �������̨Ӧ�ó������ڵ㡣
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

