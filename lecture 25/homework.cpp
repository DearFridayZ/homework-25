#include <iostream>
#include <math.h>
using namespace std;

int main(){
    

    //ლექცია 25..........................
    //დავალება ნ.1

    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter First number: ";
    cin >> firstNumber;

    cout << "Enter Second number: ";
    cin >> secondNumber;

    cout << "Enter Third number: ";
    cin >> thirdNumber;

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {   
        cout << "largest number is " << firstNumber <<'\n';
    }

    else if (secondNumber > thirdNumber && secondNumber > firstNumber)
    {   
        cout << "largest number is " << secondNumber <<'\n';
    }

    else if (thirdNumber > firstNumber && thirdNumber > secondNumber)
    {   
        cout << "largest number is " << thirdNumber <<'\n';
    }

    else {
        cout << " All values are the same !! " << '\n';
    }
    
     


    //დავალება ნ.2
    float Radius;

    cout << "enter the value of Radius: ";
    cin >> Radius;

    float
    area = 3.14159265359 * (Radius * Radius);

    cout << area << '\n';



    //დავალება ნ.3

    float celsius;
    float fahrenheit;

    cout << "Cel  to Fah , enter the value: " << '\n';
    cin >> celsius;
    cout << celsius * 1.8 + 32 << '\n';

    cout << "Fah to Cel , enter the value: " << '\n';
    cin >> fahrenheit;
    cout << (fahrenheit - 32) * 0.5556 << '\n'; 




    //დავალება ნ.4 // მანძილი ორ წერტილს შორის

    float distance;

    int x1, y1, x2, y2;

    int dx, dy;

 

    std::cout << "Distance between the two points\n";

 

    std::cout << "Enter X1: ";

    std::cin >> x1;

 

    std::cout << "Enter Y1: ";

    std::cin >> y1;

 

    std::cout << "Enter X2: ";

    std::cin >> x2;

 

    std::cout << "Enter Y2: ";

    std::cin >> y2;

 

    dx = x2 - x1;

    dy = y2 - y1;

 

    distance = sqrt((double) dx*dx + dy*dy);

    std::cout << "Distance between (" << x1 << ", " << y1 << " and (" << x2 << ", " << y2 << ") = ";

    std::cout << "SQRT(" << dx*dx + dy*dy << ") = " << distance;


    // დავალება ნ.5 //ნაკიანი წელიწადის ამომცნობი

    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0) {
        cout << year << " is a leap year.";
    }
   
    else if (year % 100 == 0) {
        cout << year << " is not a leap year.";
    }
    
    else if (year % 4 == 0) {
        cout << year << " is a leap year.";
    }

    else {
    cout << year << " is not a leap year.";
    '\n';
  }


  //დავალება ნ.6 // კვადრატული განტოლების ამომხსნელი პროგრამა


    float a, b, c, z1, z2, discriminant, realPart, imaginaryPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        z1 = (-b + sqrt(discriminant)) / (2*a);
        z2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "z1 = " << z1 << endl;
        cout << "z2 = " << z2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        z1 = -b/(2*a);
        cout << "x1 = x2 =" << z1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "z1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "z2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    '\n';

    //დავალებან.7

     char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }


    return 0;
}