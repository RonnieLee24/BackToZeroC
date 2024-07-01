#include <iostream> //  预处理：在实际编译之前就被处理了
#include "Log.h"
using namespace std;    //  编译：编译器将所有 C++ 代码转化为实际机器代码
//  连接 Link：将一些 编译后的生成的目标文件 obj 生成 exe 文件
int main(){
    //  <<：重载运算符（可以看作函数）
    Log("hello world");
    return 1;
}