# Vector

造好的Template Link List

```
vector<int> vec;
```

# Member Function

  - push_back(varible) : 接到最后一个
  - begin(): 找到head
  - end() : 找到end之后的一个
 ```
 1    2    3    4    5 
begin                   end
 ```
 
# Iterator
Iterator 是stdlib里面的algorithm和container的过渡器，如果没有template我们每一种structure都要一个algorithm function

这样会占用很多空间。但是在lib里面自带的algorithm又不知user会创建什么样的structure所有就想出了双重template

algorithm ---- Iterator ---- container

Iterator本身是个pointer可以有很多操作

# ALgorithm

- sort( iterator, iterator2)
