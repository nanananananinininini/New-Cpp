#include<bits/stdc++.h>
using namespace std;

char s[202];
int a[202];
int b[202];
int c[202];

void input(int a[]); 
void add(); 
void output();

int main()
{
	input(a);
	input(b);
	add();
	output();
	return 0;
}

void add()
{
	int i;
	
	for(i = 0; i < 200; i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i = 0; i < 200; i++)
	{
		c[i + 1] = c[i + 1] + c[i] / 10;
		c[i] = c[i] % 10;
	}
}

void output()
{
	int i;
	
	for(i = 200; i > 0; i--)
	{
		if(c[i] != 0)
		{
			break;
		}
	}
	for(; i >= 0; i--)
	{
		cout << c[i];
	}
}

void input(int a[])
{
	int i, j;
	int len;
	cin >> s;
	len = strlen(s);
	j = len - 1;
	for(i = 0; i < len; i++)
	{
		a[j] = s[i] - '0';
		j--; 
	}
}

