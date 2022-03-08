a  = float(input('请输入第一个数：'))
b  = float(input('请输入第二个数：'))
op = input('请选择运算符:+ - * /：')
if op == '+':
    print (a + b)
elif op == '-':
    print (a - b)
elif op == '*':
    print (a * b)
elif op =='/':
    if b != 0:
        print(a / b)
    else:
        print('除数不能为0')
