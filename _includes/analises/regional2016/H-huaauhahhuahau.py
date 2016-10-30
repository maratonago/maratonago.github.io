#!/usr/bin/env python3
# Paulo Cezar, Maratona 2016, huaauhahhuahau

s = ''.join(c for c in input() if c in "aeiou")
print("S" if s == s[::-1] else "N")
