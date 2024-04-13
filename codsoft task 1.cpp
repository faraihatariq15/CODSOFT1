#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float num1, num2;
	char oper, ch, y, Y;
	do {
	cout<<"Enter an operator (+, -, *, /) "<<endl;
	cin>>oper;
	cout<< "Enter two numbers"<<endl;
	cin>>num1>>num2;
	switch (oper)
	{
		case '+':
			 cout<<num1 <<"+"<< num2 <<"=" << num1 + num2<<endl;
			break;
			case '-':
			cout<< num1 <<"-"<< num2 <<"=" << num1 - num2<<endl;
			break;
			case '*':
			cout<< num1 <<"*"<< num2 <<"=" << num1 * num2<<endl;
			break;
			case '/':
				if(num2==0){
					cout<<"Error! enter num2 again"<<endl;
					cin>>num2;
				} else {			
			cout<<num1 <<"/"<< num2 <<"=" << num1 / num2<<endl; 
			}
			break;
			default:
				cout<<"Error! The operator used is not correct"<<endl;
				break;
	}
	cout<<"To continue, press y"<<endl;
	cin>>ch;
} while (ch!=y);
	return 0;
}
