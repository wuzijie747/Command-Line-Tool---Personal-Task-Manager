//
// Created by wuzijie on 2024/6/8.
//

#ifndef UNTITLED_FUNSTION_H
#define UNTITLED_FUNSTION_H

#endif //UNTITLED_FUNSTION_H

#include "Judge_characters.h"
#include "Project-specific_functions.h"



#include "variable.h"
#include "Faster_use_python.h"
#include "create.h"

LPCWSTR string2LPCWSTR(std::string str)
{
    size_t size = str.length();
    int wLen = ::MultiByteToWideChar(CP_UTF8,
                                     0,
                                     str.c_str(),
                                     -1,
                                     NULL,
                                     0);
    wchar_t *buffer = new wchar_t[wLen + 1];
    memset(buffer, 0, (wLen + 1) * sizeof(wchar_t));
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), size, (LPWSTR)buffer, wLen);
    return buffer;
}
void playmusic(const string& path) {
    if(0 == PlaySoundW(string2LPCWSTR(path),NULL,SND_FILENAME | SND_ASYNC))
    {
        DWORD error = GetLastError();
        std::cerr << "Failed to play sound. Error code: " << error << std::endl;
    }
}
string get_directory(){
    char str[512] = {0};
    getcwd(str,sizeof(str) - 1);
    string string1 = str;
    return string1;
}