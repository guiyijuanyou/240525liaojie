#include<iostream>
using namespace std;
int main()
{
	double x, y, z;
	char k;
	cout << "�������һ�����֣�";
	cin >> x;
	cout << "�������������";
	cin >> k;
	cout << "������ڶ������֣�";
	cin >> y;
	switch (k)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	case '*':
		cout << x * y << endl;
		break;
	case '/':
		if (y == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << x / y << endl;
		}
		break;
	case '%':
		if (y == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << (int)x % (int)y << endl;
		}
		break;
	default:
		cout << "��������������ȷ" << endl;
		break;
	}
	return 0;
}