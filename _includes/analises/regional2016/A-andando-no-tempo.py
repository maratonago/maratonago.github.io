#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, Andando no tempo

credits = sorted(map(int,input().split()))

if (credits[0] == credits[1] or
    credits[1] == credits[2] or
    credits[0]+credits[1] == credits[2]):
    print("S")
else:
    print("N")
