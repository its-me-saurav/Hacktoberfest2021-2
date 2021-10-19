#include<iostream>
using namespace std;

void reverse(int arr[], int s, int e)
{
    while(s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;e--;
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter no of element in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element in array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Original"<<endl;
    print(arr, n);

    cout<<"Array in reverse order"<<endl;
    reverse(arr, 0, n-1);
    print(arr, n);

     return 0;
}

//Alternate way
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
