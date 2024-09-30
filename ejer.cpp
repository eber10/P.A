#include<iostream>
using namespace std;
int main()
{
    int arr[]={20, 12, 14, 25, 4};
    int n=5;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
    cout<<"resultado"<<endl;
    cout<<"---------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}