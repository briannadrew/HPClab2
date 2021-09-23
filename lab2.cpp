// Name: lab2.cpp
// Author: Brianna Drew
// ID: #0622446
// Date Created: 2021-09-22
// Last Modified: 2021-09-23

// libraries
#include <iostream>
#include <cmath>
using namespace std;

// function to calculate the sum of the diagonal of a 10x10 2d array
float diagonal(float arr[10][10])
{
  float sum_d = 0.0;
  // traverse array
  for(int i=0; i<10; i++)
  {
    for(int j=0; j<10; j++)
    {
      if(i==j)
        sum_d += arr[i][j]; // add to sum if on the diagonal
    }
  }
  float diag = sum_d;
  return diag; // returns sum of diagonal
}

// void function to square values of a 10x10 2d array
void squared(float (&arr)[10][10])
{
  float square = 0.0, sum = 0.0;
  // traverse array
  for(int i=0; i<10; i++)
  {
    for(int j=0; j<10; j++)
    {
      // calculate, replace, and output current value with its square then add to sum
      square = pow(arr[i][j], 2.0);
      arr[i][j] = square;
      cout << arr[i][j] << ", ";
      sum += arr[i][j];
    }
    cout << endl;
  }
  // output sum and diagonal sum of squared array
  cout << endl << "The Sum is: " << sum << endl;
  float diag = diagonal(arr);
  cout << "The Diagonal Sum is: " << diag << endl;
}

int main()
{
  float sum = 0.0, twod_array[10][10] = {{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9},
  {1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9},
  {2.0,2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9},
  {3.0,3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9},
  {4.0,4.1,4.2,4.3,4.4,4.5,4.6,4.7,4.8,4.9},
  {5.0,5.1,5.2,5.3,5.4,5.5,5.6,5.7,5.8,5.9},
  {6.0,6.1,6.2,6.3,6.4,6.5,6.6,6.7,6.8,6.9},
  {7.0,7.1,7.2,7.3,7.4,7.5,7.6,7.7,7.8,7.9},
  {8.0,8.1,8.2,8.3,8.4,8.5,8.6,8.7,8.8,8.9},
  {9.0,9.1,9.2,9.3,9.4,9.5,9.6,9.7,9.8,9.9}}; // define 2d array

  cout << "Array:" << endl;
  // traverse array
  for(int i=0; i<10; i++)
  {
    for(int j=0; j<10; j++)
    {
      // output current value in array and add to sum
      cout << twod_array[i][j] << ", ";
      sum += twod_array[i][j];
    }
    cout << endl;
  }

  // output sum and diagonal sum of array
  cout << endl << "The Sum is: " << sum << endl;
  float diag = diagonal(twod_array);
  cout << "The Diagonal Sum is: " << diag << endl << endl;
  cout << endl << "Squared Array:" << endl;
  squared(twod_array); // call function to calculate squared array

  return 0;
}
