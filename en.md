# None
## Main features
- provide object that can use like none like in others programming language
- provide functions(macros) for Nonetype of this library
- what?do you think it has more usefull features? look who is the author first,please
## main functions(macros)
### `to(self,v)`
> make the `self`'s `value` property into `v` variable
### `_(self,v)`
> has the same functionality of `to`
### `toNone(self)`
> make the `self`'s `is_none` property into `1`
### `customNoneObject(type)`
> create a None type object and name it as None_ + `type`
## How this library works?

actually every Nonetype object is a struct with `value` and `is_none` <br>
for example `Int` in the source code looks like
```c
typedef struct
{
    int value;
    short is_none;
} Int;
```
it's very simple,right?
