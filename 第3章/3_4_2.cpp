//
// Created by xuzhengkai on 2024/3/27.
//
#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0, c = 0; //定义 a、b、c为整型变量，均初始化为0
    a = 7; // a赋值为7，覆盖了原来的0
    b = a; // b赋值为a,a中的值覆盖了b中的值，但a中的值不变
    c = a + b; // 将a+b的值赋给c,a+b的值为14去覆盖c中的0,a与b保持7不变
    a = a + 1; // 将a+1的值赋给a，a+1的值为8覆盖了原来的7
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;

}