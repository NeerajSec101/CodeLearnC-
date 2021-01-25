#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("clear");
    float sub1,sub2,sub3,marks,perc;
    cout<<"Enter marks obtained in 3 subjects:\n";
    cin>>sub1>>sub2>>sub3;
    marks = sub1 + sub2 + sub3 ;
    perc = (marks/300)*100;
    cout<<"\n"<<"The percentage marks are:"<<perc <<"%\n";
//	cout << "give me a bottle of rum!" << endl;
	return 0;
}
