#include<iostream>
using namespace std;
void minMax(int arr[], int n, int *max, int *min)
{
    *max=*min=arr[0];
    for(int j=0; j<n; j++)
    {
    	cout<<arr[j]<<" ";
	}
	cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
        }
        else
        {
            if(arr[i]<*min)
            {
                *min=arr[i];
            }
        }
    }

}
int main()
{
    int arr[]={20, 10, 30, 15};
    int max, min, n=4;
    minMax(arr, n, &max, &min);
    cout<<"maximo: "<<max<<endl;
    cout<<"minimo: "<<min<<endl;
    return 0;
}
