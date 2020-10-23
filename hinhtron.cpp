#include <iostream>
using namespace std;
int main()
{
	int r;
	float PI_VALUE = 3.14, dt, cv;

	
	cout << "Nhập vào bán kính R: ";
	cin >> r;

	
	dt = PI_VALUE * r * r;
	cout << "Diện tích hình tròn là: " << dt;

	
	cv = 2 * PI_VALUE * r;
	cout << "\nChu vi hình tròn là: " << cv;

	
}