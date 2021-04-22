#include <stdio.h>

/*
author      : MiniApple
created at  : 4/22/2021
description : a flexible useless library for people that need none in c
version     : 1.0.0
language    : c
*/

#define customNone(type) \
    typedef struct       \
    {                    \
        type value;      \
        int is_none      \
    } None_##type;
#define toNone(self)      \
    {                     \
        self.is_none = 1; \
    }
#define to(self, v)     \
    {                   \
        self.value = v; \
    }
#define _(self, v) to(self, v)

typedef struct
{
    char value;
    short is_none;
} Char;
typedef struct
{
    signed char value;
    short is_none;
} SignedChar;
typedef struct
{
    unsigned char value;
    short is_none;
} UnsignedChar;
typedef struct
{
    short value;
    short is_none;
} Short;
typedef struct
{
    short int value;
    short is_none;
} ShortInt;
typedef struct
{
    signed short value;
    short is_none;
} SignedShort;
typedef struct
{
    signed short int value;
    short is_none;
} SignedShortInt;
typedef struct
{
    unsigned short value;
    short is_none;
} UnsignedShort;
typedef struct
{
    unsigned short int value;
    short is_none;
} UnsignedShortInt;
typedef struct
{
    int value;
    short is_none;
} Int;
typedef struct
{
    signed value;
    short is_none;
} Signed;
typedef struct
{
    signed int value;
    short is_none;
} SignedInt;
typedef struct
{
    unsigned value;
    short is_none;
} Unsigned;
typedef struct
{
    long value;
    short is_none;
} Long;
typedef struct
{
    long int value;
    short is_none;
} LongInt;
typedef struct
{
    signed long value;
    short is_none;
} SignedLong;
typedef struct
{
    signed long int value;
    short is_none;
} SignedLongInt;
typedef struct
{
    unsigned long value;
    short is_none;
} UnsignedLong;
typedef struct
{
    unsigned long int value;
    short is_none;
} UnsignedLongInt;
typedef struct
{
    long long value;
    short is_none;
} LongLong;
typedef struct
{
    long long int value;
    short is_none;
} LongLongInt;
typedef struct
{
    signed long long value;
    short is_none;
} SignedLongLong;
typedef struct
{
    signed long long int value;
    short is_none;
} SignedLongLongInt;
typedef struct
{
    unsigned long long value;
    short is_none;
} UnsignedLongLong;
typedef struct
{
    unsigned long long int value;
    short is_none;
} UnsignedLongLongInt;
typedef struct
{
    float value;
    short is_none;
} Float;
typedef struct
{
    double value;
    short is_none;
} Double;
typedef struct
{
    long double value;
    short is_none;
} LongDouble;