#include <iostream>
#include<stdlib.h> 
using namespace std;

float cube(float);//function cube declearation
int main()
{
    system("clear");
    float num;
    cout<<"Enter a number:\n";
    cin>>num;
    cout<<"\n"<<"The cube of "<<num<<" is "<<cube(num)<<"\n";
//	cout << "give me a bottle of rum!" << endl;
	return 0;
}

float cube(float a)  //function cube defination
{
    return (a*a*a);
}
