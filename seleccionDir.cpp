#include<iostream>
using namespace std;
void ordenar(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int menor=arr[i];
        int k=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<menor)
            {
                menor=arr[j];
                k=j;
            }
        }
        arr[k]=arr[i];
        arr[i]=menor;
    }
    
    
    cout<<"valores ordenados"<<endl;
    cout<<"-----------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cout<<"ingrese la cantidad de elementos:"; cin>>n;
    int arreglo[n];
    for(int i=0; i<n; i++)
    {
        cout<<i<<":"; cin>>arreglo[i];
    }
    ordenar(arreglo, n);
    return 0;

}