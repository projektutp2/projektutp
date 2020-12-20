//
//  main.cpp
//  projektutp
//
//

#include <iostream>

using namespace std;

#include "./calculations/additional.hpp"
#include "./calculations/division.hpp"
#include "./calculations/multiplication.hpp"
#include "./calculations/subtraction.hpp"

int main()
{
    char operate;
    int num1, num2, result;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> num1;

    cout << "Podaj znak: " << endl;
    cin >> operate;

    cout << "Podaj druga liczbe: " << endl;
    cin >> num2;

    if (operate == '+')
    {
        result = funcAdditional(num1, num2);
    }
    else if (operate == '-')
    {
        result = funcDivision(num1, num2);
    }

    cout << "wynik: " << result;

    return 0;
}
