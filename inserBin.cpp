#include<iostream>
using namespace std;
void ordenar(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int aux=arr[i];
        int izq=0;
        int der=i-1;
        while(izq<=der)
        {
            int m=(izq+der)/2;
            if(aux<arr[m])
            {
                der=m-1;
            }
            else
            {
                izq=m+1;
            }
        }
        int j=i-1;
        while(j>=izq)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[izq]=aux;
    }
    cout<<"valores ordenados"<<endl;
    cout<<"-----------------"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"------------------"<<endl;
}
int main()
{
    int n;
    cout<<"ingrese la cantidad de elementos:"; cin>>n;
    int arreglo[n];
    for(int i=0; i<n; i++)
    {
        cout<<i<<": "; cin>>arreglo[i];
    }
    ordenar(arreglo, n);
    return 0;
}