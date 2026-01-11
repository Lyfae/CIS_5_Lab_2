#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

    int age = 0;

    cout << "What is your age?";
    cin >> age;

    // condition determine if you are old enough to ride the ride

    if (age > 5)
    {
        cout << "Yay!";
    }

    return 0;
}

// g++ main.cpp -o main
// ./main

