#include<iostream>
using namespace std;
void inserDir(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int aux=arr[i];
        int k=i-1;
        while(k>=0 && aux<arr[k])
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=aux;
    }
    cout<<"valores ordenador"<<endl;
    cout<<"------------------"<<endl;
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
    inserDir(arreglo, n);
    return 0;
}
