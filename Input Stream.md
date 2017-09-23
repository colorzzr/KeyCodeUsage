# Stream

Stream is an array that store the input of user

the size of stream is 256 byte

the array type is `char`

all the stream stop reading when meet `space`

### Cin

include in `<iostream>`

`cin` is the stream take input from keyboard

and it is default stream name

### Streamstring

include in '<sstream>'

streamstring is a type that reading from `string`

like `cin`, it can load string `123` to int `123`

### fstream

include in `<fstream>`

`fstream` is a type that reading from file


# Flag

`.eof()` return `true` if the input is end (in `cin` eof is `Ctrl + d`) and it set `fail()` to 1

`.fail()` return `true` if bad input (such as `a` to `int`)

`.clear()` reset the `fail()` flag

`.ingore(1000, '\n')` ignore 1000 char or the `\n` <---------important for cleaning error

`.open("./file.txt")` open the ./file.txt

`.is_open()` return `true` if the file open

`.close()` close the file




