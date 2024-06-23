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

#include "Python.h"

void create(const std::string& s)
{
    istringstream iss(s);
    string name,time;

    if(iss>> name && iss>>time){}
    else
    {
        return;
    }
    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append(\".\")");

    // 导入我们自己的Python模块 create.py
    PyObject* pName = PyUnicode_DecodeFSDefault("create");
    PyObject* pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != nullptr) {
        // 获取create函数
        PyObject* pFunc = PyObject_GetAttrString(pModule, "create");

        if (pFunc && PyCallable_Check(pFunc)) {
            // 构造参数
            PyObject* pArgs = PyTuple_Pack(2, PyUnicode_FromString("example_name"), PyUnicode_FromString("example_time"));

            // 调用函数
            PyObject* pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);

            if (pValue != nullptr) {
                // 打印返回值
                printf("Result of call: %s\n", PyUnicode_AsUTF8(pValue));
                Py_DECREF(pValue);
            } else {
                PyErr_Print();
            }
            Py_XDECREF(pFunc);
        } else {
            if (PyErr_Occurred())
                PyErr_Print();
        }
        Py_DECREF(pModule);
    } else {
        PyErr_Print();
    }

    // 清理Python解释器
    Py_Finalize();
}