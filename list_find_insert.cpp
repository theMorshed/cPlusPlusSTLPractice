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

    // find an specific item index
    list_item = find(mylist.begin(), mylist.end(), 1);
    // print the find result
    cout << *list_item << endl;
    mylist.insert(list_item, 9);

    // print whole list
    for (list_item = mylist.begin(); list_item != mylist.end(); list_item++)
    {
        cout << *list_item << "  ";
    }
    cout << "\n";

    return 0;
}