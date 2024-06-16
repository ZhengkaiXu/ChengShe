//
// Created by ZhengkaiXu on 2024/6/10.
//
#include <iostream>
using namespace std;
int main() {
    int sum = 0; // 定义sum为整型变量，并初始化为0
    for (int i = 0; i < 100000; i = i + 1) { // for循环
        // 循环体开始
        sum = sum + (i+1);
    } // 循环体结束
    cout << "自然数1～100之和为" << sum << endl; // 输出累加结果
    return 0;
}