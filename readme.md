# 使用类似 JavaScript 的语法风格来书写 C++ 代码

需要一些必要的类来支持。

例如制作一个 `Variant`，万能容器类。

但是向 `Variant` 写入一个未注册的类会编译失败的。

使用 `STATIC_REGISTER_COMPLEX_TYPE` 进行注册。另外需要为注册的类实现比较函数。

