//
// Created by wuzijie on 2024/6/8.
//

#ifndef UNTITLED_JUDGE_CHARACTERS_H
#define UNTITLED_JUDGE_CHARACTERS_H

#endif //UNTITLED_JUDGE_CHARACTERS_H
#include "iostream"
#include "string"
using namespace std;
bool DTP(const string& a,const string& b) //判断前缀是否包含此字符串
{
    if(a.find(b) == 0)
    {
        return true;
    }
    else
        return false;
}