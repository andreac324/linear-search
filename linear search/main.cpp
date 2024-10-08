//
//  main.cpp
//  linear search
//
//  Created by Andrea d Cazares on 10/7/24.
//

#include <iostream>
#include "./linearSearch.hpp"

using namespace std;

int main() {
    int arr[] = {10,50,30,70,13,9};
    int targetNum = 30;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    cout<< "element is at index: "<<linearSearch(arr,targetNum,n)<<endl;
    
    return 0;
}
