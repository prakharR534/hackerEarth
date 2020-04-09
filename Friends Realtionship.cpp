#include <iostream>

using namespace std;

int main() {
int n,test,i,j;
cin>>test;
do
{
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
  cout<<"*";
for(j=1;j<=2*(n-i);j++)
  cout<<"#";
for(j=1;j<=i;j++)
  cout<<"*";
      cout<<endl;
}
test--;
}while(test>0);
return(0);
}
