#include <iostream>
#include <conio.h>

int main()
{
    int age;
    std::cout << "Welcome to Espen's Age Ask'er\nFirst I need to know your age\nJust write your age down and press enter\n";
    std::cin >> age;
    if (age >= 20)
        std::cout << "Then u are an adult and u can join our Jorney";
    else
        std::cout << "U are just a kid u, can't join us at the great adventure";
}


