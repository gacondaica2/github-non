#include <iostream>
#include <cstdilib>
using namespace std;

int phepCong(){
	return rand(1,100)+rand(1,100);
}
bool kiemTra(int kq, int a,int b){
	if(kq==(a+b))
		return true;
	else return false;
}
