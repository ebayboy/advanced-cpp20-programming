
module;

#include <concepts>

export module smd.math; // 对外模块名

export namespace math
{
template<std::integral T> // 引用头文件中的符号
T square(T x)
{
    return x * x;
}
}
