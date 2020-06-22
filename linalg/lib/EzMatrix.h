//
// Created by fenggeliu on 6/21/20.
//

#ifndef LINALG_LIB_EZMATRIX_H_
#define LINALG_LIB_EZMATRIX_H_

#include <iostream>
using namespace std;
class EzMatrix {
 public:
  int** matrix;
  int i, j;
  EzMatrix(int i, int j);
  ~EzMatrix();

  void fill();
  friend std::ostream & operator << (std::ostream &out, const EzMatrix &t);
  friend EzMatrix* operator * (const EzMatrix& A, const EzMatrix& B);
};

#endif //LINALG_LIB_EZMATRIX_H_
