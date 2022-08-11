#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <float> numberList(5, 4);
    list <float>::iterator listItem;

    numberList.push_back(23);
    numberList.push_back(56.74);
    numberList.push_back(46.43);
    numberList.push_front(23.45);
    numberList.push_front(12.45);

    // print whole list
    for (listItem = numberList.begin(); listItem != numberList.end(); listItem++)
    {
        cout << *listItem << "  ";
    }
    cout << endl;

    // reverse all item and know the size of list
    numberList.reverse();
    cout << numberList.size() << endl;


    for (listItem = numberList.begin(); listItem != numberList.end(); listItem++)
    {
        cout << *listItem << "  ";
    }
    cout << endl;

    // clear the list 
    numberList.clear();
    // try to print the size after clear
    cout << numberList.size() << endl;
    
    return 0;
}