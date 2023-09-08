#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char op;
    double num1,num2;

    do {
    cout << endl << "********************* CALCULATOR *********************" << endl;
    cout << "Choose an operator {for Quit -> 0} :" << endl;
    cout << " (+) - ADDITION" << endl;
    cout << " (-) - SUBTRACTION" << endl;
    cout << " (*) - MULTIPLICATION" << endl;
    cout << " (/) - DIVISION" << endl;
    cout << " (^) - EXPONENT" << endl;
    cout << " (#) - SQUARE ROOT" << endl;

    cin >> op;

    if ((char)op != '#'){

    if ((char)op != '0'){
    cout << "N#1: ";
    cin >> num1;
    cout << "N#2: ";
    cin >> num2;
    }

    switch(op){

        case '+':
            cout << num1 << " + " << num2 << " = " << ( num1 + num2 ) << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << ( num1 - num2 ) << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << ( num1 * num2 ) << endl;
            break;

        case '/':
            if( num2 != 0 ){
                cout << num1 << " / " << num2 << " = " << ( num1 / num2 ) << endl;
            } else {
                cout << "ERROR!";
            }
            break;
            
        case '^':
            cout << num1 << " ^ " << num2 << " = " << pow( num1, num2 ) << endl;
            break;

        default:
            if ( (char)op != '0' ){
            cout << "Type a proper operator.";
            }
            break;
        } 
    } else if((char)op == '#') {
        cout << "Type a number to square root: ";
        cin >> num1;
        cout << "Square root of number " << num1 << " = " << sqrt(num1);
    }
    } while ( (char)op != '0' );
    cout << "******************************************************" << endl;

    return 0;
   }
