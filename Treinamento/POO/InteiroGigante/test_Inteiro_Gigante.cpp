#include <iostream>
#include "Inteiro_Gigante.cpp"

using namespace std;

int main()
{
    // Test input and output functions
    HugeInteger num1;
    cout << "Enter a number: ";
    num1.input();
    cout << "The number you entered is: ";
    num1.output();

    // Test add function
    HugeInteger num2;
    cout << "Enter another number: ";
    num2.input();
    HugeInteger sum = num1.add(num2);
    cout << "The sum of the two numbers is: ";
    sum.output();

    // Test subtract function
    HugeInteger diff = num1.subtract(num2);
    cout << "The difference between the two numbers is: ";
    diff.output();

    // Test isEqualTo function
    HugeInteger num3 = num1;
    if (num1.isEqualTo(num3)) {
        cout << "The two numbers are equal." << endl;
    } else {
        cout << "The two numbers are not equal." << endl;
    }

    // Test isNotEqualTo function
    HugeInteger num4;
    cout << "Enter a number to compare with the first number: ";
    num4.input();
    if (num1.isNotEqualTo(num4)) {
        cout << "The two numbers are not equal." << endl;
    } else {
        cout << "The two numbers are equal." << endl;
    }

    // Test isGreaterThan function
    if (num1.isGreaterThan(num2)) {
        cout << "The first number is greater than the second number." << endl;
    } else {
        cout << "The first number is not greater than the second number." << endl;
    }

    // Test isLessThan function
    if (num1.isLessThan(num2)) {
        cout << "The first number is less than the second number." << endl;
    } else {
        cout << "The first number is not less than the second number." << endl;
    }

    // Test isGreaterThanOrEqualTo function
    if (num1.isGreaterThanOrEqualTo(num3)) {
        cout << "The first number is greater than or equal to the third number." << endl;
    } else {
        cout << "The first number is not greater than or equal to the third number." << endl;
    }

    // Test isLessThanOrEqualTo function
    if (num1.isLessThanOrEqualTo(num3)) {
        cout << "The first number is less than or equal to the third number." << endl;
    } else {
        cout << "The first number is not less than or equal to the third number." << endl;
    }

    // Test isZero function
    HugeInteger num5;
    if (num5.isZero()) {
        cout << "The number is zero." << endl;
    } else {
        cout << "The number is not zero." << endl;
    }

    // Test multiply function
    HugeInteger num6;
    cout << "Enter a number to multiply with the first number: ";
    num6.input();
    HugeInteger product = num1.multiply(num6);
    cout << "The product of the two numbers is: ";
    product.output();

    // Test divide function
    HugeInteger num7;
    cout << "Enter a number to divide the first number by: ";
    num7.input();
    HugeInteger quotient = num1.divide(num7);
    cout << "The quotient of the two numbers is: ";
    quotient.output();

    // Test modulus function
    HugeInteger remainder = num1.modulus(num7);
    cout << "The remainder of the two numbers is: ";
    remainder.output();

    return 0;
}