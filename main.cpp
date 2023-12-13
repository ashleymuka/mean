//Author: Ashley Muka
//Assignment Title: Program 5
//Assignment Description: Calculate means of five integers
//Due Date: 2/1/2023
//Date Created: 2/1/2023
//Date Last Modified: 2/1/2023

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

const double SIZE = 5;

   int num1;
   int num2;
   int num3;
   int num4;
   int num5;

   double a_Mean;
   double g_Mean;
   double h_Mean;
   double stdDev;
   double sumOfSquares;
   double prod;



   cout<<"Enter five numbers: " << endl;

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   cin >> num5;


   cout << num1 << endl;
   cout << num2 << endl;
   cout << num3 << endl;
   cout << num4 << endl;
   cout << num5 << endl;
   cout << setprecision(2) << fixed << endl;

   if(num1 < num2){
      swap(num1, num2);
   }
   if(num1 < num3){
      swap(num1, num3);
   }
   if(num1 < num4){
      swap(num1, num4);
   }
   if(num1 < num5){
      swap(num1, num5);
   }
   if(num2 < num3){
      swap(num2, num3);
   }
   if(num2 < num4){
      swap(num2, num4);
   }
   if(num2 < num5){
      swap(num2, num5);
    }
   if(num3 < num4){
      swap(num3, num4);
   }
   if(num3 < num5){
      swap(num3, num5);
    }
   if(num4 < num5){
      swap(num4, num5);
    }

   a_Mean = (num1 + num2 + num3 + num4 + num5)/SIZE;

   prod = static_cast<double>(num1) * num2 * num3 * num4 * num5;
   g_Mean = pow(prod,0.2);

   h_Mean = SIZE/(1.0/num1 + 1.0/num2 + 1.0/num3 + 1.0/num4 + 1.0/num5);

   sumOfSquares = 0;

   sumOfSquares = sumOfSquares + (num1 - a_Mean) * (num1 - a_Mean);
   sumOfSquares = sumOfSquares + (num2 - a_Mean) * (num2 - a_Mean);
   sumOfSquares = sumOfSquares + (num3 - a_Mean) * (num3 - a_Mean);
   sumOfSquares = sumOfSquares + (num4 - a_Mean) * (num4 - a_Mean);
   sumOfSquares = sumOfSquares + (num5 - a_Mean) * (num5 - a_Mean);

   stdDev = sqrt(sumOfSquares/5.0);



   cout<<"\n\nResult:\n\n";
   cout<<"Data:\n";
   cout<< num1 <<endl;
   cout<< num2 <<endl;
   cout<< num3 <<endl;
   cout<< num4 <<endl;
   cout<< num5 <<endl << endl;
   cout<<"Arithmetic Mean    = " << a_Mean << endl;
   cout<<"Geometric  Mean    = " << g_Mean << endl;
   cout<<"Harmonic   Mean    = " << h_Mean << endl;
   cout<<"Standard Deviation = " << stdDev << endl;
    
    return 0;
}

