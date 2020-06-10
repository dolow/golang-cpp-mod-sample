# Golang C++ module hands on sample project

# Build static library

Mac OS sample

```
$ COMPILER="gcc" # or clang++ or whatever
$ $COMPILER -c -std=c++11 -I./ Encryptor.cpp
$ ar ru libEncryptor.a Encryptor.o
$ rm Encryptor.o
```
