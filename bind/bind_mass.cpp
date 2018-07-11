#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "mass.h"

void bind_sim(py::module &){
    py::class_<Mass>(m, "Mass")
            .def(py::init<const std::string &>())
            .def("setMass", &Mass::setMass)
            .def("setPos", &Mass::setPos)
            .def("setVel", &Mass::setVel)
            .def("setAcc", &Mass::setAcc)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)
            .def("setMass", &Mass::setMass)

}