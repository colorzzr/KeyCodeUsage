# Template Format

在每一个template的definition之前都要加上<template T>

# Function

在叫function的时候可以不需要<specifier>
```
<template T>
T square(T src) return src * src;

呼出方式1：
square(5);
呼出方式2：
square<int>(5);
```
