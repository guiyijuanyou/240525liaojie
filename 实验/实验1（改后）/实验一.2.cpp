#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r = 0.0, h = 0.0;
	double V = 0.0;
	const double pi = acos(-1.0);
	cin >> r >> h;
	cout << "Բ׶�ĵװ뾶Ϊ" << r << '\t' << "Բ׶�ĸ�Ϊ" << h << endl;
	V = (1.0 / 3.0) * pi * r * r * h;
	cout << "Բ׶�����Ϊ" << V << endl;
	return 0;
}