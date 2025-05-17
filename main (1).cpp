#include <iostream>
#include "SortedListType.cpp"
using namespace std;


int main()
{
    SortedListType<int> sl;


    cout << "the length of the list " << sl.LengthIs() << endl;
    sl.InsertItem(5);
    sl.InsertItem(7);
    sl.InsertItem(4);
    sl.InsertItem(2);
    sl.InsertItem(1);
    //cout << "the array list is : "  << endl;


    sl.Print();
     int value = 5;
        bool flag;
     sl.RetrieveItem(value, flag);
        if(flag)
        {

            cout<< "the item is found" << endl;
        } else
        {

            cout << "the item is not found" << endl;
        }
        sl.Print();
     value = 6;

     sl.RetrieveItem(value, flag);
        if(flag)
        {

            cout<< "the item is found" << endl;
        } else
        {

            cout << "the item is not found" << endl;
        }
        if(sl.IsFull())
        {
            cout<< "the list is full" << endl;
        } else
        {
            cout << "the list is not full" << endl;
        }

          sl.DeleteItem(1);
        cout << "print the elements using getnext item " << endl;

        for(int i=0; i< sl.LengthIs();i++)
        {
               sl.GetNextItem(value);
                cout << value <<" " ;
        }
        cout << endl;

       if(sl.IsFull())
        {
            cout<< "the list is full" << endl;
        } else
        {
            cout << "the list is not full" << endl;
        }
    return 0;
}
