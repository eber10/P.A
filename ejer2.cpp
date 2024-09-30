#include<iostream>
using namespace std;
int main()
{
    int arr[]={20, 12, 14, 25, 04, 3, 7};
    int n=7;
    for(int i=n-1; i>0; i--)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]<arr[j])
            {
                int aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
    cout<<"valores ordenados"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}