#include <iostream>
using namespace std;

int main()
{
    int arr [10] = {12, 14, 11, 8, 93, 24, 67, 25, 77, 1};
    int counter = 0;
    bool swapped = false;

    for (int i = 0; i < 10; i++)
    {
        swapped = false;

        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swapped = true;

                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }

        if (swapped == false)
        {
            break;
        }

        counter++;
    }

     cout << "The sorted array is as follows: " << endl;
     for (int k = 0; k < 10; k++)
     {
        cout << arr[k] << " ";
     }
    cout << "\nSorted  was traversed: " << counter << " times" << endl;
    return 0;
}