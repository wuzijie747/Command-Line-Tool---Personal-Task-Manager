#include <iostream>
#include "library/Create.h"
#include<windows.h>
using namespace std;
int main() 
{
    int Add,Delete,View,mark;
    char input;
    cout<<"这是一个任务管理器，他可以添加任务、删除任务、查看任务列表和标记完成任务.。a=添加,b=删除,c=查看任务列表或查看任务列表.";
    cin>>input;
    if(input=='a')
    {
        char addinput;
        cin>>addinput;
        if(addinput=='a')
        {
            cout<<"请输入任务名称\n";
            cin>>Add;
            cout<<"请输入任务内容\n";
            cin>>Add;
        }
    }
    else if(input=='b')
    {
        char deleteinput;
        cin>>deleteinput;
        if(deleteinput=='b')
        {
            cout<<"请输入任务名称\n";
            cin>>Delete;
        }
    return 0;
}