# Inherit

### declarition
```
class inherit:public base{}
```

### constructor

inherit would call the default constructor of base

```
inherit::inherit(){
 
}
```

### Initialize list

inherit would call the constructor of base which takes the `a` as para

NOTE HERE: `a` must the para of inherit construcotr

```
inherit::inherit(int a):base(a){
  
}
```

### Destructor

same as class

### Pointer

the `base` pointer can point to `derive` type

but `derive` cannot point back

### Static binding

the destructor would called by pointer type

```
derive* dp = new derive;
base* bp = dp;

//this would call ~derive() and then ~base()
delete dp;

//this would call ~base() even it point to deirve
delete bp;
```

### Dynamic binding

we can call the object method based on it own type not the pointer type

using `virtual` in front of method

```
derive* dp = new derive;
base* bp = dp;

//this would call ~derive() and then ~base()
delete dp;

//this would call ~derive() and then ~base() as well
delete bp;

//both would call print in thee derive
dp->print();
bp->print();
```

### Virtual 

adding Virtual to the base function ` virtual void foo()`

the derive class can rewrite the function for it own sake

### Force method

if add `= 0` at the end of the virtual method;

then the class can only be inherit from others cannot be create by user

and in deirve class it must have same method otherwize the deirve cannot be create by user 

```
virtual void print() = 0;
```




