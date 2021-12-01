//Create a 2D array and accept value from user and print the array elements 

#include<iostream>
using namespace std;
int main()
{
        int arr[15][15], rows, cols, i, j;
        cout<<"\n Enter Rows for Array : ";
        cin>>rows;
        cout<<"\n Enter Columns for Array: ";
        cin>>cols;
        cout<<"\n Enter "<<rows<<"*"<<cols<<" Array Elements : \n";

        for(i=0; i<rows; i++)
        {
                for(j=0; j<cols; j++)
                {
                        cout<<" ";
                        cin>>arr[i][j];
                }
        }

        cout<<"\n Two Dimensional Array is : \n";
        
        for(i=0; i<rows; i++)
        {
                for(j=0; j<cols; j++)
                {
                        cout<<" "<<arr[i][j]<<" ";
                }
                cout<<"\n";
        }
        return 0;
}
