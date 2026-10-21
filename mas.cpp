#include <iostream>
#include <string>
#include <clocale>
using namespace std;


void z3(int arr1[], int n){
    cout<< "Задание 3\n";
    int p;
    cout<< "введите p элемент массива: ";
    cin>> p;
    int j = 0;
    for(int i = 0; i< n; i++){
        if (arr1[i] == arr1[p-1]){
            j++;
        }
    }
    int arr2[j]; 
    j = 0;
    for(int i = 0; i< n; i++){
        if (arr1[i] == arr1[p-1]){
            arr2[j] = i + 1;
            cout<< arr2[j]<< ' ';
            j++;
        }
    }
}

void z4(int arr1[], int n){
    cout<< "Задание 4\n";
    int j = 0;
    for(int i = 0; i< n; i++){
        if ((arr1[i] > 0) && (arr1[i] % 2 == 0)){
            j++;
        }
    }
    int arr2[j]; 
    j = 0;
    for(int i = 0; i< n; i++){
        if ((arr1[i] > 0) && (arr1[i] % 2 == 0)){
            arr2[j] = arr1[i];
            cout<< arr2[j]<< ' ';
            j++;
        }
    }
}

int main(){
    cout<< "введите кол-во элементов массива: ";
    int n;
    cin>> n;
    int arr[n];
    cout<< "введите массив: ";
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    cout<<'\n';
    z3(arr, n);
    cout<<'\n'<<endl;
    z4(arr, n);
    cout<<'\n';
    return 0;
}