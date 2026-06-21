#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main() {
    int m, n;

    cout << "Enter number of elements in first array: ";
    cin >> m;

    cout << "Enter number of elements in second array: ";
    cin >> n;

    int arr1[100];
    int arr2[100];

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = m; i < m + n; i++) {
        arr1[i] = 0;
    }//creating extra space as arr1 is only upto m to hold extra elemnts extra space is alloted to it
//refrence is leetcode pblm
    merge(arr1, arr2, m, n);

    cout << "Merged Array: ";
    for (int i = 0; i < m + n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}