 //Q1
 #include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], n = 0, choose;

    while (true) {
        cout << "Enter: ";
        cin >> choose;

        if (choose == 1) {
            cin >> n;
            for (int i = 0; i < n; i++) 
            cin >> arr[i];
        }
        else if (choose == 2) {
            for (int i = 0; i < n; i++) 
            cout << arr[i] << " ";
            cout << endl;
        }
        else if (choose == 3) {
            int pos, val;
            cin >> pos >> val;
            if (pos >= 0 && pos <= n) {
                for (int i = n; i > pos; i--) 
                arr[i] = arr[i - 1];
                arr[pos] = val;
                n++;
            }
        }
        else if (choose == 4) {
            int pos;
            cin >> pos;
            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) 
                arr[i] = arr[i + 1];
                n--;
            }
        }
        else if (choose == 5) {
            int element, index = -1;
            cin >> element;
            for (int i = 0; i < n; i++) 
            if (arr[i] == element)
             { index = i; break; }
            if (index != -1) 
            cout << index << endl;
        }
        else if (choose == 6) break;
    }
}

//--------------------------------------------------------------
//Q2 removing duplicate
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,5,3,4,5};
    int b=5;
    for(int i=0;i<b;i++){
        for(int j=i+1;j<b;){
            if(a[i]==a[j]){
                for(int k=j;k<b-1;k++){
                    a[k]=a[k+1];
                }
                b--;
            }else j++;
        }
    }
    for(int i=0;i<b;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//--------------------------------------------------------------------
//Q3
// output=10000
//--------------------------------------------------------------------
//Q4a reversing arr
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b=sizeof(a)/sizeof(a[0]);
    for(int l=0,r=b-1;l<r;l++,r--) swap(a[l],a[r]);
    for(int i=0;i<b;i++) cout<<a[i]<<" ";
}

//Q4b matrix multiply
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m1=2,n1=3,m2=3,n2=2;
    int p[2][3]={{1,2,3},{4,5,6}},q[3][2]={{7,8},{9,10},{11,12}},r[2][2]={0};
    for(int i=0;i<m1;i++)
        for(int j=0;j<n2;j++)
            for(int k=0;k<n1;k++)
                r[i][j]+=p[i][k]*q[k][j];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++) cout<<r[i][j]<<" ";
        cout<<endl;
    }
}


//Q4c transpose matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=2,n=3;
    int a[2][3]={{1,2,3},{4,5,6}},tra[3][2];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            tra[j][i]=a[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<tra[i][j]<<" ";
        cout<<endl;
    }
}



//-------------------------------------------------------------------------
//Q5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=3,c=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<r;i++){
        int s=0;
        for(int j=0;j<c;j++) 
        s=s+arr[i][j];
        cout<<"row "<<i+1<<" sum: "<<s<<endl;
    }
    for(int j=0;j<c;j++){
        int s=0;
        for(int i=0;i<r;i++)
         s=s+arr[i][j];
        cout<<"column "<<j+1<<" sum: "<<s<<endl;
    }
}
//-------------------------------------------------------------------------------