# 1.输入一个字符串，统计字符串中每个字符出现的次数，并打印出结果。
Str = input("请输入一串字符:")
resoult = {}  # 定义一个空字典
for i in Str:  # 遍历输入的字符串，以键值对的方式存储在字典中
    resoult[i] = Str.count(i)  
for key in resoult:  # 遍历字典，格式化输出结果
    print(f'"{key}":{resoult[key]}次')

# 2.编写程序，计算下列分段函数y=f(x)的值。
# y=-x+2.5; 0 <= x < 5
# y=2-1.5(x-3)(x-3); 5 <= x < 10
# y=x/2-1.5; 10 <= x < 20
x = float(input())
if 0 <= x < 5:
    y = -x + 2.5
elif 5 <= x < 10:
    y = 2 - 1.5 * (x-3) * (x-3)
elif 10 <= x < 20:
    y = x / 2 - 1.5
print(f'{y}')
print("%.3f" % y)

# 3.输入月份，在上面字符串中截取适当的子串来输出特定月份，例如输入2，则输出Feb
months = "JanFebMarAprMayJunJulAugSepOctNovDec"
n = input("请输入月份数(1-12)：")
pos = (int(n) - 1) * 3
monthAbbrev = months[pos : pos + 3]
print("月份简写是" + monthAbbrev + ".")

# 4.编写程序实现给定3个正整数，求前两个数之间是第三个数倍数的所有数的和。
x = int(input('第一个数:'))
y = int(input('第二个数:'))
z = int(input('第三个数:'))
sum = 0
while x <= y:
    if x % z == 0:
        sum = sum + x
    x += 1
print(f'{sum}')

# 5.编写程序，根据输入考生的分数，划定学生等级，等级标准如下所示：
score = int(input("请输入成绩:"))
if score >= 90:
    print("优")
elif score >= 80:
    print("良")
elif score >= 70:
    print("中")
elif score >= 60:
    print("及格")
else:
    print("不及格")

# 6.分别输入若干个单词，每个一行，单词有小写字母组成，统计每个单词出现的次数，并输出。如下所示：
# 输入：
# about
# send
# about
# me
# 输出：
# 2 about
# 1 me
# 1 send
str = ''
dict = {}
while True:
    key = input('')
    if key == '0':
        break
    str = str + key
    dict[key] = str.count(key)
for key, value in dict.items():
    print(value, key, sep = ' ')

# 7.从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件中保存。
fp = open('test.txt', 'w')
a_str = input("请写入字符串：")
fp.write(a_str.upper())
fp = open('test.txt', 'r')
print(fp.read())
fp.close()

# 8.编写函数，判断一个数字是否为素数，是则返回字符串YES，否则返回字符串NO
x = int(input("请输入一个正整数："))
for i in range(2, x):
    if x % i == 0:
        print("这个数不是素数！")
        break
else:
    print("这个数是素数！")

# 9.编写程序，生成包含20个随机数的列表，然后将前10个元素升序排列，后10个元素降序排列，并输出结果。
# import random
from random import sample
# x = [random.randint(1,100) for i in range(20)]
x = sample(range(100), 20)
a = sorted(x[:10])
b = sorted(x[10:], reverse = True)
x = a + b
print(x)

# 10.根据邮件的重量和用户是否选择加急计算邮费。计算规则：重量在1000克以内(包括1000克), 基本费8元。超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；如果用户选择加急，多收5元。
num, str = map(str, input().split())
num = int(num)
if str == "y":
    if (num - 1000) % 500 > 0:
        price = 8 + 5 + 4 + (((num - 1000) // 500) * 4)
    if (num - 1000) % 500 == 0:
        price = 8 + 5 + ((num - 1000) // 500) * 4
    if (num -  1000) % 500 < 0:
        price = 8 + 5 + 4
    if 0 < num <= 1000:
        print(13)
if str == "n":
    if (num - 1000) % 500 > 0:
        price = 8 + 4 + (((num - 1000) // 500) * 4)
    if (num - 1000) % 500 == 0:
        price = 8 + ((num - 1000) // 500) * 4
    if (num - 1000) % 500 < 0:
        price = 8 + 4
    if 0 < num <= 1000:
        price = 8
print(price)

# 11.现在有一个文件price.csv，内容如下，读入该文件，然后把再写入到priceout.csv中，格式不变。
import csv
list = []
with open('price.csv', 'r', encoding = 'UTF-8') as fp:
    reader = csv.reader(fp)
    for i in reader:
        list.append(i)
with open('priceout.csv', 'w', encoding = 'UTF-8', newline = '') as fp:
    csv_writer = csv.writer(fp)
    csv_writer.writerows(list)

# 12.求整数的和与均值：读入n个整数，求它们的和与均值。
n = int(input())
sum = 0
for i in range(1, n + 1):
    num = int(input())
    sum += num
print("{} {:.2f}".format(sum, sum / n))

# 13.一个句子中有多个单词，单词之间可能有一个或多个空格。给定一个字符，请计算该字符在每个单词中的出现次数。
zf = input().lower()
jz = input().split()
for i in jz:
    sum = 0
    for j in range(len(i)):
        if zf == i[j].lower():
            sum += 1
    print(sum, end=" ")

# 14.输入一个字符串，输出该字符串是否是回文串。回文串是指顺读和倒读都一样的字符串。比如：abba，cccdeedccc都是回文字符串。
Str = input()
if Str == Str[::-1]:
    print('yes')
else:
    print('no')

# 15.编写程序，生成一个包含20个随机整数的列表，然后对其中偶数下标的元素进行降序排列，奇数下标的元素不变。（提示：使用切片。）
import random
list=[]
for i in range(20):
    temp = random.randint(1,100)
    list.append(temp)
list_Ou=[]
for i in range(20):
    if(i % 2 == 0):
        list_Ou.append(list[i])
list_Ou = sorted(list_Ou, reverse = True)
count = 0
for i in range(20):
    if(i % 2 == 0):
        list[i] = list_Ou[count]
        count += 1
print(list)