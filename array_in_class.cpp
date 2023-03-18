#include <iostream>
using namespace std;
class array
{
public:
    int *a;
    int size;
    int lenght;

    array()
    {
        size = 10;
        lenght = 0;
        a = new int[size];
    }
    array(int sz)
    {
        size = sz;
        lenght = 0;
        a = new int[size];
    }
    ~array()
    {
        delete[] a;
    }
    void display()
    {
        for (int i = 0; i < lenght; i++)
        {
            cout << a[i] << "\t";
        }
    }
    int get(int index)
    {
        if (index >= 0 && index < lenght)
        {
            return a[index];
        }
    }
    void set(int index, int x)
    {
        if (index >= 0 && index < lenght)
        {
            a[index] = x;
        }
    }

    int Lsearch(int key)
    {
        for (int i = 0; i < lenght; i++)
        {
            if (key == a[i])

                return i;
        }
        return -1;
    }
    int Bsearch(int key)
    {
        int l = 0;
        int h = lenght - 1;
        int mid;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (key == a[mid])
            {
                return mid;
            }
            else if (key < a[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    array *merge(array a2)
    {
        int i, j, k;
        i = j = k = 0;
        array *a3 = new array(lenght + a2.lenght);
        while (i < lenght && j < a2.lenght)
        {
            if (a[i] < a2.a[j])
            {
                a3->a[k++] = a[i++];
            }
            else
            {
                a3->a[k++] = a2.a[j++];
            }
        }
        for (; i < lenght; i++)
        {
            a3->a[k++] = a[i];
        }
        for (; j < a2.lenght; j++)
        {
            a3[k++] = a2.a[j++];
        }
        return a3;
    }
};
int main()
{
    array *a;
    array a2;
    int sz, ch;
    a = new array[sz];

    cout << "enter the size of the array : ";
    cin >> sz;
    cout << "enter the size of the array 'a1' : ";
    cin >> a->size;
    cout << "enter the lenght of the array 'a1' : ";
    cin >> a->lenght;
    cout << "enter the array elements of 'a1' : ";
    for (int i = 0; i < a->lenght; i++)
    {
        cin >>
            a->a[i];
    }

    cout << "\nMAIN MENU \n";
    cout << "1.get()\n";
    cout << "2.set()" << endl;
    cout << "3.Linear search" << endl;
    cout << "4.Binary search " << endl;
    cout << "5.Merge " << endl;
    cout << "6.Display" << endl;
    do
    {
        cout << "enter your choice : ";
        cin >> ch;
        switch (ch)
        {

        case 1:
            int index;
            cout << "enter the index : ";
            cin >> index;
            a->get(index);
            break;
        case 2:
            cout << "enter the index : ";
            cin >> index;
            int x;
            cout << "enter the number : ";
            cin >> x;
            a->set(index, x);
            break;
        case 3:
            int key;
            cout << "enter the index : ";
            cin >> key;
            a->Lsearch(key);
            break;
        case 4:
            cout << "enter the index : ";
            cin >> key;
            a->Bsearch(key);
            break;
        case 5:
            cout << "enter the size of the array 'a2' : ";
            cin >> a2.size;
            cout << "enter the lenght of the array 'a2' : ";
            cin >> a2.lenght;
            cout << "enter the array elements of 'a2' : ";
            for (int j = 0; j < a2.lenght; j++)
            {
                cin >> a2.a[j];
            }
            a->merge(a2);
            break;
        case 6:
            a->display();
            break;

        default:
            break;
        }
    } while (ch < 6);
}
 