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






