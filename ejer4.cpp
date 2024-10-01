#include<iostream>
using namespace std;
int main()
{
    int arr[]={5, 50, 11, 1, 60, 20};
    int n=6;
    int izq=0;
    int der=n-1;
    while(izq<=der)
    {
        
        for(int i=der; i>izq; i--)
        {
            if(arr[i-1]>arr[i])
            {
                int aux=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=aux;
                
            }
        }
        izq++;
        for(int i=izq; i<der; i++)
        {
            if(arr[i-1]>arr[i])
            {
                int aux=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=aux;
                
            }
        }
        der--;
    }
    cout<<"valores ordenados"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}