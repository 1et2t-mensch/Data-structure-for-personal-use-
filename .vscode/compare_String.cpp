#include <iostream>
#include <string>
#include <algorithm>

std::string toLower(const std::string& str){
    std::string lower = str;
    std::transform(lower.begin(),lower.end(),lower.begin(),::tolower);
    return lower;
}

int main(){
    std::string str1 = "apple";
    std::string str2 = "banana";
    bool less1 = (str1 < str2);//use == < > <= >= != to compare
    bool less2 = (str1.compare(str2)<0);//in std::string
    bool less3 = (toLower(str1)<toLower(str2));
    std::cout << less1 << less2 << less3 << std::endl;
    return 0;
}
