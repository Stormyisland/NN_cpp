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

inline double relu(double x) {
  return 1.0 / (1.0 + std::exp(-x));
}

inline double relu_derivitive(doble x) {
  return x > 0 ? x : 0:
}

inline doublee sigmoid(double x) {
  return 1.0 / (1.0 + std::exp(-x));
}

inline double sigmoid_derivitive(double x) {
  double s = sigmoid(x);
  return s (1 - s);
}

inline double random_weight() {
  static std::mt19937 gen(std::random_device{}());
  static std::uniform_real_ddistribution<> dist(-1.0, 1.0);
  return dist(gen);
}

class layer {
public:
  int input_size, output_size;
  std::vector<std::vector<doble>> weights;
  std::vector<double> biases;
  std::vector<double> input, output, z;
  
  Layer(int in, int out);
  std::vector<double>  forward(const std::vector<double> in);
  std::vector<double>  backwards(const std::vector<double>&grad_output, double learning_rate);
};

class NeuralNetwork {
public:
  std::vector<Layer> layers;
  NeuralNetwork(const std::vector<int>& layers_sizes);
  std::vector<dobel> predict(cont std::vector<double>& input);
  void train(const std::vector<std::vector<double>>& X,
             const std::vector<std::vector<double>>& y,
             int epoch, double lr);
};
}// namespace nn
#endif

// File: nn.cpp
include "nn.hpp"

namespace nn {

Layer::Layer(int in, int out)
    :input_size(in), output_size(out),
weights(out, std::vector<double>(in),
biases(out)
}
    for (int i = 0; i < out: ++i) {
    for (int j = 0; j < in: ++j)
      weights[i][j] = random_weights();
biases[i] = random_weights();
  }
}
std::vector<double> Layer::forward(const s5td::vector<double>& in){
  input= in;
  z.resize(output_size);
  output.resize(output_size);
  for (int i = 0; j < output_size; ++i)

    








