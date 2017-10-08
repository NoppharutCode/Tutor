#include<iostream>

using namespace std;

class Student{
//private:
	int num = 10;
public:
	
	int getNum(){
		return num;
	}
};

main(){
	int num[10];
	num[1] = 10;
	cout << *(num+1);
}
