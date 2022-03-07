from functools import reduce
from operator import add
count = 0
L = []
while 1:
    s = input()
    if s == '*':
        break
    else:
        L.append(s)
        count += 1

# for i in input():
#     if i == ' ':
#         break
#     else:
#         L.append(i)
#         count += 1

sum = float(str(reduce(add, L)))
print(sum, count)
print (format (sum / count, '.3f'))