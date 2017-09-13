# map type

map<type1, type2> name;

map是比array更高级的一种储存东西的type

array的index[]只能是int 而map可以是任何的东西 

可以是char可以是string可以是struct（可以是class吗?）

而且要在std的namespace下!!!!!!!!!!!!!!!!!!!!!!!!!



Example
```
map<int, string> test;
test[1] = "hhh"
cout << test[1] << endl;
```

Output would be `hhh`

