# None
## 主要功能
- 提供可以视为空型别的型别
- 提供支持空性别的函数
- 蛤?你觉得他还有其他用处吗?先看看作者是谁吧
## 主要函数(macros)
### `to(self,v)`
> 将`self`的`value`属性变为`v`变数
### `_(self,v)`
> 与`to`函数的功能一样
### `toNone(self)`
> 将`self`的`is_none`属性变为`1`
### `customNoneObject(type)`
> 这个创造一个空型别并且命名为`None_` + `type`
## 实现方法
其实每个型别就是只是一个`value`和`is_none`组成的**struct**<br>
例如`Int`的源代码是
```c
typedef struct
{
    int value;
    short is_none;
} Int;
```