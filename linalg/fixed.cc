//
// Created by fenggeliu on 6/13/20.
//
#include <iostream>

using namespace std;

void SubFunction(int row, int col, int vec[], int matr[][5]) {// line d

  int k, m;

  // write out the vector
  cout << " Content of vector vec in SubFunction:" << endl;
  for (k = 0; k < col; k++) {
    cout << vec[k] << endl;
  }

  // then write the matrix
  cout << "Content of matrix matr in SubFunction:" << endl;
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) {
      cout << matr[m][k] << endl;
    }
  }

}

int main() {

  int k, m, row = 3, col = 5;
  int vec[5]; // line a
  int matr[3][5]; // line b

// fill in vector vec
  for (k = 0; k < col; k++) vec[k] = k;

  // fill in matr
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) matr[m][k] = m + 10 * k;
  }

  // write out the vector
  cout << "Content of vector vec:" << endl;
  for (k = 0; k < col; k++) {
    cout << vec[k] << endl;
  }

  // Then write out the matrix
  cout << "Content of matrix matr:" << endl;
  for (m = 0; m < row; m++) {
    for (k = 0; k < col; k++) {
      cout << matr[m][k] << endl;
    }
  }

  SubFunction(row, col, vec, matr); // line c
  return 0;
} // end main function

