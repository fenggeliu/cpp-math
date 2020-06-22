# Math Toolkit in C++

- This package is an ongoing practice toolkit of utilizing c++ library on math operations.
- *Googly built in [Bazel].*

### Linear Algebra 
[path: *`//cpp-math/linalg/...`*](https://github.com/fenggeliu/cpp-math/tree/master/linalg/)

1. Dynamic memory allocation vector and matrix 

   [pkg: *`//linalg/malloc_notation`*](https://github.com/fenggeliu/cpp-math/tree/master/linalg/malloc_notation).

2. Matrix Multiplication

   ![formula](https://render.githubusercontent.com/render/math?math=C_{ij}=\sum_{k=1}^{n}A_{ik}B_{kj})
   
   [binary: *`//linalg/matrix_multiplication:main`*](https://github.com/fenggeliu/cpp-math/tree/master/linalg/matrix_multiplication/main.cc),
   [library: *`//linalg/lib:ezmatrix`*](https://github.com/fenggeliu/cpp-math/tree/master/linalg/lib/EzMatrix.cc).
   
### Calculus

### Parallel computing


[Bazel]: https://docs.bazel.build/versions/3.2.0/tutorial/cpp.html#introduction-to-bazel-building-a-c-project
