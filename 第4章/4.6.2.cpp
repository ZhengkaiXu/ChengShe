//
// Created by ZhengkaiXu on 2024/6/17.
//
#include <iostream>
using namespace std;
int main() {
    int g = 0; // 定义变量为整型，初始化为0表示无解
    for (int k = 0;  k < 4; k = k + 1) { // 循环从k为0到3
        int sum = 0; // 循环体内的初始化
        if (k != 0) {
            sum = sum + 1; // 如A的话为真，则让sum加1；
        }
        if (k == 2) {
            sum = sum + 1; // 如A的话为真，则让sum加1；
        }
        if (k == 3) {
            sum = sum + 1; // 如C的话为真，则让sum加1；
        }
        if (k != 3) {
            sum = sum + 1; // 如D的话为真，则让sum加1；
        }
        if (sum == 3) { // 若有3句话为真，则做下列两件事
            cout << "This man is " << char('A' + k) << endl; // 输出做好事者
            g = 1; // 让有解标志置1
        }
    }

    if (g != 1) { // 则输出无解信息
        cout << "Can't found!" << endl;
    }
    return 0;
}