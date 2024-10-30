#include <iostream>
using namespace std;


int main(){
    float a, b;
    int n;
    cout << "Enter 1 for additions\n" ;
    cout << "Enter 2 for subtractions\n" ;
    cout << "Enter 3 for multiplications\n" ;
    cout << "Enter 4 for divisions\n" ;
    cin >>  n;
    cout << "Enter 1st number:" ;
    cin >> a;
    cout << "Enter 2nd nummber:" ;
    cin >> b;
    switch (n)
    {
        case 1:
            float ad = a+b;
            cout << ad;
            break;
        case 2:
            float subtrac = a-b;

            cout << subtrac;
            break;
        case 3:
            float multip = a*b;
            cout << multip;
            break;
        case 4:
            float divid = a/b;
            cout << divid;
            break;
        default:
            cout << "Error";
            break;
    }
 
    cout << "--------------------------------";
return 0;
}
// C++ program to create calculator using
// switch statement
/*#include <iostream>
using namespace std;

// Driver code
int main()
{
	char op;
	float num1, num2;

	// It allows user to enter operator
	// i.e. +, -, *, /
	cin >> op;

	// It allow user to enter the operands
	cin >> num1 >> num2;

	// Switch statement begins
	switch (op)
	{	
		// If user enter +
		case '+':
			cout << num1 + num2;
			break;
		
		// If user enter -
		case '-':
			cout << num1 - num2;
			break;
		
		// If user enter *
		case '*':
			cout << num1 * num2;
			break;
		
		// If user enter /
		case '/':
			cout << num1 / num2;
			break;
		
		// If the operator is other than +, -, * or /,
		// error message will display
		default:
			cout << "Error! operator is not correct";
			
	}
	// switch statement ends

	return 0;
}*/
