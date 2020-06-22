//
// Created by fenggeliu on 6/21/20.
//
#include <iostream>
#include "linalg/lib/EzMatrix.h"
using namespace std;

int main () {
  EzMatrix A(5, 6);
  A.fill();
  cout << A << endl;
  EzMatrix B(6, 7);
  B.fill();
  cout << B << endl;

  EzMatrix* C = A * B;
  cout << *C << endl;

  return 0;
}