
#include <iostream>
#include<string>

using namespace std;

int main() {
	int num;
	
	cin >> num;										// Reading input from STDIN
	
	while(num--){
		//char A[100000];
		string A;
		int count=0;
		cin>>A;

		for( int i=0;i< A.length();i++){
			if(A[i] == 'A' || A[i] == 'E' ||A[i] == 'I' ||A[i] == 'O' ||A[i] == 'U' ||A[i] == 'a' || A[i] == 'e' ||A[i] == 'i' ||A[i] == 'o' ||A[i] == 'u'  )
			count++;
		}
		cout<<count<<endl;
	}	// Writing output to STDOUT
}


