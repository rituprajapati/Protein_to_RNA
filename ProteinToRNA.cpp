//
//  ProteinToRNA.cpp
//  CB_assignments
//
//  Created by Ritu Prajapati on 9/9/17.
//  Copyright © 2017 Ritu Prajapati. All rights reserved.
//



#include "headerFile.h"


int possibleRNA(std::string str){

    unordered_map<char, int> map;
    map = {{'A',4},{'R',6},{'N',2},{'D',2},{'C',2},{'Q',2},{'E',2},{'G',4},{'H',2},{'I',3},{'L',6},{'K',2},
        {'M',1},{'F',2},{'P',4},{'S',6},{'T',4},{'W',1},{'Y',2},{'V',4}};
    int n = 1;
    int m = 1000000;
    
    for(int i = 0; i < str.length(); i++){
        if(map.find(str[i]) == map.end()) continue;
        n *= map[str[i]];
        if(n >= m) n %= m;
    }
    return ((n*3)%m);
}
