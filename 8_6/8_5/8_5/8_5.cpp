// 8_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char* p;
	p = new char;
	gets(p);
	int now =0;
	int count=0;
	while (*p != NULL)
	{
		if (*p == ' ')
		{
			now = count;
		}
		*p++;
		count++;
	}
	if (now != 0)
	{
		cout << count - now - 1 << endl;
	}
	else
	{
		cout << count;
	}
	
	
	int a;
	cin >> a;
	return 0;
}

