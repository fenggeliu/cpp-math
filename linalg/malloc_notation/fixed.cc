//
// Created by fenggeliu on 6/13/20.
//
#include <iostream>

using namespace std;

void SubFunction(int row, int col, int vec[], int matrix[][5]) {// line d

  int k, m;

  // write out the vector
  cout << " Content of vector vec in SubFunction:" << endl;
  for (k = 0; k < col; k++) {
    cout << vec[k];
  }
  cout << endl;

  // then write the matrix
  cout << "Content of matrix in SubFunction:" << endl;
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) {
      cout << matrix[m][k];
    }
    cout << endl;
  }

}

int main() {

  int k, m, row = 3, col = 5;
  int vec[5]; // line a
  int matrix[3][5]; // line b

// fill in vector vec
  for (k = 0; k < col; k++) vec[k] = k;

  // fill in matrix
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) matrix[m][k] = m + 10 * k;
  }

  // write out the vector
  cout << "Content of vector vec:" << endl;
  for (k = 0; k < col; k++) {
    cout << vec[k];
  }
  cout << endl;

  // Then write out the matrix
  cout << "Content of matrix matr:" << endl;
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) {
      cout << matrix[m][k];
    }
    cout << endl;
  }

  SubFunction(row, col, vec, matrix); // line c
  return 0;
} // end main function

