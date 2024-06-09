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
    system("chcp 65001 && cls");
    system("title Task Manager");
    int Add,Delete,View,mark;
    print("任务管理器 [版本 1.0.0]\n(c) github 黄文卓,王信，邬子杰。保留所有权力。\n");
    string input;
    map<std::string, std::function<void()>> actionMap {
            // 使用 std::pair 插入元素
            std::make_pair("exit", exit_)
            // 可以添加更多动作
    };
    while (1)
    {
        cout<<">>";
        cin>>input;
        auto it = actionMap.find(input);
        if (it != actionMap.end()) {
            it->second(); // 执行找到的动作
        } else {
            print("未知命令");
        }
    }
}