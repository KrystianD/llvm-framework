Compile private code
======

```
cd private
cmake .
make
```

It will create libprivate.bc which contains compiled private code from src1.cpp and src2.cpp files

Compile public code
======

```
cd public
cmake .
make
./main
```

It will use public header and libprivate.bc from private code directory
