#include<string>
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	string input;
	cout << "������һ���ַ���";
	getline(cin, input);
	for (char e : input)
	{
		if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
			a++;
		else if (e == ' ')
			b++;
		else if (e >= '0' && e <= '9')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ������" << a << endl;
	cout << "�ո������" << b << endl;
	cout << "�����ַ�������" << c << endl;
	cout << "�����ַ�������" << d << endl;
}