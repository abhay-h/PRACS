#include<iostream>
using namespace std;
int main()
{
    int arr[5], tot=5, elem,found=0;
    cout<<"Enter 5 Array Elements: ";
    for(int i=0; i<tot; i++) // taking array as input

        cin>>arr[i];

    cout<<"\nEnter Element to Delete: ";
    cin>>elem; // taking input for number to be deleted

    for(int i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(int j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0) // to check presence of give number in array
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;


    for(int i=0; i<tot; i++)
    {
       cout << arr[i];
    }
    return 0;
}