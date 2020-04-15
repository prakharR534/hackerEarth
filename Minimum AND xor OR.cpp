#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0,x=1000000;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
				}
				sort(A,A+n);
		for(int i=0;i<n-1;i++){
			c = A[i]^A[i+1];
			x = min(x,c);
		}		
		cout<<x<<endl;

	}

}
