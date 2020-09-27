#!/usr/bin/env python
# coding=utf-8

n = int(input())
foot = [1, 0, 1, 1]
i = 4
while (i <= n):
    foot.append(foot[i - 2] + foot[i - 3])
    i += 1
print(foot[n])
