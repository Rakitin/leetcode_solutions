#pragma once

#include <iostream>

#include <vector>
#include <algorithm>

class Solution {
public:
    int numberOfWeakCharacters(std::vector<std::vector<int>>& properties) {
        int result{0};
        std::sort(properties.begin(), properties.end(), [](std::vector<int> &a, std::vector<int> &b) {
            if(a[0] == b[0])
                return a[1] < b[1];
            return a[0] >= b[0];
        });
        int maxDef{0};
        for (auto p : properties) {
            maxDef = std::max(maxDef, p[1]);
            if(p[1] < maxDef){
                ++result;
            }
        }
        return result;
    }

};


//class Solution {
//public:
//    static bool comp(std::vector<int> &a,std::vector<int> &b){
//        if(a[0]!=b[0])
//            return a[0]>b[0];
//        return a[1]<b[1];
//    }
//    int numberOfWeakCharacters(std::vector<std::vector<int>>& prop) {
//        sort(prop.begin(),prop.end(),comp);

//        for (auto p : prop) {
//            std::cout << p[0] << " " << p[1] << std::endl;
//        }


//        int maxTillNow = 0;
//        int ans=0;
//        for(auto p:prop){
//            if(maxTillNow>p[1]) ans++;
//            else maxTillNow=p[1];
//        }
//        return ans;
//    }
//};
