#include <iostream> 
#include <string.h>
using namespace std;

int main ()
{
	int option;
	float number1, number2;
	int repeater;
	
	do {
		cout <<"Which operation you want to perform\n1. addition\n2. subtraction\n3. multiplication\n4. division\n";
		cin >> option;	
		
		cout <<"Give the first number\n";
		cin>>number1;
		
		cout <<"Give the second number\n";
		cin>>number2;
			
		switch (option)
		{
			case 1:
				cout<<"The answer is ";
				cout<<number1 + number2;
				break;
			case 2:
				cout<<"The answer is ";
				cout<<number1 - number2;
				break;
			case 3:
				cout<<"The answer is ";
				cout<<number1 * number2;
				break;
			case 4:
				if(number2==0)
				cout<<"Cannot be performed, the answer is undefined \n";
				else
				{
				cout<<"The answer is ";
				cout<<number1 / number2;
				}
				break;
			default:
				cout<<"Error, wrong operation was given, must be 1-4 \n";
				break;
		}
		cout<<"\nIf you want to exit the program answer 0 \n";
		cin>>repeater;
	}
	while (repeater != 0);
	return 0;
}


