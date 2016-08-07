// 8_7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char* p;
	char* q;
	char* r;
	char* temp;
	p = new char;
	q = new char;
	r = new char;
	temp = new char;
	int n=1000;
	int a[1000][2];
	int pos;
	int len;
	cin >> p;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < n; i++)
	{
		pos = a[i][0];
		len = a[i][1];
		q = p;
		for (int j = 0; j < pos; j++)
		{
			*q++;
		}
		//cout << "q:" << q << endl;


		for (int j = 0; j < len-1; j++)
		{
			*q++;
		}
		for (int j = 0; j < len; j++)
		{
			*r = *q;
			*q--;
			*r++;
		}
		*r = '\0';
		for (int j = 0; j < len; j++)
		{
			*r--;
		}
		//cout <<"r:"<< r << endl;
		strcat(p,r);
	}
	cout << p << endl;
	int asd;
	cin >> asd;
	return 0;
}

