#include<iostream>
using namespace std;
int main()
{
    int arr[]={50, 10, 5, 1, 20};
    int n=5;
    int cen=1;
    int i=1;
    while(i<=n-1 && cen==1)
    {
        cen=0;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                cen=1;
            }
        }
        i++;
    }
    cout<<"valores ordenados"<<endl;
    cout<<"-----------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}