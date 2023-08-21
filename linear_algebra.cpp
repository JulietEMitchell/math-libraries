#include <math.h>
#include <vector>
#include <iostream>

float magnitude(std::vector<float> vec);

int main(){

std::vector<float> vect = {1, 1, 1};
std::cout << magnitude(vect) << std::endl;

}

float magnitude(std::vector<float> vec){

    std::vector<float> vector = vec;
    float mag = 0;

    unsigned int vecSize = vec.size();
    for (unsigned int j = 0; j < vecSize; j++){

        float elem = vec[j] * vec[j];
        mag += elem;

    }

    mag = sqrt(mag);

    return mag;

}

