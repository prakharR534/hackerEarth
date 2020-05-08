#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n,max,skip = 0;
	cin >> n >> max;	
	long long int A[100005],count =0;
	for(int i=0;i<n;i++){
		cin>> A[i];
	}

	for(int i=0;i<n;i++){
		
		if(A[i] <= max & skip < 2){
			count++;
		}
		else
		skip++;

	}
cout<<count;	
	
										// Reading input from Sng output to STDOUT
}

