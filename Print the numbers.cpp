
#include <iostream>

using namespace std;

int main() {
	int num,A[100];
	cin >> num;										// Reading input from STDIN
			// Writing output to STDOUT

	for(int i=0;i<num;i++){
		cin>>A[i];
	}

	for(int i=0;i<num;i++){
		cout<<A[i]<<" ";
	}
}

