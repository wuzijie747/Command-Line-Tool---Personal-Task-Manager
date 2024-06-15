//
// Created by wuzijie on 2024/6/14.
//

#ifndef UNTITLED_TASK_FUNCTIONS_H
#define UNTITLED_TASK_FUNCTIONS_H

#endif //UNTITLED_TASK_FUNCTIONS_H

#include <sstream>

#include <vector>

#include <iostream>

#include <fstream>

#include <string>

#include <cstdlib>



void create(const std::string& s)
{

    std::istringstream iss(s);
    std::string Text, time;
    if (iss >> Text && iss >> time) {
        std::vector<std::string> localVector = {Text, time};
        // 假设 globalVector 是在其他地方声明的全局变量

    }

}