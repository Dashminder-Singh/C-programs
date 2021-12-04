#include<iostream>
using namespace std;

 void printArray(int *p, int n)
 {
    for(int i=0; i<n; i++)
    {
    	cout<<"The value of element is "<<i+1<<" = "<<*(p+i)<<endl;
        
    }
 }

/*void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
    	cout<<"The value of element is "<<i+1<<" = "<<arr[i]<<endl;
        
    } 
   // arr[2] = 5555; // This value will be changes in arr array of main as well
}*/

int main(){
    int arr[] = {1,2,354,34,3,645,23};
    printArray(arr, 7);
    //cout<<arr[2];
    return 0;
}