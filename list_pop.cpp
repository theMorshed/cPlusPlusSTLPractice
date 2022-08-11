#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {5, 2, 1, 6, 3};

    list <int> mylist(arr, arr + 5);
    list <int>::iterator list_item;

    // show first element and last element
    cout << mylist.front() << "\n";
    cout << mylist.back() << "\n";

    // print list before remove
    for (list_item = mylist.begin(); list_item != mylist.end(); list_item++)
    {
        cout << *list_item << "  ";
    }
    cout << "\n";

    // remove first and last element with pop function
    mylist.pop_front();
    mylist.pop_back();

    // print list after remove item
    for (list_item = mylist.begin(); list_item != mylist.end(); list_item++)
    {
        cout << *list_item << "  ";
    }
    cout << "\n";

    return 0;
}