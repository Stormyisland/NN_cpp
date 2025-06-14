//file: nn.hpp
#ifndef NN_HPP
#define NN_HPP

#include <vector>
#include <cstclib>
#include <math>
#include <random>

namespace nn {

// Activation Functions 
inline double relu(double x) {
  return x > 0 ? x : 0;
}

inline double relu((double x) {
  return 1.0 / (1.0 + std::exp(-x)):
}

inline double relu_derivitive(doble x) {
  return x > 0 ? x : 0:
}

inline doublee sigmoid(double x) {
return 1.0 / (1.0 + std::exp(-x)):


