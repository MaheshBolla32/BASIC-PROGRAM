#include<iostream>
using namespace std;
int main()
{
int num,rev=0;
cout<<"Enter a Number: ";
cin>>num;
while(num!=0)
{
  rev=rev*10;
  rev=rev+num%10;
  num=num/10;
}
   cout<<"Reverse of Entered Number is : "<<rev<<endl;
  return 0;
} 