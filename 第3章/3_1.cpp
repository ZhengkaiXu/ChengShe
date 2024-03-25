//
// Created by xuzhengkai on 2024/3/26.
//
//****************************************
//* 程 序 名：3_1.cpp                          *
//* 作    者：王小二                            *
//* 编制时间：2002年7月7日                *
//* 主要功能：计算应付款                   *
#include <iostream> // 预编译命令
using namespace std;
int main() // 主函数
{ // 主函数开始
    float applePrice = 3.5; // 苹果单价，3.5元/千克
    float bananaPrice = 4.2; // 香蕉单价，4.2元/千克
    float appleWeight = 0.0; // 苹果重量，初始化为0
    float bananaWeight = 0.0; // 香蕉重量，初始化为0
    float total = 0.0; // 总钱数，初始化为0
    cout << "请输入苹果重量" << endl; // 提示信息
    cin >> appleWeight; // 输入苹果重量
    cout << "请输入香蕉重量" << endl; // 提示信息
    cin >> bananaWeight; // 输入香蕉重量
    total = applePrice * appleWeight + bananaWeight * bananaPrice; // 计算应付款
    cout << "应付款" << total << endl; // 输出应付款
    return 0;

}// 主函数结束