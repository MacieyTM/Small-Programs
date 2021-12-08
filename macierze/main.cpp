#include<iostream>
using namespace std;
void sum(int, int);

int main(){
   int row, col;
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;

   sum(row, col);
   return 0;
}
void sum(int r, int c){
   int m1[r][c], m2[r][c], s[r][c];
   cout << "Enter the elements of 1st matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j < c;j++ ) {
       cin>>m1[i][j];
     }
   }

   cout << "Enter the elements of 2nd matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       cin>>m2[i][j];
     }
   }
   cout<<"Output: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       s[i][j]=m1[i][j]+m2[i][j];
       cout<<s[i][j]<<" ";
     }
   }
}