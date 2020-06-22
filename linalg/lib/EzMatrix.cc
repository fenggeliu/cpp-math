//
// Created by fenggeliu on 6/21/20.
//

#include <iostream>
#include "EzMatrix.h"
#include "linalg/lib/lib.h"
using namespace std;

EzMatrix::EzMatrix(int i, int j) {
  this->i = i;
  this->j = j;
  matrix = (int**) ::matrix(i, j, sizeof(int));

}

EzMatrix::~EzMatrix() {
  free_matrix(matrix);
}

void EzMatrix::fill() {
  // fill in matrix
  int count = 0;
  for (int m = 0; m < j; m++) {
    for (int k = 0; k < i; k++) matrix[k][m] = count++;

  }
}

ostream & operator<<(std::ostream& out, const EzMatrix& t) {

  // Then write out the matrix
  out << "Content of matrix at " << &t << " :" << endl;
  for (int m = 0; m < t.j; m++) {
    for (int k = 0; k < t.i; k++) {
      out << t.matrix[k][m] << " ";
    }
    out << endl;
  }

  return out;
}
EzMatrix* operator * (const EzMatrix& A, const EzMatrix& B) {
  if (A.j != B.i) {
    cout << "Cannot operate!" << endl;
    return nullptr;
  }
  int n = A.i;
  auto* C = new EzMatrix(n, n);
  for (int _j = 0; _j < n; _j++) {
    for (int _i = 0; _i < n; _i++) {
      for (int k = 0; k < n; k++) {
        C->matrix[_i][_j] += A.matrix[_i][k] * B.matrix[k][_j];
      }
    }
  }
  return C;
}

