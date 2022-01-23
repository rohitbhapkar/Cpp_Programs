#include<iostream>
using namespace std;

int* InsertNumArray(int arrayName[], int n){
    int numInsert, pos;
    cout<<"Enter the number to be inserted: ";
    cin>>numInsert;
    cout<<"Enter the postion at which element is to be inserted: ";
    cin>>pos;

    if (pos<=0){
        cout<<"Invalid position! Position starts from 1 ";
    }
    else{
        for (size_t i = n; i >= pos-1; i--)
        {
            arrayName[i] = arrayName[i-1];
        }
        arrayName[pos-1] = numInsert;

        // Display final array 
        cout<<"The array after insertion: "<<endl;
        for (size_t i = 0; i <= n; i++)
        {
            cout<<arrayName[i]<<" ";
        }
    }
}

int deleteElement(int arrayName[], int n)
{
    int pos1, i ;
    cout<<"Enter the position of the element to be deleted : ";
    cin>>pos1;
    --pos1;

    if (pos1<=0){
        cout<<"Invalid position! Position starts from 1 ";
    }
    else{
        for (i = pos1; i <= n; i++)
        {
            arrayName[i] = arrayName[i + 1];
        }
    }

    // Display final array 
    cout<<"The array after deletion: "<<endl;
    for (i = 0; i < n-1; i++)
    {
        cout<<arrayName[i]<<" ";
    }   
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    int arrayName[n];
    cout<<"Enter "<<n<<" elements of the array: ";

    // Traversal
    for (size_t i = 0; i < n; i++)
    {
        cin>>arrayName[i];
    }    

    cout<<"The array before operations: "<<endl;
    for (size_t i = 0; i < n; i++)
    {
        cout<<arrayName[i]<<" ";
    }
    cout<<endl;

    cout<<"The available operations are: "<<endl;
    cout<<"1. Insertion"<<endl;
    cout<<"2. Deletion"<<endl;
    cout<<"3. Exit"<<endl;

    int choice;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        InsertNumArray(arrayName, n);
        break;
    
    case 2:
        deleteElement(arrayName, n);
        break;

    case 3:
        break;

    default:
        break;
    }
   
    return 0;
}
