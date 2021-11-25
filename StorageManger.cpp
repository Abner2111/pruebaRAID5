
#include <iostream>
#include "StorageManger.h"
#include <vector>
#include <bitset>
using namespace std;

StorageManger::StorageManger(){
    cout<<"Storage manager created"<<endl;
}

string xoring(string a, string b, int n){
    string ans ="";

    for(int i = 0; i < n;i++){
        ans += (bitset<1>(a[i])^bitset<1>(b[i])).to_string();
    }
    return ans;
}
void StorageManger::save(const std::string& name, const std::string& content) {

    //calculation of the slice size and the place for the parity slice
    const int slice_size = (content.length()*8)/4;
    int parity_place = amount_of_drives - (currStripe%5)+1;

    //create vector with the charachters of the input string content
    vector<char> content_char;
    for(int i = 0; i<=content.length();i++){
        content_char.push_back(content[i]);
    }

    //create a string with the binary ascii codes for the characters
    string content_string_binary;
    for(char i : content_char){
        string character = bitset<8>(i).to_string();
        content_string_binary+=character;
    }

    //divides the raw data in slices and calculates the parity slice
    string slices[4];
    string parity_slice = content_string_binary.substr(0,slice_size);
    for(int i = 0; i<=4; i++){
        slices[i] = content_string_binary.substr(i*slice_size,slice_size);
        parity_slice = xoring(parity_slice, content_string_binary.substr(i*slice_size,slice_size),slice_size);
    }

    //
    string stripped_file[amount_of_drives];








}