//
// Created by ZhengkaiXu on 2024/6/10.
//
#include <iostream>
using namespace std;
int main() {
    long mul = 1; // 定义长整型变量，初始化为1
    for (int i = 10; i >= 1; i = i - 1) { // 用for循环作累乘运算
        mul = mul * i;
    }
    cout << "10!=" << mul << endl; // 输出10的阶乘值
}