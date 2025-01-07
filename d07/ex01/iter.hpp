#pragma once

#include <iostream>

template <typename T> void iter(T *array, size_t length, void (*iterFun)(T &))
{
    for (size_t i = 0; i < length; i++)
        iterFun(array[i]);
}