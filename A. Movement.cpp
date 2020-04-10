
#include<iostream>
using namespace std;
int main()
{
	int num,a;
	cin>>num;
	a = num/5;
	if(num % 5 >=1){
		a++;
	}
	cout<<a;
}
