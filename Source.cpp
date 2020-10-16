#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return(a + b);
}
int hieu(int a, int b)
{
	return(a - b);
}
int tich(int a, int b)
{
	return(a*b);
}
float thuong(int a, int b)
{
	return((float)a / b);
}
int main()
{
	int a, b;
	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT"<<endl;
	cout << "Tong = " << a << "+" << b<<" = " << tong(a, b) << endl;
	cout << "Hieu = " << a << "-" << b << " = " << hieu(a, b) << endl;
	cout << "Tich = " << a << "*" << b << " = " << tich(a, b) << endl;
	while (b==0)
	{
		cout << "bang da nhap sai vui long nhap lai!!!" << endl;
		cout << "nhap b:"; cin >> b;
		
	}

	cout << "Thuong = " << a << "/" << b << " = " << thuong(a, b) << endl;

	system("pause");
	return 0;
}