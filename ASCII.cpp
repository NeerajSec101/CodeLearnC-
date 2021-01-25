#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("clear");
    char ch = 'A'; //asgine ascii code for A to ch
    int num  = ch; // store same code in an int
    cout << "The ASCII code for "<<ch <<" is " <<num<<"\n" << endl;
    
    ch +=  1;
    num = ch;
    cout << "The ASCII code for "<<ch <<" is " <<num <<"\n";
	return 0;
}
