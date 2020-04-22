//#include <iostream>
#include <bits/stdc++.h> 
//#include<string.h>
using namespace std;
int main()
{
int test,flag,i,len;
char num[100000];
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
unsigned long long int number;
cin>>test;
while(test--)
{
cin>>number;
sprintf(num,"%llu",number);
len=strlen(num);
flag=0;
for(i=0;i<len-1;i++)
{
if(num[i]=='2' && num[i+1]=='1')
{
flag++;
}
}
if(flag==0 && (number%21)!=0)
cout<<"The streak lives still in our heart!\n";
else
cout<<"The streak is broken!\n";
}
return 0;
}
