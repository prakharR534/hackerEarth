#include <iostream>

using namespace std;

int main() {
	string w;
	cin >> w;
	int x,y;
	x=0,y=0;
	
	for (int i=0;i<w.length();i++){
	    if (w[i] == 'z')
	    x++;
	    else
	    y++;
	}
	
	if( (2*x) == y)
	cout<<"Yes";
	else
	cout<<"No";
	
	}
