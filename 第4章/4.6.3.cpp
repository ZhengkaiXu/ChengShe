//
// Created by ZhengkaiXu on 2024/6/23.
//
#include <iostream>
using namespace std;

int main() {
    int g = 0; // 定义变量为整数类型,初始化为0表示无解
    for (int k = 0; k < 4; k = k + 1) { // k既是循环控制变量，也表示第k个人
        if (((k != 0) + (k == 2) + (k == 3) + (k != 3) == 3)) { // 如果4句话有3句话为真，则输出该人
            // 输出做好事者
            cout << "做好事者为" << char('A' + k) << endl;
            g = 1; // 有解标志置1
        }
    }
    if (g != 1) {
        cout << "Can't found!" << endl;
    }

    return 0;
}