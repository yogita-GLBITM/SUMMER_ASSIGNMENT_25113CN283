#include <iostream>
using namespace std;

int main(){
    int arr[100],n=0;
    int choice,pos,value,i;

     do {
        
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

switch(choice){

    case 1:
    cout<<"ENTER NUMBER OF ELEMENTS:";
    cin>>n;
    cout<<"ENTER "<< n << "ELEMENTS :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    break;

    case 2:
    if(n==0){
        cout<<"array is empty!! \n";
    }
    else{
        cout<<"ARRAY ELEMENTS : ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}
break;
 
case 3:
cout<< "ENTER POSITIOM TO INSERT(1- << n+1 << ):";
cin>>pos;
cout<<"ENTER VALUES: ";
cin>>value;
if(pos < 1 || pos > n + 1) {
    cout << "Invalid Position!\n";
} else {
       for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
                    }
    arr[pos - 1] = value;
    n++;
    cout << "Element inserted successfully.\n";
}
break;

case 4:
cout << "Enter element to search: ";
cin >> value;

for(i = 0; i < n; i++) {
     if(arr[i] == value) {
         cout << "Element found at position " << i + 1 << endl;
        break;
    }
 }

case 6:
cout << "Exiting program...\n";
 break;

     default:
         cout << "Invalid choice!\n";
 }
} while(choice != 6);
 return 0;
}