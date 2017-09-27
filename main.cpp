//
//  main.cpp
//  CB_assignments
//
//  Created by Ritu Prajapati on 9/9/17.
//  Copyright © 2017 Ritu Prajapati. All rights reserved.
//


#include "headerFile.h"


int main(int argc, const char * argv[]) {
    string s;
    ifstream data;
    data.open("rosalind_mrna.txt");
    if(!data){
        cout << "error reading file \n";
        exit(1);
    }
    
    while(data >> s){
        cout <<  possibleRNA(s) << "\n";
    }
    cout << "\n";
    data.close();
    return 0;
}
