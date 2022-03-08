import random
result = random.randint(1, 100) #random.randint取到值的是闭区间
print('请设定猜数的数值：\n', result)
for i in range(1, 6):
    guess = input(f'请输入第{i}次猜测的数字：')
    if guess.isdigit():
        guess = int(guess)
        if 1 <= guess <= 100:
            if guess == result:
                print(f'恭喜你用了{i}次猜对了')
                break
            elif guess > result:
                print('很遗憾，你猜大了')
            elif guess < result:
                print('很遗憾，你猜小了')
        else :
            print('请输入1 - 100之间的数字')
    else:
        print('请输入1 - 100之间的数字')