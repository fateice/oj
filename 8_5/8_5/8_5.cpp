// 8_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char* p;
	char q;
	int count = 0;
	p = new char;
	cin >> p>>q;

	if (q > 'A' - 1 && q < 'Z' + 1)
	{
		q = q + 'a' - 'A';
	}

	while (*p != NULL)
	{
		if (*p > 'A'-1 && *p < 'Z' +1)
		{
			*p = *p + 'a' - 'A';
		}
		if (*p == q)
		{
			count++;
		}
		*p++;
	}
	cout << count << endl;
	
	int a;
	cin >> a;
	return 0;
}

