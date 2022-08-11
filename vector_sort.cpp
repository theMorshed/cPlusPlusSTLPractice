#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

// bool function for reverse sort
bool reverse_sort(int a, int b)
{
    return a > b;
}

int main()
{
    // declare a vector and iterator
    vector <int> numbers;
    vector <int>::iterator num;
    vector <int> marks;
    vector <int>::iterator mark;

    // add some data using push_back function
    numbers.push_back(10);
    numbers.push_back(432);
    numbers.push_back(32);
    numbers.push_back(52);
    numbers.push_back(12);
    numbers.push_back(50);

    marks.push_back(56);
    marks.push_back(84);
    marks.push_back(74);
    marks.push_back(59);
    marks.push_back(37);
    marks.push_back(95);

    // sort vector using sort function 
    sort(numbers.begin(), numbers.end());

    // print the whole vector using iterator
    cout << "All sorted numbers: ";
    for(num = numbers.begin(); num != numbers.end(); num++)
    {
        cout << *num << "   ";
    }
    cout << endl;

    // reverse sort vector using custom reverse function 
    cout << "All sorted marks(reverse): ";
    sort(marks.begin(), marks.end(), reverse_sort);

    // print the whole vector using iterator
    for(mark = marks.begin(); mark != marks.end(); mark++)
    {
        cout << *mark << "   ";
    }
    cout << endl;

    return 0;
}