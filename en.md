# None
## Main features
- Provide object that can use like none like in others programming language
- Provide functions(macros) for Nonetype of this library
- What? Do you think it has more useful features? Please look who is the author
## Main functions(macros)
### `to(self,v)`
> Make the `self`'s `value` property into `v` variable
### `_(self,v)`
> Has the same functionality of `to`
### `toNone(self)`
> Make the `self`'s `is_none` property into `1`
### `customNoneObject(type)`
> Create a None type object and name it as None_ + `type`
## How this library works?

Actually every Nonetype object is a struct with `value` and `is_none` <br>
for example `Int` in the source code looks like
```c
typedef struct
{
    int value;
    short is_none;
} Int;
```
It's very simple, right?
