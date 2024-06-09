//
// Created by wuzijie on 2024/6/8.
//

#ifndef UNTITLED_PROJECT_SPECIFIC_FUNCTIONS_H
#define UNTITLED_PROJECT_SPECIFIC_FUNCTIONS_H

#endif //UNTITLED_PROJECT_SPECIFIC_FUNCTIONS_H
#include "iostream"
#include <bitset>
#include "string"
#include <stdexcept>
#include <lmcons.h>

using namespace std;
std::string getUsername() {
    std::string username;
#ifdef _WIN32
    TCHAR winUsername[UNLEN + 1];
    DWORD usernameSize = UNLEN + 1;

    if (GetUserName(winUsername, &usernameSize)) {
        username = winUsername;
    } else {
        username = "Failed to get user name";
    }
#else
    uid_t uid = geteuid();
    struct passwd *pwd = getpwuid(uid);
    if (pwd) {
        username = pwd->pw_name;
    } else {
        username = "Failed to get user name";
    }
#endif

    return username;
}
double str(const std::string& str) {
    try {
        double number = std::stod(str);
        return number;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    return 0.0; // 或者返回其他错误码，取决于你的需求
}


template < typename T , typename ... Types>
void print (const T& firstArg , const Types&... args)
{
    cout << firstArg;
    if constexpr ( sizeof ...(args) > 0) print2 (args...) ;
    cout<<endl;
}





