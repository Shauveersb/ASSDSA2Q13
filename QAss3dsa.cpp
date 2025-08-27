// //Q1
// #include <iostream>
// using namespace std;

// #define MAX 100
// int shaurya[MAX];
// int top = -1;

// void push(int x) {
//     if (top == MAX - 1) {
//         cout << "Stack is Full\n";
//     } else {
//         shaurya[++top] = x;
//         cout << x << " pushed\n";
//     }
// }

// void pop() {
//     if (top == -1) {
//         cout << "Stack is Empty\n";
//     } else {
//         cout << shaurya[top--] << " popped\n";
//     }
// }

// void isEmpty() {
//     if (top == -1) cout << "Stack is Empty\n";
//     else cout << "Stack is not Empty\n";
// }

// void isFull() {
//     if (top == MAX - 1) cout << "Stack is Full\n";
//     else cout << "Stack is not Full\n";
// }

// void display() {
//     if (top == -1) {
//         cout << "Stack is Empty\n";
//     } else {
//         cout << "Stack elements: ";
//         for (int i = top; i >= 0; i--) {
//             cout << shaurya[i] << " ";
//         }
//         cout << "\n";
//     }
// }

// void peek() {
//     if (top == -1) {
//         cout << "Stack is Empty\n";
//     } else {
//         cout << "Top element: " << shaurya[top] << "\n";
//     }
// }

// int main() {
//     int choice, value;
//     while (true) {
//         cout << "\n--- Stack Menu ---\n";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. isEmpty\n";
//         cout << "4. isFull\n";
//         cout << "5. Display\n";
//         cout << "6. Peek\n";
//         cout << "7. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 push(value);
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 isEmpty();
//                 break;
//             case 4:
//                 isFull();
//                 break;
//             case 5:
//                 display();
//                 break;
//             case 6:
//                 peek();
//                 break;
//             case 7:
//                 return 0;
//             default:
//                 cout << "Invalid\n";
//         }
//     }
// }


//--------------------------------------------------------------------------
//Q2
// #include <iostream>
// #include <cstring>
// using namespace std;

// #define MAX 100

// char stackArr[MAX];
// int top = -1;

// void push(char c) {
//     if (top < MAX - 1) stackArr[++top] = c;
// }

// char pop() {
//     if (top >= 0) return stackArr[top--];
//     return '\0';
// }

// void reverse(char str[]) {
//     int n = strlen(str);
//     for (int i = 0; i < n; i++) push(str[i]);
//     for (int i = 0; i < n; i++) str[i] = pop();
// }

// int main() {
//     char str[] = "DataStructure";
//     reverse(str);
//     cout << str;
//     return 0;
// }

//------------------------------------------------------------------------------
//Q3
// #include <iostream>
// using namespace std;

// #define MAX 100
// char stArr[MAX];
// int top = -1;

// void push(char x) {
//     if (top < MAX - 1) {
//         stArr[++top] = x;
//     }
// }

// char pop() {
//     if (top >= 0) {
//         return stArr[top--];
//     }
//     return '\0';
// }

// bool checkBalance(string expr) {
//     for (int i = 0; i < expr.length(); i++) {
//         char ch = expr[i];

//         if (ch == '(' || ch == '{' || ch == '[') {
//             push(ch);
//         } 
//         else if (ch == ')' || ch == '}' || ch == ']') {
//             if (top == -1) return false;

//             char temp = pop();
//             if ((ch == ')' && temp != '(') ||
//                 (ch == '}' && temp != '{') ||
//                 (ch == ']' && temp != '[')) {
//                 return false;
//             }
//         }
//     }
//     return (top == -1);
// }

// int main() {
//     string expr;
//     cout << "Enter expression: ";
//     cin >> expr;

//     if (checkBalance(expr)) {
//         cout << "Balanced\n";
//     } else {
//         cout << "Not Balanced\n";
//     }
//     return 0;
// }
