#include<iostream>
using namespace std;
int main()
{
	double x = 0.0, y = 0.0, z = 0.0, c = 0.0;
	cin >> x >> y >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		c = x + y + z;
		cout << "�����ε��ܳ�Ϊ" << c << endl;
		if (x == y || x == z || y == z)
		{
			cout << "����������" << endl;
		}
	}
	else cout << "���ܹ���������" << endl;
}