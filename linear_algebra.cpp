#include <math.h>
#include <vector>
#include <iostream>

float magnitude(std::vector<float> vec);
std::vector<float> normalize(std::vector<float> vec);
std::vector<float> vector_addition(std::vector<float> vec1, std::vector<float> vec2);
std::vector<float> vector_subtraction(std::vector<float> vec1, std::vector<float> vec2);


int main(){

std::vector<float> vect = {1, 1, 1};
std::cout << magnitude(vect) << std::endl;
std::vector<float> norm = normalize(vect);

unsigned int vecSize = norm.size();

for (unsigned int j = 0; j < vecSize; j++){

std::cout << norm[j] << std::endl;

}
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

std::vector<float> normalize(std::vector<float> vec){

    float mag = magnitude(vec);
    std::vector<float> norm;

    unsigned int vecSize = vec.size();

    for(unsigned int j = 0; j < vecSize; j++){

        float elem = vec[0];
        elem = elem / mag;
        norm.push_back(elem);

    }

    return norm;
}

std::vector<float> vector_addition(std::vector<float> vec1, std::vector<float> vec2){

    std::vector<float> sum;
    unsigned int vecSize1 = vec1.size();
    unsigned int vecSize2 = vec2.size();

    if (vecSize1 == vecSize2){

        for (unsigned int j = 0; j < vecSize1; j++){

            float elem = vec1[j] + vec2[j];
            sum.push_back(elem);

        }

    }

    return sum;

}

std::vector<float> vector_difference(std::vector<float> vec1, std::vector<float> vec2){

    std::vector<float> sum;
    unsigned int vecSize1 = vec1.size();
    unsigned int vecSize2 = vec2.size();

    if (vecSize1 == vecSize2){

        for (unsigned int j = 0; j < vecSize1; j++){

            float elem = vec1[j] - vec2[j];
            sum.push_back(elem);

        }

    }

    return sum;

}

float dot(std::vector<float> vec1, std::vector<float> vec2){

    float dot;

    unsigned int vecSize1 = vec1.size();
    unsigned int vecSize2 = vec2.size();

    if (vecSize1 = vecSize2){

        for(unsigned int j = 0; j < vecSize1; j++){
            
            float elem = vec1[j] * vec2[j];
            dot += elem;

        }

    }

    return dot;

}


