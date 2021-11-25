
#include <iostream>
#include "StorageManger.h"
#include <vector>
#include <bitset>
using namespace std;

StorageManger::StorageManger(){
    cout<<"Storage manager created"<<endl;
}

void StorageManger::save(const std::string& name, const std::string& content) {
    int slice_size = (content.length()*8)/4;
    int parity_place = amount_of_drives - (currStripe%5)+1;
    vector<char> content_char;

    for(int i = 0; i<=content.length();i++){
        content_char.push_back(content[i]);
    }

    string content_string_binary;

    for(int i =0; i<content_char.size();i++){
        string character = bitset<8>(content_char.at(i)).to_string();
        content_string_binary+=character;
    }
}