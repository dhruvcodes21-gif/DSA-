#include<iostream>
using namespace std;

bool Search(int arr[],int size, int key){
    for (int i=0; i<size; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main (){

    int arr[10]={5,7,-2,10,22,-2,0,5,9,26};

    cout<<"Enter the key that you want to find in the array"<<endl;
    int key;
    cin >> key;
    bool found = Search(arr,10,key);

    if (found){
        cout << "The key exists in the array" <<endl;
    }
    else{cout<< "The key doesn't exist in the array"<< endl;
    }


}