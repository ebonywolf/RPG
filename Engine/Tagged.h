#ifndef TAGGED_H
#define TAGGED_H

#include <unordered_map>

struct Tagged{
    Tagged(){

    }
    Tagged(std::vector<std::string> tag){
        for (auto& x: tag) {
            tags[x]=true;
        }
    }
    void addTag(std::string s){
        tags[s]=true;
    }
    bool hasTag(std::string s){
        return tags.count(s);
    }
    bool hasAllTag(std::vector<std::string> tag){
        for (auto& x: tag) {
                   if( !tags.count(x)){
                       return false;
                   }
        }
        return true;
    }
    bool hassAnyTag(std::vector<std::string> tag){
        for (auto& x: tag) {
                          if( tags.count(x)){
                              return true;
                          }
               }
       return false;
    }
private:
    std::unordered_map<std::string,bool> tags;
};



#endif