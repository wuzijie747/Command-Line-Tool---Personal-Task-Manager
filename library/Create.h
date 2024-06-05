//
// Created by wuzijie on 2024/6/5.
//

#ifndef UNTITLED4_CREATE_H
#define UNTITLED4_CREATE_H

#endif //UNTITLED4_CREATE_H

#include "string"
#include "nlohmann/json.hpp"
#include <fstream>
using namespace std;
using json = nlohmann::json;
bool create(const string& task_name,const string& task_description,int year = 0,int month = 0,int day =0,int hour = 0,int minute=0)
{
    json tasks;
    ifstream input("task.json");
    if(input.is_open())
    {
        input >> tasks;
        input.close();
    }
    // 创建新的任务对象
    json new_task;
    new_task["task_name"] = task_name;
    new_task["task_description"] = task_description;
    new_task["year"] = year;
    new_task["month"] = month;
    new_task["day"] = day;
    new_task["hour"] = hour;
    new_task["minute"] = minute;

    tasks.push_back(new_task);
    std::ofstream output("tasks.json");
    if (output.is_open()) {
        output << tasks.dump(4); // 使用缩进格式化输出
        output.close();
    } else {
        std::cerr << "Unable to open file for writing" << std::endl;
    }
}