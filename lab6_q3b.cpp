//including library
#include<iostream>
using namespace std;

//the maxing function
void maxing(int&max ,int vr1, int vr2 )
{
	//finding the bigger number
	if(vr1>vr2)
	//put the bigger variable  into the reference variable
	{max=vr1;}
	else
	{max=vr2;}
}

//using the main function
int main()
{
	//declaring variables
	int max,a,b;
	//asking the user for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//calling the max function and giving max as reference variable
	maxing(max,a,b);
	//outputing
	cout<<"The bigger of the two numbers is:-"<<max<<endl;
	return 0;
}
