#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

// function for reverse sort
bool vector_reverse(int a, int b)
{
    return a > b;
}

int main()
{
    // declare a vector and iterator
    vector <int> numbers;
    vector <int>::iterator num;

    // add some data using push_back function
    numbers.push_back(10);
    numbers.push_back(432);
    numbers.push_back(32);
    numbers.push_back(52);
    numbers.push_back(12);
    numbers.push_back(50);

    // sort vector using sort function 
    sort(numbers.begin(), numbers.begin() + 3);
    sort(numbers.begin(), numbers.begin() + 3, vector_reverse);

    // print the whole vector using iterator
    cout << "All sorted numbers: ";
    for(num = numbers.begin(); num != numbers.end(); num++)
    {
        cout << *num << "   ";
    }
    cout << endl;

    // sort vector using sort function from index 3 to end 
    sort(numbers.begin()+3, numbers.end());

    // print the whole vector using iterator
    cout << "All sorted numbers: ";
    for(num = numbers.begin(); num != numbers.end(); num++)
    {
        cout << *num << "   ";
    }
    cout << endl;

    return 0;
}