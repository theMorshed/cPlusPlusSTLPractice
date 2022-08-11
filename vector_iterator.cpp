#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    // declare a vector and iterator
    vector <int> numbers(5, 10);
    vector <int>::iterator num;

    // print all data using loop
    for (int i = 0; i < numbers.size(); i++) 
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;

    // print all data using iterator
    for (num = numbers.begin(); num != numbers.end(); num++)
    {
        cout << *num << '\t';
    }

    cout << endl;

    return 0;
}