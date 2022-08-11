#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // declare a vector
    vector <int> numbers;

    // add some data in vector
    numbers.push_back(34);
    numbers.push_back(10);
    numbers.push_back(11);
    
    // iterate all item in vector
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}