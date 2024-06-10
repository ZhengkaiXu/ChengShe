//
// Created by ZhengkaiXu on 2024/6/10.
//
#include <iostream>
using namespace std;
int main() {
    long mul = 1; // 定义mul为长整型变量，并初始化为1
    for (int i = 10; i >= 1; i = i - 1) { // 用for循环作累乘运算
        cout << "i=" << i; // 显示i
        mul = mul * i; // 每一步乘积
        cout << "\tmul =" << mul << endl; // 显示每一步乘积
        for (int j = 1; j <= 5500; j = j + 1) { // 用for循环延迟时间
            for (int k = 1; k <= 10000; k = k + 1) { // 用for循环延迟时间
            }
        }
    }
    cout << "10!=" << mul << endl; // 显示运算结果
    return 0;
}