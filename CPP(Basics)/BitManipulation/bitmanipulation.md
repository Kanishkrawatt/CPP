### Bit Manipulation

For Any Number N in binary To get the Binary form of N-1 we flip all the elements after first rightmost 1.
```
N   = 6 = (0110)
N-1 = 5 = (0101)
0110 Here if we flip all the bit after rightmost 1 we get N-1
```

(N & N-1) has same bits as N except the rightmost set bit

```

```

To Check If a given Number is power of 2

```
N   = 4 = (100)
N-1 = 3 = (011)
N & N-1 = (100)&(001) = (000) =0
so, If we have a number N which is power of 2 then bit form of that number has only one setbit so the N-1 number will have all the bits set except the setbit of N meaning if We use & This will always return 0


```
