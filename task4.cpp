#include<iostream>
using namespace std;
main()
{
int sub1,sub2,sub3,sub4,sub5,obtain;
string name;
float percentage;
cout<<"enter your name";
cin>>name;
cout<<"enter subject 01 marks";
cin>>sub1;
cout<<"enter subject 02 marks";
cin>>sub2;
cout<<"enter subject 03 marks";
cin>>sub3;
cout<<"enter subject 04 marks";
cin>>sub4;
cout<<"enter subject 05 marks";
cin>>sub5;
obtain=sub1+sub2+sub3+sub4+sub5;
cout<<"obtain marks are"<<obtain;
cout<<endl;
percentage=(obtain/500.0)*100;
cout<<"percentage is"<<percentage;
}