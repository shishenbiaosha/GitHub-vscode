text = input()
print('1.删除空格')
print('2.英文标点替换')
print('3.首字母大写')
print('4.退出')
while True:
    option = input('请输入功能选项：\n')
    if option == '1':
        text = text.replace(' ', '')
        print(text)
    elif option == '2':
        text = text.replace(",", "，")
        text = text.replace(".", "。")
        text = text.replace(":", "：")
        text = text.replace(";", "；")
        text = text.replace("!", "！")
        text = text.replace("?", "？")
        print(text)
    elif option == '3':
        text = text.upper()
        print(text)
    elif option == '4':
        break
