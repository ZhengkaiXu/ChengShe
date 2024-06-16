//
// Created by ZhengkaiXu on 2024/6/17.
//
#include <iostream>
using namespace std;
int main() {
    float x = 0, y = 0; // 定义x、y为浮点类型变量，并初始化为0

    cout << "请输入x" << endl; // 提示信息
    cin >> x; // 从键盘输入浮点数送至x中

    if (x > 0) { // 如果x>0,将1赋给y
        y = 1;
    } else if (x == 0) { // 如果x==0,将0赋给y
        y = 0;
    } else {
        y = -1; // 否则(x<0)，将-1赋给y
    }
    // 输出x,y的值
    cout << "当x=" << x << "时，y=" << y << endl;
    return 0;
}