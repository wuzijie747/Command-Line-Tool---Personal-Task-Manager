#include "iostream"
#include<windows.h>
#include "library/funstion.h"
#include "string"
#include "vector"
#include <map>
#include <functional>
using namespace std;

int main() 
{
    string user = getUsername();
    system("chcp 65001 && cls");
    system("title Task Manager");
    int Add,Delete,View,mark;
    print("任务管理器 [版本 1.0.0]\n(c) github 黄文卓,王信，邬子杰。保留所有权力。\n");
    string input;
    map<std::string, std::function<void()>> actionMap {
            // 使用 std::pair 插入元素
            std::make_pair("exit", exit_),
            std::make_pair("version",version),
            // 可以添加更多动作
    };
    std::map<std::string, std::function<void(const std::string&)>> actionMapString {

    };
    while (1)
    {
        cout<<user+">";
        getline(std::cin, input);
        if(input.empty())
            continue;
        if(is_all_whitespace(input))
            continue;
        size_t space_pos = input.find(' ');
        string first_part,string,second_part;
        first_part = second_part = " ";

        if (space_pos != std::string::npos) {
            first_part = input.substr(0, space_pos);
            second_part = input.substr(space_pos + 1);
        }
        else
        {
            first_part=input;
        }

        auto it = actionMap.find(first_part);
        if (it != actionMap.end()) {
            it->second(); // 执行找到的动作
        } else {
            auto itString = actionMapString.find(first_part);
            if (itString != actionMapString.end()) {
                itString->second(second_part); // 执行找到的动作
            } else {
                std::cout << "未知动作" << std::endl;
            }
        }


    }

}