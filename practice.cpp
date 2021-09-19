// #include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }




// For sorting
// #include <iostream>
// using namespace std;

// int main()
// {
//     int as, i, j, swap;
//     cout << "Enter Array Size: ";
//     cin >> as;
//     int ar[as];
//     cout << "Enter Array Elements: ";
//     for (i = 0; i < as; i++)
//     {
//         cin >> ar[i];
//     }
//     for (i = 0; i < as; i++)
//     {
//         for (j = 0; j < as - i - 1; j++)
//         {
//             if (ar[i] > ar[i + 1])
//             {
//                 swap = ar[i];
//                 ar[i] = ar[i + 1];
//                 ar[i + 1] = swap;
//             }
//         }
//     }
//     cout << "Sorted Array is: ";
//     for (i = 0; i < as; i++)
//     {
//         cout << ar[i] << endl;
//     }

//     return 0;
// }

// For Merging
// #include <iostream>
// using namespace std;

// int main()
// {
//     int as1, as2, i, j = 0,swap;
//     cout << "Enter array Size for 1: ";
//     cin >> as1;
//     int ar1[as1];
//     cout << "Enter array Size for 2: ";
//     cin >> as2;
//     int ar2[as2], merge[as1 + as2];
//     cout << "Enter array Elements for 1: ";
//     for (i = 0; i < as1; i++)
//     {
//         cin >> ar1[i];
//         merge[i] = ar1[i];
//     }
//     j = i;
//     cout << "Enter array Elements for 2: ";
//     for (i = 0; i < as2; i++)
//     {
//         cin >> ar2[i];
//         merge[j] = ar2[i];
//         j++;
//     }
//     cout << "Merged Array is: ";
//     for (i = 0; i < as1 + as2; i++)
//     {
//         cout << merge[i] << endl;
//     }
//     for (i = 0; i < as1+as2; i++)
//     {
//         for (j = 0; j < as1+as2-i-1; j++)
//         {
//             if (merge[j] > merge[j+1])
//             {
//                 swap = merge[j];
//                 merge[j] = merge[j+1];
//                 merge[j+1] = swap;
//             }

//         }

//     }

//     cout<<"Merged Sorted array is :";
//     for (i = 0; i < as1+as2; i++)
//     {
//         cout<<merge[i]<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sort(int ar[], int as);
// int main()
// {
//     int as, i;
//     cout << "Enter Array Size: ";
//     cin >> as;
//     int ar[as];
//     cout << "Enter array elements: ";
//     for (i = 0; i < as; i++)
//     {
//         cin >> ar[i];
//     }
//     sort(ar, as);
//     cout << "Sorted array is: ";
//     for (i = 0; i < as; i++)
//     {
//         cout << ar[i] << endl;
//     }

//     return 0;
// }
// int sort(int ar[], int as)
// {
//     int swap, i, j;
//     for (i = 0; i < as; i++)
//     {
//         for (j = 0; j < as - i - 1; j++)
//         {
//             if (ar[j] > ar[j + 1])
//             {
//                 swap = ar[j];
//                 ar[j] = ar[j + 1];
//                 ar[j + 1] = swap;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int max(int a, int b);
// int main()
// {
//     int n1, n2;
//     cout << "Enter Two Numbers :";
//     cin >> n1 >> n2;

//     cout << "Maximum number is " << max(n1, n2);
//     return 0;
// }
// int max(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// C++ program to find factorial of a given number

// #include <iostream>
// using namespace std;
// int fact(int f);
// int main (){
//     int num,z;
//     cout<<"Enter A Number: ";
//     cin>>num;
//     z = fact(num);
//     cout<<"Factorial of "<<num<<" is "<<z;
//     return 0;
// }
// int fact(int f){
//     int factorial = 1;
//     for (int i = f; i > 0 ; i--)
//     {
//         factorial = factorial * i;
//     }
//     return factorial;

// }

// #include <iostream>
// using namespace std;
// int fibo(int len);
// int main (){
//     int l,i;
//     cout<<"Enter The Number: ";
//     cin>>l;
//     i = fibo(l);
//     cout<<"Fibonassi Number is: "<<i<<endl;
//     return 0;
// }
// int fibo(int len){
//     if (len <= 1)
//     {
//         return len;
//     }
//     else{
//         return fibo(len-1) + fibo(len-2);
//     }

// }

// #include <iostream>
// using namespace std;

// int main (){
//     int row,col;
//     cin>>row>>col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int row,col;
//     cin>>row>>col;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j<=n-i)
//             {
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//Program to check if a word is palindrome or not
// #include <iostream>
// #include<string.h>
// using namespace std;

// int main (){
//     char word[50],revw[50];
//     cout<<"Enter A Word: ";
//     cin>>word;
//     strcpy(revw,word);
//     strrev(revw);
//     if (strcmp(revw,word) == 0)
//     {
//         cout<<"The Word Is Palindrome";
//     }
//     else{
//         cout<<"Word is not Palindrome";
//     }
//     return 0;
// }

// To Find Fibonassi Sequence
// #include <iostream>
// using namespace std;
// void fibo(int n);
// int main()
// {
//     int n;
//     cout << "Enter A Number: ";
//     cin >> n;
//     fibo(n);

//     return 0;
// }
// void fibo(int n)
// {
//     int n1 = 0;
//     int n2 = 1;
//     int newterm;
//     for (int i = 0; i < n; i++)
//     {
//         cout << n1 << endl;
//         newterm = n1 + n2;
//         n1 = n2;
//         n2 = newterm;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     // cout<<"Enter Num 1 & Num 2: "<<endl;
//     // cin>>num1>>num2;
//     // cout<<"Max Is: "<<max(num1,num2);
//     cout<<"*"<<endl;
//     cout<<"* *"<<endl;
//     cout<<"* * *"<<endl;

// //     *
// //    * *
// //   * * *
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World" <<endl;
    for (int i = 0; i < 50; i++)
    {
        cout<<"Subhash A Patel"<<endl;
    }
    
    return 0;
}