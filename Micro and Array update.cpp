
#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	long long int n,k,A[n];
	long long int min = 0;
	while(num--){
	cin>>n>>k;
	 for(int i=0;i<n;i++){
		 cin>>A[i];

	 }	 
	 min=A[0];
	 for(int i=0;i<n;i++){		
		
		 if(min >= A[i])
		 min = A[i];

	 }

	 if(min > k)
	 cout<<0<<endl;
	 else
	 cout<<(k-min)<<endl;


	}
}

