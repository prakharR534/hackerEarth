#include <iostream>

using namespace std;

int main() {
	int n,m ;
	cin >> n>>m;										// Reading input from STDIN
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT

	int A[n];
	for(int i=0;i<n;i++)
	cin>>A[i];

	for(int i=n-1;i>0;i--){
		if(A[i] == m ){
			cout<<i+1;
			break;
		}
	}
}



// Write your code here
