import time 
set = 50
print('开始下载'.center(52, '='))
for i in range (51):
    a = '*' * i
    b = '.' * (set - i)
    c = (i / set) * 100
    print('\r{:.0f}%[{}{}]'.format(c, a, b), end = '')
    time.sleep(0.1)
print('\n' + '下载完成'.center(52, '='))