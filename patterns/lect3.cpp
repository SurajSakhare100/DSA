#include <iostream>
using namespace std;
int main(){
    //dsa course
/*********** Patterns using while loop ************/

// Q1. print following pattern :

//     * * * * 
//     * * * *
//     * * * *
//     * * * *

//     int n;
//     cout<<"enter a num : ";
//     cin>>n;
//     int i=1;
//     while(i<n+1){
//     int j=1;
//     while(j<n+1){
//     cout<<"* ";
//     j++;
//     }
//     cout<<endl;
//     i++;
//     }

// Q2. print following pattern: 

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<n+1){
    // int j=1;
    // while(j<n+1){
    // cout<<i<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q3. print following pattern:

// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // cout<<j<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q4. print following pattern:

// 1
// 2 1
// 3 2 1
// 4 3 2 1

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<n+1){
    // int j=i;
    // while(j>0){
    // cout<<j<<" ";
    // j--;
    // }
    // cout<<endl;
    // i++;
    // }

// Q5. print following pattern:

// 1 2 3
// 4 5 6
// 7 8 9

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // int k=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // cout<<k<<" ";
    // j++;
    // k++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q6. print following pattern:

// *
// * *
// * * *
// * * * *

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=i){
    // cout<<"* ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q7A. print following pattern:

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // int k=1;
    // while(i<=n){
    // int j=1;
    // while(j<=i){
    // cout<<k<<" ";
    // j++;
    // k++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q7B. print following pattern:
  
// 1
// 2 3
// 3 4 5
// 4 5 6 7

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int k=i;
    // int j=1;
    // while(j<=i){
    // cout<<k<<" ";
    // j++;
    // k++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q8. print following pattern:

// A A A
// B B B
// C C C

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // char a='A'+i-1;
    // cout<<a<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q9. print following pattern:

// A B C D
// A B C D
// A B C D 
// A B C D

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // char a='A'+j-1;
    // cout<<a<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q10. print following pattern:

//    enter a num : 6
//    A B C D E F
//    G H I J K L
//    M N O P Q R
//    S T U V W X
//    Y Z [ \ ] ^
//    _ ` a b c d

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // int k=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // char a='A'+k-1;
    // cout<<a<<" ";
    // j++;
    // k++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q11. print following pattern:

// A
// B B
// C C C

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=i){
    // char a='A'+i-1;
    // cout<<a<<" ";
    // j++;
   
    // }
    // cout<<endl;
    // i++;
    // }

// Q12. print following pattern:

// A B C
// B C D
// C D E

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n){
    // char a='A'+i+j-2;
    // cout<<a<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q13. print following pattern:
 
// A
// B C
// C D E
// D E F G 

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=i){
    // char a='A'+i+j-2;
    // cout<<a<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q14. print following pattern:

// D
// C D
// B C D
// A B C D

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // char a='A'+ n-i;
    // while(j<=i){
    // cout<<a<<" ";
    // a++;
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q15. print following pattern:

//       * 
//     * * 
//   * * * 
// * * * *

//     int n;
//     cout<<"enter a num : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     int space =n-i;
//     while(space){
//     cout<<"  ";
//     space--;
//     }
//     int j=1;
//     while(j<=i){
//     cout<<"* ";
//     j++;
//     }
//     cout<<endl;
//     i++;
//     }

// Q16. print following pattern:

//       1
//     2 2
//   3 3 3 
// 4 4 4 4

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int space =n-i;
    // while(space){
    // cout<<"  ";
    // space--;
    // }
    // int j=1;
    // while(j<=i){
    // cout<<i<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q17. print following pattern:

// 1 1 1 1
//   2 2 2
//     3 3
//       4

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int space =i-1;
    // while(space){
    // cout<<"  ";
    // space--;
    // }
    // int j=1;
    // while(j<=n-i+1){
    // cout<<i<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q18. print following pattern:

// 1 2 3 4
//   2 3 4
//     3 4 
//       4

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int space =i-1;
    // while(space){
    // cout<<"  ";
    // space--;
    // }
    // int j=1;
    // while(j<=n-i+1){
    // cout<<i+j-1<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q19. print following pattern:

//       1 
//     2 3 
//   4 5 6 
// 7 8 9 10 

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // int k=1;
    // while(i<=n){
    // int space =n-i;
    // while(space){
    // cout<<"  ";
    // space--;
    // }
    // int j=1;
    // while(j<=i){
    // cout<<k++<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q20. print following pattern:

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int space =n-i;
    // while(space){
    // cout<<"  ";
    // space--;
    // }
    // int j=1;
    // while(j<=i){
    // cout<<j<<" ";
    // j++;
    // }
    // j=1;
    // while(j<i){
    // cout<<i-j<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q21. print following pattern:

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int j=1;
    // while(j<=n-i+1){
    // cout<<j<<" ";
    // j++;
    // }
    // int star =1;
    // while(star<i){
    // cout<<"* ";
    // star++;
    // }
    // star =1;
    // while(star<i){
    // cout<<"* ";
    // star++;
    // }
    // j=1;
    // while(j<=n-i+1){
    // cout<<n-i-j+2<<" ";
    // j++;
    // }
    // cout<<endl;
    // i++;
    // }

// Q22. print following pattern:

//               *
//             * * *
//           * * * * * 
//         * * * * * * *
//       * * * * * * * * *
//         * * * * * * *
//           * * * * * 
//             * * *
//               *
        
 
    // int n;
    // cout<<"enter a num : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    // int star =n;
    // while(star>i){
    // cout<<"  ";
    // star--;
    // }
    // star=1;
    // while(star<=i){
    // cout<<"* ";
    // star++;
    // }
    // star=1;
    // while(star<i){
    // cout<<"* ";
    // star++;
    // }
    // cout<<endl;
    // i++;
    // }
    // i=n-1;
    // while(i>=0){
    // int star =n;
    // while(star>i){
    // cout<<"  ";
    // star--;
    // }
    // star=1;
    // while(star<=i){
    // cout<<"* ";
    // star++;
    
    // }
    // star=1;
    // while(star<i){
    // cout<<"* ";
    // star++;
    // }
    // cout<<endl;
    // i--;
    // }
    
    return 0;
}
