#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int even_sum = 0, odd_sum = 0;
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }
    cout << "Sum of even numbers = " << even_sum << endl;
    cout << "Sum of odd numbers = " << odd_sum << endl;

    return 0;
}