#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Enter size of array 1:";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array 1:";
    for(int i = 0; i <n1; i ++){
        cin >> arr1[i];
    }
    int arr2[n2];
    cout << "Enter elements of array 2: ";
    for(int i = 0; i<n2;i++){
        cin >> arr2[i];
    }
    cout << "Common elements:";
    for(int i = 0; i< n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}