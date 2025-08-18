//Q5--------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cout << "enter n: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements: ";
//     for (int i = 0; i < n; i++)
//          cin >> arr[i];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) cout << arr[i] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//5B
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cout << "enter n: ";
//     cin >> n;
//     int brr[3*n - 2];
//     cout << "enter elements: ";
//     for (int i = 0; i < (3*n - 2); i++) cin >> brr[i];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) cout << brr[n-1+i] << " ";
//             else if (i == j+1) cout << brr[i-1] << " ";
//             else if (j == i+1) cout << brr[2*n-1+i] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//5C
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cout << "enter n: ";
//     cin >> n;
//     int crr[n*(n+1)/2];
//     cout << "enter elements: ";
//     for (int i = 0; i < (n*(n+1)/2); i++) cin >> crr[i];

//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j <= i) cout << crr[k++] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//5D

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cout << "enter n: ";
//     cin >> n;
//     int drr[n*(n+1)/2];
//     cout << "enter elements: ";
//     for (int i = 0; i < (n*(n+1)/2); i++) cin >> drr[i];

//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j >= i) cout << drr[k++] << " ";
//             else cout << 0 << " ";
//         }
//         cout << endl;
//     }
// }

//5E

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; 
//     cout << "enter n: ";
//     cin >> n;
//     int err[n*(n+1)/2];
//     cout << "enter elements: ";
//     for (int i = 0; i < (n*(n+1)/2); i++) cin >> err[i];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j <= i) cout << err[i*(i+1)/2 + j] << " ";
//             else cout << err[j*(j+1)/2 + i] << " ";
//         }
//         cout << endl;
//     }
// }

//Q6----------------------------
//doubt difficulty in sparse matrix will ask dought or do these questions in class

//Q7--------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter size: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements: ";
//     for(int i=0; i<n; i++) 
// cin >> arr[i];

//     int count = 0; 
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 count++;
//             }
//         }
//     }
//     cout << "total inversions: "<<count;

//Q8

//seen and then learned from chatgpt the boolean thing
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter size: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements: ";
//     for(int i=0; i<n; i++) {cin >> arr[i]};

//     int count = 0;
//     for(int i=0; i<n; i++) {
//         bool seen = false;
//         for(int j=0; j<i; j++) {
//             if(arr[i] == arr[j]) {
//                 seen = true; 
//                 break;
//             }
//         }
//         if(!seen) count++;
//     }

//     cout << "total distinct elements: " << count;
// }


//additional questions
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cout << "enter size: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements: ";
//     for(int i=0; i<n; i++) cin >> arr[i];
//     cout << "enter k: ";
//     cin >> k;

//     int count = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(abs(arr[i] - arr[j]) == k) {
//                 count++;
//             }
//         }
//     }
//     cout << "total pairs: " << count;
// }
//not able to do other additional ques as not getting ideas to do them