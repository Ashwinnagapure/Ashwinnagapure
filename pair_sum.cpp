#include <iostream>
using namespace std;
class pair1
{
private:
    int a[100];
    int n;

public:
    void get()
    {
        cout << "enter the size of array elements : ";
        cin >> n;
        cout << "enter the array elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void sum()
    {
        int k;
        cout << "enter the sum number : ";
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == k)
                {
                    cout << "the pair of element is : " << a[i] << " + " << a[j] << " = " << k << endl;
                }
            }
        }
    }
};
int main()
{
    pair1 p;
    p.get();
    p.sum();
}
