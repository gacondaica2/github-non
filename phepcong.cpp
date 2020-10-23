#include <iostream>
#include <cstdlib>
using namespace std;

void phepCong(){
	int a=rand()%100+1;
	int b=rand()%100+1;
	cout<<"so a:" <<a<<endl;
	cout<<"so b:" <<b<<endl;
	cout<<"Ket qua la:" <<a+b<<endl;
}
bool kiemTra(int kq, int a,int b){
	if(kq==(a+b))
		return true;
	else return false;
}
void main(){
	int kq,a,b;
	phepCong();
	cout<<"Nhap kq:"cin>>a;
	cout<<endl;
	cout<<"Nhap a:"cin>>a;
	cout<<endl;
	cout<<"Nhap b:"cin>>b;
	cout<<endl;
	if(kiemTra(kq,a,b)){
		cout<<"Dung roi ne";
	else cout<<"Thang ga`";
	}
	system("pause");
}