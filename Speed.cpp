#include <iostream>
using namespace std;


int main() {
	int t,n,flag=1,max=0;
	cin>>t;

	while(t--){
		cin>>n;
		flag=1;
		int A[n];
		for(int i =0;i<n;i++){
			cin >> A[i];
		}

max = A[0];
		for(int i=1;i<n;i++){
			if(A[i] <= max){
	flag++;
	max = A[i];
              }	

	}

		cout<<flag<<endl;
	}

}

