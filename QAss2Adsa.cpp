// Q1

// #include <iostream>
// using namespace std;
// int main() {
//     int nums[] = {2, 8, 9, 1, 6, 123, 3, 4, 5};
//     int n = sizeof(nums) / 4;
//     int target;
//     cout << "enter number: ";
//     cin >> target;

//     int left = 0, right = n - 1;
//     int pos = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2; 

//         if (nums[mid] == target) {
//             pos = mid;
//             break;
//         }
//         else if (nums[mid] < target) {
//             left = mid + 1; 
//         }
//         else {
//             right = mid - 1; 
//         }
//     }

//     if (pos != -1)
//         cout << "yup found at  " << pos << endl;
//     else
//         cout << "nope not here" << endl;
//     return 0;
// }


// -----------------------------------------------------------
//Q2
// #include <iostream>
// using namespace std;
// int main() {
//     int nums[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(nums) / 4;

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (nums[j] > nums[j + 1]) 
//             {swap(nums[j], nums[j + 1]);}
//         }
//     }
//     for (int i = 0; i < n; i++)
//      {cout << nums[i] << " ";}
    
// }

//----------------------------------------------------------------
//Q3
// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,2,3,5,6};
// int n=sizeof(arr)/4;
// int missing=-1;
// for(int i=0;i<n-1;i++){
//     if(arr[i+1]-arr[i]!=1){missing=arr[i]+1;}
// }if(missing!=-1){
// cout<<missing;}
// else{cout<<"no missing num";}
// }