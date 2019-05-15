# Problem Source - https://www.hackerrank.com/challenges/sherlock-and-squares/problem
# Discussion - https://coderinme.com/sherlock-and-squares-hackerrank-problem-solution/

import itertools

q = int(input())

for _ in range(q):
    a, b = map(int, input().split())
    ans = 0
    for i in itertools.count():
        if (i*i)>b:
            break
        if (i*i<=b and i*i>=a):
            ans += 1
    print(ans)
