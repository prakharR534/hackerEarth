#include<iostream>
#include<string>
using namespace std;
int main(){
string s1,s2;
cin>>s1>>s2;
int count =0;
//for(int i=0;s1[i] != '\0';i++)
for(int i=0;i<s1.length();i++)
if(s2[i] - 96 < s1[i] -96)
count++;
if(count == 0 && s1.length() == s2.length() )
printf("YES");
else
printf("NO");
}
