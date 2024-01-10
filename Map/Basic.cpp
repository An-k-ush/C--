#include<iostream>
#include<map>

int main() {
    std::map<int, std::string> mp;
    mp[1] = "Ankush";
    mp[2] = "Soun";
    mp[3] = "Qwer";
    std::cout << mp.size()<<std::endl;
    std::cout<<mp.max_size()<<std::endl;
    for(auto& i : mp) {
        std::cout << i.first<<std::endl;
    }
}