#include<iostream>
using namespace std;


// int main(){
//     int n= 4;
//     int row=1;
//     while(row<=n){
//         int col = row,count = 1;
//         while(count<=row){
//             cout<<col;
//             col = col + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         row = row + 1;
//     }
// }

// int main(){
//     int n = 15;


//     for(int row = 0; row < n; row++){

//         for(int col = row; col < n; col++){
//             cout << " ";
//         }
//         for(int col = 0; col <= row; col++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n = 4;
//     for(int row = 0; row <=n; row++ ){
//         for(int col = 1; col<= n- row; col++){
//             cout << " ";
//         }

//         for(int col = 1; col <= 2*row - 1; col++){
//             cout << "*";
//         }
//         cout<< endl;
//     }

// }

//    *
//   ***
//  *****
// *******

// ##################################################################

// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// 1
// 22
// 333
// 4444

//#####################################################################

// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i-j+1;
//         }
//         cout << endl;
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////

// int main(){
//     int n = 4;
//     for(int row = 0; row <=n; row++ ){
//         for(int col = 1; col<= n- row; col++){
//             cout << " ";
//         }

//         for(int col = 1; col <= row; col++){
//             cout << row + col - 1;
//         }
        
//         for(int col = 1; col <= row - 1; col++){
//             cout << row + (row - 1) - col;
//         }

//         cout<< endl;
//     }

// }

//    1
//   232
//  34543
// 4567654

////////////////////////////////////////////////////////////////////////////////////////////

// int main(){
//     int n = 8;

//     for(int i = 0; i<n; i++){
//         for(int j =0; j<n; j++){
//             if(i==0 || j==0 || j == n-i-1){
//                 cout << "*";
//             }
//             else{
//                 cout <<" ";
//             }
//         }
//         cout<< endl;
//     }

// }

// ********
// *     *
// *    *
// *   *
// *  *
// * *
// **
// *


//#########################################################################################

// int main(){
//     int n = 6;
//     for(int i = 0; i<n; i++){
//         int k =0;

//         for(int j = 0; j<(2*n)-1; j++){
//             if(j < n - i-1){
//                 cout <<" ";
//             }
//             else if(k < 2 *i + 1){
//                 cout << "*";
//                 k++;
//             }
//             else{
//                 cout <<" ";
//             }
//         }


//         cout<<endl;
//     }
// }

// //      *     
// //     ***
// //    *****   
// //   *******
// //  *********
// // ***********

//###############################################################################################

// int main(){
//     int n = 6;
//     for(int i = 0; i<n; i++){
//         int k =0;

//         for(int j = 0; j<(2*n)-1; j++){
//             if(j < n - i-1){
//                 cout <<" ";
//             }
//             else if(k < 2 *i + 1){
//                 if(k == 0 || k == 2*i || i == n-1){

//                     cout << "*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                 k++;
//             }
//             else{
//                 cout <<" ";
//             }
//         }
//         cout<< endl;
//     }
// }

//      *     
//     * *
//    *   *   
//   *     *
//  *       * 
// ***********

////////////////////////////////////////////////////////////////////////////////////

// Printing pyrimid

// int main(){
//     int n= 6;

//     for(int row = 0; row < n; row++){
//         // space
//         for(int col = 0; col < n - row - 1; col++){
//             cout << " ";
//         }
//         //stars
//         for(int col = 0; col < row+1; col++){
//             cout <<"* ";
//         }

//         cout << endl;
//     }
// }

//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

//#########################################################################################

// int main(){
    // int n = 6;

    // for(int row = 0; row<n; row++ ){
    //     // spaces
    //     for (int col = 0; col < row; col++){
    //         cout << " ";
    //     }
    //     // stars
    //     for(int col = 0; col < n-row; col++){
    //         cout << "* ";
    //     }
    //     cout<<endl;
        
    // }
// }

// * * * * * * 
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// ###################################################################################

// DIAMOND PATTERN

// int main(){

//     int num ;
//     cin>> num;

//     int n = num/2;

//     for(int row = 0; row < n; row++){
//                 // space
//                 for(int col = 0; col < n - row - 1; col++){
//                     cout << " ";
//                 }
//                 //stars
//                 for(int col = 0; col < row+1; col++){
//                     cout <<"* ";
//                 }
        
//                 cout << endl;
//             }

//     for(int row = 0; row<n; row++ ){
//         // spaces
//         for (int col = 0; col < row; col++){
//             cout << " ";
//         }
//         // stars
//         for(int col = 0; col < n-row; col++){
//             cout << "* ";
//         }
//         cout<<endl;
        
//     }

// }

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
// * * * * * *
//  * * * * * 
//   * * * *
//    * * *
//     * *
//      *

//###########################################################################################


// int main(){
//     int n=7;
//     // cin>> n;

//     for(int row = 0; row < n; row++){
//         // spaces
//         for(int col = 0; col< n - row -1; col++){
//             cout <<" ";
//         }
//         // stars
//         for(int col = 0; col < row+1; col++){
//             if(col == 0 || col == row + 1 -1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<< endl;
//     }

// }

//       * 
//      * *
//     *   *
//    *     *
//   *       *
//  *         *
// *           * 

//###########################################################################################

// int main(){
//     int n = 8;

//     for(int row = 0; row < n; row++){

//         // spaces
//         for(int col = 0; col < row; col++){
//             cout << " ";
//         }

//         // stars
//         int totalCol = n - row; 
//         for(int col = 0; col < totalCol; col++){
//            if(col == 0 || col == totalCol - 1){
//             cout <<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<< endl;
//     }
// }

// *             * 
//  *           * 
//   *         * 
//    *       * 
//     *     * 
//      *   * 
//       * *
//        *

//####################################################################

// int main(){
//     int n=7;

//     for(int row = 0; row<n; row++){
//         // inverted pyramid
//         for(int col= 0; col< n- row; col++){
//             cout << "* ";
//         }
//         for(int col= 0; col< 2*row +1; col++){
//             cout << "  ";
//         }
//         for(int col= 0; col< n-row; col++){
//             cout << " *";
//         }
        
//         cout<<endl;
//     }

//     for(int row = 0; row<n; row++){
//     {
//          // for down pyramid
//          for(int col = 0; col< row+1; col = col+1){
//             cout<<"* ";
//         }
//         for(int col = 0; col <2*(n-row)-1; col++){
//             cout<<"  ";
//         }
//         for(int col = 0; col< row+1; col = col+1){
//             cout<<" *";
//         }

//         cout<< endl;
//     }
    
// }
// }

// * * * * * * *    * * * * * * *
// * * * * * *        * * * * * *
// * * * * *            * * * * *
// * * * *                * * * *
// * * *                    * * *
// * *                        * *
// *                            *
// *                            *
// * *                        * *
// * * *                    * * *
// * * * *                * * * *
// * * * * *            * * * * *
// * * * * * *        * * * * * *
// * * * * * * *    * * * * * * *

// ##########################################################

// int main(){
//     int n=8;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<2*row+1;col++){
//             if(col%2==1){
//                 cout<< "*";
//             }
//             else{
//                 cout<< row+1;
//             }
//         }
//         cout<<endl;
//     }
// }

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 6*6*6*6*6*6
// 7*7*7*7*7*7*7
// 8*8*8*8*8*8*8*8

//#####################################################################

//METHOD 2

// int main(){
//     int n = 8;
//     for(int row = 0; row<n; row++){
        // int totalCol = row+1;
        // for(int col = 0; col< totalCol; col++){
        //     if(col == totalCol-1){
        //         cout<< row+1;
        //     }
        //     else{
        //         cout<<row+1 <<"*";
        //     }
//         }
//         cout<<endl;
//     }
// }

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 6*6*6*6*6*6
// 7*7*7*7*7*7*7
// 8*8*8*8*8*8*8*8

// ##########################################################################

// int main(){
//     int n =8;
//     for(int row = 0; row< n; row++){
//         for(int col = 0; col< n-row; col++){
//             if(row==0 || row == n-1){
//                 cout <<"*";
//             }
//             else{
//               if(col == 0 || col == n- row-1){
//                 cout<<"*";
//               }  
//               else{
//                 cout<<" ";
//               }
//             }
//         }
//         cout<<endl;
//     }
// }

// ********
// *     *
// *    *
// *   *
// *  *
// * *
// **
// *

// #####################################################################

// int main(){
//     int n =8;
//     for(int row =0; row<n; row++){
//         for(int col = 0; col < 2*row+1; col++){
//             if(col==0){
//                 cout<<"1";
//             }
//             else if(col == 2*row-1){
//                 cout<<row;  
//             }
//             else{
//                 if(row == row-col){
//                     cout<< row;
//                 }
//                 else{
                    
//                     cout<<" ";
//                 }
//             }
//         }

//         cout<<endl;
//     }
// }

/////////////////////////////////////////////////////////////////////////////////////////////////

// int main(){
//     int n =7;
//     for(int row =0; row<n; row++){
//         for(int col = 0; col<= row; col++){
//             if(row==0 || row==n-1){
//                 cout<< col+1;
//             }
//             else{
//                 if(col == 0 || col== row-1 +1 ){
//                     cout<< col+1 <<" ";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// 1
// 1 2
// 1  3
// 1   4
// 1    5
// 1     6
// 1234567

// #############################################################################################

// int main(){
//     int n=8;

//     for(int row = 0; row<n; row++){
//         char ch;
//         for(int col = 0; col < row; col++){
//             int num = col+1;
//             ch = num + 'A' -1;
//             cout<< ch;
//         }

//         // now aage ka pattern 
//         for(char alphab = ch; alphab >'A'; ){
//             alphab--;
//             cout<< alphab ;
//         }

//         cout<< endl;
//     }
// }

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA
// ABCDEFGFEDCBA

//#################################################################################################

// int main(){
//     int n =7;
//      for(int row=0; row<n; row++){
//         for(int col=0; col< n-row; col++){
//             if(row ==0 || row == n-1){

//                 cout<< col+1;
//             }
//             else{
//                 if(col == 0 || col == n-row-1){
//                     cout<< col+1;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//      }
// }

// 1234567
// 1    6
// 1   5
// 1  4
// 1 3
// 12
// 1

//###############################################################################################

// numeric palindrome

// int main(){
//     int n=7;
//     for(int row =0; row<n; row++){
//         for(int col = 0; col<n-row; col++){
//             cout<< " ";
//         }
//         for(int col =0; col< row; col++){
//             cout<< col+1;
//         }
//         for(int col =row; col > 1; col--){
//             cout<< col-1;
//         }
//         cout<<endl;
//     }
// }

//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321

//###########################################################################

// int main(){
//     int n = 5;

//     for(int row = 0; row<n; row++){
//         // pattern 1
//         for(int col = 0; col <2*n-row-2; col++){
//             cout<<"*";
//         }
//         // pattern 2
        
//         int totalCol =2*row+1;
//         for(int col = 0; col < row+1; col++){
//             if(col == totalCol-1){
//                 cout<<row+1;
//             }else{

//                 cout<< row+1 <<"*";
//             }
//         }
//         for(int col = 0; col <2*n-row-2; col++){
//             cout<<"*";
//         }

//         cout<< endl;
//     }

// }

// * * * * * * * * 1 * * * * * * * *
// * * * * * * * 2*2*2 * * * * * * *
// * * * * * * 3*3*3*3*3 * * * * * *
// * * * * * 4*4*4*4*4*4*4 * * * * *
// * * * * 5*5*5*5*5*5*5*5*5 * * * *


//###########################################################################
// Solid Half Diamond

// int main(){
//     int n = 4;
//     for(int row = 0; row< n ; row++){
//         for(int col = 0; col < row+1; col++ ){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     for(int row1 = n-1; row1>=1; row1--){
//         for(int col = 0; col < row1; col++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// *
// **
// ***
// ****
// ***
// **
// *


// int main(){
//     int n = 5;
//     for(int row = 0; row<n; row++){
//         for(int col = row; col<n; col++ ){
//             cout<<col+1<<" ";
            
//         }
//         cout<< endl;
//     }
// }

// 1 2 3 4 5 
// 2 3 4 5
// 3 4 5
// 4 5
// 5

//#########################################################################
// int main(){
//         int n = 5;
//         for(int row = 0; row<n; row++){
//             for(int col = row+1; col<=n; col++ ){
//                 if(col == row+1 || col == n || row ==0){
//                     cout<<col;
//                 }
//                 else{
//                     cout<< " ";
//                 }
                
//             }
//             cout<< endl;
//         }
// }
    
// 12345
// 2  5
// 3 5
// 45
// 5

//###########################################################################

// int main(){
//         int n = 5;
//         for(int row = 0; row<n; row++){
//             for(int col = row+1; col<=n; col++ ){
//                 if(col == row+1 || col == n || row ==0){
//                     cout<<col;
//                 }
//                 else{
//                     cout<< " ";
//                 }
                
//             }
//             cout<< endl;
//         }
// }
    
// 12345
// 2  5
// 3 5
// 45
// 5

//###########################################################################

// int main(){
//     int n = 4;
//     int k = 1;
//     for(int row = 0; row< n ; row++){
//         for(int col = 0; col < row+1; col++ ){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<< endl;
//     }
//     int newRowfirst= k-n; // 11-4=7
//     for(int row1 = 0; row1<n; row1++){
//         int newk= newRowfirst; // 7
//         for(int col = 0; col <=n-row1-1; col++ ){
//             cout<<newk<<" "; // 7 8 9 10
//             newk++;
//         }
//         newRowfirst= newRowfirst -(n-row1-1); // 7-(4-0-1) = 4
//         cout<<endl;
//     }
// }

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 7 8 9 10
// 4 5 6 
// 2 3
// 1

//#############################################################################

// int main(){
//     int n = 4;
//     int k = 1;
//     for(int row = 0; row< n ; row++){
//         for(int col = 0; col < row+1; col++ ){
//             cout<<k;
//             k++;
//             if(col<row){
//                 cout<<"*";
//             }
//         }
//         cout<< endl;
//     }
//     int newRowfirst= k-n; // 11-4=7
//     for(int row1 = 0; row1<n; row1++){
//         int newk= newRowfirst; // 7
//         for(int col = 0; col <=n-row1-1; col++ ){
//             cout<<newk; // 7 8 9 10
//             newk++;
//             if(col< n-row1-1){
//                 cout<<"*";
//             }
//         }
//         newRowfirst= newRowfirst -(n-row1-1); // 7-(4-0-1) = 4
//         cout<<endl;
//     }
// }

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

//#############################################################################

// int main(){
//     int n=9;

//     for(int i =0; i<n; i++){
//         int cond = i<=n/2 ? 2*i : 2*(n-i-1);
//         for(int j=0; j<= cond; j++){
//             if(j <= cond/2){
//                 cout<<j+1;
//             }
//             else{
//                 cout<< cond-j+1;
//             }
            
//         }
//         cout<<endl;
//     }
// }

// 1
// 121
// 12321
// 1234321
// 123454321
// 1234321
// 12321
// 121
// 1

//#############################################################################

//
// METHOD_2
// int main(){
//     int n= 4;
//     for(int row = 1; row <=n ; row++){
//         int cond;
//         // for(int col = 0; col < 2*row-1; col++){
//         //   cout<<row+1;
//         // }
//         for(int col = 1; col<=row; col++){
//             cout<<col;
//         }
//         for(int col = row-1; col>=1; col--){
//             cout<<col;
//         }
//         cout<< endl;
//     }

//     // Lower part
//     for(int row = n - 1; row >= 1; row--) {
//         // Increasing numbers
//         for(int i = 1; i <= row; i++) {
//             cout << i;
//         }
//         // Decreasing numbers
//         for(int j = row - 1; j >= 1; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// 1
// 121
// 12321
// 1234321
// 12321
// 121
// 1

//#############################################################################

// int main(){
//     int n = 5;
//     for(int row = 1; row<=n; row++){
//         int c= 1;
//         for(int col =1; col<=row; col++){
//             cout<<c<<" ";
//             c= c*(row-col)/col;
//         }
//         cout<< endl;
//     }
// }

// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

//#############################################################################

// int main(){
//     int n = 5;
//     for(int row = 0; row<n; row++){
//         int c= 1;
//         for(int col =0; col<=row; col++){
//             cout<<c<<" ";
//             c= c*(row-col)/(col+1);
//         }
//         cout<< endl;
//     }
// }

// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1