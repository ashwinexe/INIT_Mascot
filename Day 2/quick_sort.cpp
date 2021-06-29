#include<bits/stdc++.h>
#define ll long long
using namespace std;
int MOD = 1e9 + 7;
void bubble_sort(int arr[],int n);

int main()
{
    int array[5];
    int n;
    cout << "Enter number of digits : ";
    cin >> n;
    cout << "Enter " << n << " digits: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        array[i] = x;
    }

    bubble_sort(array, n);
    for(int i=0; i<n; i++)
        cout << array[i] << ' ';
}

void bubble_sort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}
