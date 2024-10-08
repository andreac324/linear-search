//
//  linearSearch.cpp
//  linear search
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include "./linearSearch.hpp"
int linearSearch(int arr[],int targetNum,int n){
    for (int i = 0; i<n; i++){
        if ( arr[i] == targetNum)
            return i;
    }
    std::cout<< "element isnt in the array"<<std::endl;
    return -1;//if cant be found
    
        }

