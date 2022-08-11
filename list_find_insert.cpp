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

    // find an specific item index if item not present in the list iterator return end     
    list_item = find(mylist.begin(), mylist.end(), 1);

    // check item is present
    if (list_item == mylist.end())
    {
        cout << "NOT FOUND\n";        
    }
    else
    {
        cout << *list_item << endl;
    }

    // print the find result
    mylist.insert(list_item, 9);

    // erase an item from list
    list_item = find(mylist.begin(), mylist.end(), 2);
    mylist.erase(list_item);

    // print whole list
    for (list_item = mylist.begin(); list_item != mylist.end(); list_item++)
    {
        cout << *list_item << "  ";
    }
    cout << "\n";

    return 0;
}