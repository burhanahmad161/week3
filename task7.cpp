#include<iostream>
using namespace std;
main()
{
string name;
float cprice,aprice;
int asold,csold;
float percentage_donation;
float total_amount,  end_total;
cout<<"enter name";
cin>>name;
cout<<"adult ticket price";
cin>>aprice;
cout<<"child ticket price";
cin>>cprice;
cout<<"adult ticket sold";
cin>>asold;
cout<<"child ticket sold";
cin>>csold;
cout<<"percentage of donation";
cin>>percentage_donation;
total_amount=(aprice*asold)+(cprice*csold);
cout<<"total amount:"<<total_amount;
end_total=total_amount*10/100;
cout<<"end_total:"<<end_total;
}