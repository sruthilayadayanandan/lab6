//including library
#include<iostream>
using namespace std;

//the minimum function
int min(int vr1, int vr2 )
{
	//declaring variable
	int small;
	//checking which variable is small
	if(vr1<vr2)
	{small=vr1;}
	else
	{small=vr2;}
	return small;
}
//using the main function
int main()
{
	//declaring variables
	int a,b;
	//ask for input
	cout<<"enter the numbers:-"<<endl;
	//taking input
	cin>>a>>b;
	//output
	cout<<"The smaller of the two numbers is:-"<<min(a, b)<<endl;
	return 0;
}
