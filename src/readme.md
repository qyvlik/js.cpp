# Variant

> 作者: qyvlik

或许你看过 `JavaScript` 中的这样的代码。

```
var foo = "string";

foo = 12;

foo = 12.2;
```

其中 `var` 是类似于万能容器的东西（大体什么都能存吧）。怎么在 C++ 中实现万能容器呢？

其实类似于异构链表，都是使用多态来实现的。

我们分步来处理吧。

1. 先定义一个 `AbstractBridge` 的类。

2. 定义一个继承自 `AbstractBridge` 的子类 `Bridge<T>`。

3. 在 `Variant` 类中包含一个 `AbstractBridge` 类指针。

由于使用 `Bridge<T>` 保存指定的 `T` 类型的数据。然后让这个对象的地址保存到 `AbstractBridge`，这样就可以在必要的时候进行向上类型转换，取得保存的值了。

具体看看代码吧。