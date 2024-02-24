#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>
#include <iostream>


void lu() {

    // return 1;
    std::cout << "Hello world\n";
}


PYBIND11_MODULE(mytest, m)
{
  m.doc() = "hello world";

  m.def("lu", &lu, "print Hello world");
}