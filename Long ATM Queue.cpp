#include <iostream>
using namespace std;
int main() {
	int num,c=1;
	cin >> num;										// Reading input from STDIN
    int A[num];
	for(int i=0;i<num;i++)
	cin>>A[i];

	int k = A[0];
	for(int i=0;i<num-1;i++){
		if(A[i+1]<A[i]){
			c++;
		}
	}
cout<<c;
}


