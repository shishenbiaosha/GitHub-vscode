a = int(input('请输入要转换的数据：\n'))
operation = input('请选择转换进制：二 、八、十、十六\n')
if operation == '2':
    print('进制转换后的数据为：', bin(a))
if operation == '8':
    print('进制转换后的数据为：', oct(a))
if operation == '10':
    print('进制转换后的数据为：', a)
if operation == '16':
    print('进制转换后的数据为：', hex(a))