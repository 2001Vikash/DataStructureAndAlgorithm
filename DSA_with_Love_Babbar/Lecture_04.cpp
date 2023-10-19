#include<iostream>
using namespace std;

int main(){

    /*  
       Ques -> print this pattern
                 1 2 3 4 5
                 1 2 3 4 5
                 1 2 3 4 5
                 1 2 3 4 5      */

    
    int n;
    cout << "Please Enter the value of n"<<endl;
    cin>>n;

    // int i = 1;
    // int j;
    //  while(i <= n){
    //     j = 1;
    //     while(j <= n){
    //         cout << n-j+1 << " ";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    //  }

    //   int i = 1;
    //   int j;
    //   int a = 1;
    //   while(i <= n){
    //     j = 1;
    //     while(j <= n){
    //         cout << a << " ";
    //         a++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    //   }


    // Triangle Pattern * printing

    // int i = 1;
    // int j;
    // while(i <= n){
    //     j = 1;
    //     while(j <= i){
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Triangle with number

    // int i = 1;
    // int j;
    // while(i <= n){
    //     j = 1;
    //     while(j <= i){
    //         cout << i << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    // int row = 1;
    // while (row <= n)
    // {
    //     // int col = 1;
    //     // int val = row;
    //     // while(col <= row){
    //     //      cout << val << " ";
    //     //      val++;
    //     //      col++;
    //     // }
    //     // cout << endl;
    //     // row++;

    //     // Now we are going to try it without using val variable

    //     int col = 0;

    //     while(col < row){
    //         cout << row + col << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    

    // int row = 1;
    // while(row <= n){
    //     int col = row;
    //     while(col >= 1){
    //         cout << col << " ";// or i - j + 1.
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // char pr = 'A';
    // while(row <= n){
    //     int col = 1;
    //      while(col <= n){
    //         cout << pr << " ";// or 'A' + row - 1;
    //         col = col + 1;
    //      }
    //      cout << endl;
    //      row++;
    //      pr++;
    // }

    //  int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     char pr = 'A';
    //      while(col <= n){
    //         cout << pr << " ";// Or 'A' + j - 1;
    //         col = col + 1;
    //          pr++;
    //      }
    //      cout << endl;
    //      row++;
    // }

    //    int row = 1;
    //    char pr = 'A';
    //    while(row <= n){
    //     int col = 1;
    //     while(col <= n){
    //         cout << pr << " ";
    //         col++;
    //         pr++;
    //     }
    //     cout << endl;
    //     row++;
    //    }

    //   int row = 0;
    //    while(row < n){
    //     int col = 1;
    //     char pr = 'A' + row;
    //     while(col <= n){
    //         cout << pr << " "; // i + j - 1
    //         col++;
    //         pr++;
    //     }
    //     cout << endl;
    //     row++;
    //    }


    //   int row = 1;
    //   char pr = 'A';
    //   while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout << pr << " "; // OR -> 'A' + row - 1;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    //     pr++;
    //   }


    //    int row = 1;
    //    char pr = 'A';
    //    while(row <= n){
    //     int col = 1;
    //      while(col <= row){
    //         cout << pr << " ";
    //         col++;
    //         pr++;
    //      }
    //      cout << endl;
    //      row++;
    //    }


    // int row = 0;
    // while(row < n){
    //     char pr = 'A' + row;
    //     int col = 0;
    //     while(col <= row){
    //        cout << pr << " ";// OR 'A' + row + col - 2
    //        col++;
    //        pr++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
     
    //  int row = n - 1;
    //  while(row >= 0){
    //     int col = n - 1;
    //     char pr = 'A' + row;
    //     while(col >= row){
    //        cout << pr << " ";
    //         col--;
    //         pr++;
    //     }
    //     cout << endl;
    //     row--;
    //  }

    // OR

    // int row = 1;
    // while(row <= n){
    //     char pr = 'A' + n - row;
    //     int col = 1;
    //     while(col <= row){
    //         cout << pr << " ";
    //         col++;
    //         pr++;
    //     }
    //     cout << endl;
    //     row++;
    // }


    // trianle starting with spaces

    // int row = 1;
    // while(row <= n){
    //     int space = 1;
    //     while(space <= n - row){
    //        cout << "  ";
    //        space++;
    //     }
    //     int col = 1;
    //     while(col <= row){
    //         cout << "* ";
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

     
     // Print ulta of triangle

    //  int row = 1;
    //  while(row <= n){
    //     int col = n - row + 1;
    //     while(col >= 1){
    //         cout << "* ";
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    //  }

    // int row = 1;
    // while(row <= n){
    //     // spaces
    //     int space = n - row;
    //      while(space < n - 1){
    //         cout << "  ";
    //         space++;
    //      }
    //      int col = n - row + 1;
    //      while(col >= 1){
    //         cout << "* ";
    //         col--;
    //      }
    //      cout << endl;
    //      row++;
    // }


//     int row = 1;
//     while(row <= n){
//         // Print spaces
//         int space = 1;
//         while(space <= n - row){
//             cout << "  ";
//             space++;
//         }
//         // Print first triangle
//         int col = 1;
//         while(col <= row){
//             cout << col << + " ";
//             col++;
//         }
//         // Print second triangle
//         int a = row - 1;
//         while(a >= 1){
//             cout << a << " ";
//             a--;
//         }
//         cout << endl;
//         row++;
//     }



      // Print Dabang Pattern

      int row = 1;
      while(row <= n){
        int c1 = 1;
        while(c1 <= n){
            if(c1 <= n - row + 1){
                cout << c1;
            }else{
                cout << "*";
            }
            
            c1++;
        }

        int c2 = n;
        while(c2){
            if(c2 > n - row + 1){
                cout << "*";
            }else{
                cout << c2;
            }
            c2--;
        }
        cout << endl;
        row++;
      }
    
     return 0;
}