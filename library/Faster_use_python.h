//
// Created by wuzijie on 2024/6/17.
//

#ifndef TIME_JAVA_FASTER_USE_PYTHON_H
#define TIME_JAVA_FASTER_USE_PYTHON_H

#endif //TIME_JAVA_FASTER_USE_PYTHON_H
#include "Python.h"
void Py_run(const char *functionName)
{
    Py_Initialize();

    PyRun_SimpleString("import sys\\nsys.path.append('./')");

    PyObject* create_module = PyImport_ImportModule("create");

    if(create_module != NULL)
    {
        PyObject* function = PyObject_GetAttrString(create_module,functionName);

        if (function && PyCallable_Check(function)) {
            // 调用create_something函数
            PyObject_CallObject(function, NULL);
        } else {
            PyErr_Print();
        }
    } else {
        PyErr_Print();
    }

    // 清理Python解释器
    Py_Finalize();
}