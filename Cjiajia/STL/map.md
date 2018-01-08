# Map

升级版的array，index是可以为任意的东西

而且map是已经sort好的

在array里我们不能介入没有创建的memory

但是在map里可以， 如果是没有创建的pair他会自动插入
```
map<char, string> myMap = {('S', "Sunday"),('M', "Monday")};
myMap['F'] = "Friday" //insert('F', "Firday") 
```

# Function
- insert(pair) : 插入一个pair node
