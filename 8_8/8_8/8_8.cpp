// 8_8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0, s = 0, l = 0;
	cin >> n >> s >> l;
	int per;
	float sum;
	for (int i = 0; i < 1000; i++)
	{
		if (i*s+(i-1)>l)
		{
			per = i-1;
			break;
		}
	}
	if (per % 13 == 0)
	{
		per = per - 1;
	}
	sum = (float)n / per;
	if (sum > (int)sum)
	{
		sum = (int)sum + 1;
		if (n - (sum - 1)*per == 13)
		{
			sum += 1;
		}
	}

	cout << sum<<endl;

	int sss;
	cin >> sss;
	return 0;
}

