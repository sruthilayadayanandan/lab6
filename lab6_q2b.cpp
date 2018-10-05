//Including Library
#include<iostream>
using namespace std;

// parameters and reference parameter functions
void funcR(int a, int b ,int &c){

//Giving sum
c=a+b;
}

//Driver function
int main(){

//Declare the variables.	
int p,q,sum;
		
//Ask the user for two numbers.
cout<< "The two numbers to give the sum: ";
cin>>p>>q;

//Calling the arguments.
funcR(p,q,sum);
		
//Print the sum.
cout<<"The sum of the numbers "<<p<< " and " << q <<" is "<<  sum <<endl;
	
 return 0;
}
