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
    std::istringstream iss(s);
    std::string name,time;

    if(iss>> name && iss>>time){}
    else
    {
        return;
    }
    Py_Initialize();

    PyRun_SimpleString("import sys");

    PyRun_SimpleString("sys.path.append('./')");

    PyObject* pName = PyUnicode_DecodeFSDefault("create");
    PyObject* pModule = PyImport_Import(pName);
    PyObject* pDict = PyModule_GetDict(pModule);
    if (pModule == NULL) {
        cout << "module not found" << endl;
        return;
    }

    PyObject* pFunc = PyObject_GetAttrString(pModule,"create");
    if (!pFunc || !PyCallable_Check(pFunc)) {
        cout << "not found function add_num" << endl;
        return;
    }

    PyObject* pArgs = PyTuple_Pack(2, PyUnicode_FromString(name.c_str()), PyUnicode_FromString(time.c_str()));
    PyObject* result = PyObject_CallObject(pFunc, pArgs);

    Py_DECREF(pArgs);

    Py_DECREF(pModule);
    Py_DECREF(pFunc);


    Py_Finalize();
}