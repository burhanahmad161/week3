#include<iostream>
using namespace std;
main()
{
int usernum,rem1,digit1,rem2,digit2,digit3,digit4,sum;
cout<<"enter a four digit number";
cin>>usernum;
rem1=usernum%1000;
digit1=usernum/1000;
rem2=rem1%100;
digit2=rem1/100;
digit3=rem2/10;
digit4=rem2%10;
sum=digit1+digit2+digit3+digit4;
cout<<"the sum of digit will be"<<sum;
}