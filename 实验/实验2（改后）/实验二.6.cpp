#include<iostream>
using namespace std;
int main()
{
	int a, b, c, m, n, x, y;
	cout << "��ȷ���������������������" << endl;
	cin >> a >> b;
	n = a;
	x = b;
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}

	while ((m = a % b) != 0)
	{
		a = b;
		b = m;
	}
	cout << "���Լ��Ϊ" << '\n' << b << endl;
	y = n * x / b;
	cout << "��С������Ϊ" << '\n' << y << endl;
	return 0;
}