//
// Created by wuzijie on 2024/6/8.
//

#ifndef UNTITLED_COMMAND_FUNCTIONS_H
#define UNTITLED_COMMAND_FUNCTIONS_H

#endif //UNTITLED_COMMAND_FUNCTIONS_H

#include <cassert>
#include <cstdlib>
#include <winsock2.h>
#include <cstdio>
#include <cstring>
#include "curl/include/curl/curl.h"
#pragma comment(lib, "ws2_32.lib")
#define ICMP_ECHO_REQUEST 8
using namespace std;
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}
string translateBaidu(const std::string &text, const std::string &from, const std::string &to, const std::string &appid, const std::string &secretKey) {
    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if(curl) {
        std::string url = "https://fanyi-api.baidu.com/api/trans/vip/translate";
        url += "?q=" + string(curl_easy_escape(curl, text.c_str(), text.length()));
        url += "&from=" + from + "&to=" + to + "&appid=" + appid + "&salt=1&sign=" + secretKey;

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if(res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
    }

    curl_global_cleanup();
    return readBuffer;
}

void exit_()
{
    exit(0);
}
void version()
{
    print("任务管理器 版本 '1.0.0' 2024/6/13 2024-6-13 TEST\n");
}
void cmd()
{
    system("start cmd");
}
void ping(const std::string& ip) {
    // 构造ping命令
    std::string command = "ping " + ip;

    // 执行ping命令
    system(command.c_str());
}
void fy(const string& content)
{
    vector<string> t = SBE(content);
    translateBaidu(t[2],t[0],t[1],"20231002001834760","cSAX7Ib5KF37jdWB_nl6");
}