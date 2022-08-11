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
    
    // modify existing data
    numbers[1] = 24;

    // print some data
    cout << numbers[0] << endl;
    cout << numbers[1] << endl;

    return 0;
}