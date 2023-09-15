#include <iostream>
#include <cmath>

int main(){
    char op;
    double num1,num2;

    do {
    std::cout << "\n********************* CALCULATOR *********************\n";
    std::cout << "Choose an operator {for Quit -> 0} :\n";
    std::cout << " (+) - ADDITION\n";
    std::cout << " (-) - SUBTRACTION\n";
    std::cout << " (*) - MULTIPLICATION\n";
    std::cout << " (/) - DIVISION\n";
    std::cout << " (^) - EXPONENT\n";
    std::cout << " (#) - SQUARE ROOT\n";

    std::cin >> op;

    if ((char)op != '#'){

    if ((char)op != '0'){
    std::cout << "N#1: ";
    std::cin >> num1;
    std::cout << "N#2: ";
    std::cin >> num2;
    }

    switch(op){

        case '+':
            std::cout << num1 << " + " << num2 << " = " << ( num1 + num2 ) << '\n';
            break;

        case '-':
            std::cout << num1 << " - " << num2 << " = " << ( num1 - num2 ) << '\n';
            break;

        case '*':
            std::cout << num1 << " * " << num2 << " = " << ( num1 * num2 ) << '\n';
            break;

        case '/':
            if( num2 != 0 ){
                std::cout << num1 << " / " << num2 << " = " << ( num1 / num2 ) << '\n';
            } else {
                std::cout << "ERROR!";
            }
            break;
            
        case '^':
            std::cout << num1 << " ^ " << num2 << " = " << pow( num1, num2 ) << '\n';
            break;

        default:
            if ( (char)op != '0' ){
            std::cout << "Type a proper operator.";
            }
            break;
        } 
    } else if((char)op == '#') {
        std::cout << "Type a number to square root: ";
        std::cin >> num1;
        std::cout << "Square root of number " << num1 << " = " << sqrt(num1);
    }
    } while ( (char)op != '0' );
    std::cout << "******************************************************\n";

    return 0;
   }
