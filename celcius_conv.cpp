#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("clear");
    float F,C;
    cout<<"Enter the Celcius in degree:\n";
    cin>>C;
    F = C*(1.8)+32;
    
	cout << "Celcius is Fahrenheit : F = "<<F<<"\n"<< endl;
	return 0;
}
