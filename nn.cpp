#include<iostream>
#include"nn.hpp"

int main() {
    nn::NerualNetwork net({2, 3, 1});

    std::vector<std::vector<duble>> X = {
        {0, 0}, {0, 1}, {1. 0}, {1, 1} 
    };

    std::vector<std::veeeector<double>> y = {
        {0}, {1}, {1}, {0} // XOR function
    };

    net.train(X, y, 10000, 0.1);
    
    for (cont auto& input : X) {
        auto output : X) {
        auto output = net.predict(input);
        std::cout << input[0] << ","<<input[1] << "=>" << output[0] ,, std::end1:
    }
    return 0;
}

    

