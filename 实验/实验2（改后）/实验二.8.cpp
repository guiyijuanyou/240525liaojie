#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "������һ����:";
	cin >> a;
	b = a;
	do
	{
		c = b;
		b = (b + a / b) / 2;
	} while (b - c >= 0.000001 || b - c <= -0.000001);
	cout << b << endl;
}