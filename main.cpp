//
//  main.cpp
//  insertionSort
//
//  Created by Евгений Киримов on 14.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;
void insertionSort(vector <int> & vec);

int main() {
    using std::vector;
    using std::cout;
    using std::endl;
    vector <int> vec;
    
    for(int i = 0; i < 100; i++){
        vec.push_back(rand()%100);
    }

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    insertionSort(vec);
    cout << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    
    
    system("pause");
    return 0;
}

void insertionSort(vector <int> & vec){
    int j;
    for(int i=1; i < vec.size(); i++){
        int temp = vec[i];
        j=i;
        while(j>0 && temp<=vec[j-1]){
            vec[j]=vec[j-1];
            j--;
        }
        vec[j] = temp;
    }
    
}


