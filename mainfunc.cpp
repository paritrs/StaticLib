#include <iostream>

int length(char*);

using namespace std;

int main()
{
 char str1[50];
 int len;
 cout<<"\n Enter String whose length has to be found: "<<endl;
 cin>>str1;
 len = length(str1);
 cout<<"\nLength of String = "<<len<<endl;
 return 0;
} 
