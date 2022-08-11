#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <float> numberList;
    list <float>::iterator listItem;

    numberList.push_back(23);
    numberList.push_back(56.74);
    numberList.push_back(46.43);
    numberList.push_front(23.45);
    numberList.push_front(12.45);

    for (listItem = numberList.begin(); listItem != numberList.end(); listItem++)
    {
        cout << *listItem << "   ";
    }
    cout << endl;
    
    return 0;
}