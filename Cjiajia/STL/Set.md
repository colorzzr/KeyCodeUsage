# Set
Set的结构是BST插入的时候，总是有sort，而且不允许有重复的值

# Function
- insert(input) : 插入input， 成功rutern一个pair(struct)

pair<template<A>,template<B>>有两个member分别都是template，在这个情况下pair里面的member分别是
-   template<A> = set<>::iter 插入的坐标
-   template<B> = bool 是否成功

- find(input) : 搜索input，并rutern坐标的iter

