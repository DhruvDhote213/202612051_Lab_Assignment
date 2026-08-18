#include<iostream>
#include<string>
using namespace std ;
int main()
{
 string a ;
 cout<<"Enter the string:" ;
 cin>>a ;
 string b(a.length(),' ') ;
 int k=0 ;
 for(int i=a.length()-1;i>=0;i--)
 {
   b[k]=a[i] ;
   k++ ;
 }
 if(a==b)
  cout<<"It is a palindrome" ;
 else
  cout<<"it is not a palindrome" ;
 cout<<endl ;
 return 0 ;
}
