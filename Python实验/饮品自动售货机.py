def show_goods():
    print('饮 品 自 动 售 货 机')
    goods = {'可口可乐':'2.5元', '百事可乐':'2.5元', '冰红茶':'3元', '脉动':'3.5元', '果缤纷':'3元', '绿茶':'3元', '茉莉花茶':'3元', '尖叫':'2.5元'}
    for key, value in goods.items():
        print(key, value, sep = ':')
    print('输入q完成购买')
    total()

def total():
    sum = 0
    while True:
        choice = input('请输入购物商品：')
        if choice == 'q':
            break
        if choice != 'q':
            count = int(input('请输入购物数量：'))
        if choice == '可口可乐':
            sum += 2.5 * count
        elif choice == '百事可乐':
            sum += 2.5 * count
        elif choice == '冰红茶':
            sum += 3 * count
        elif choice == '脉动':
            sum += 3.5 * count
        elif choice == '果缤纷':
            sum += 3 * count
        elif choice == '绿茶':
            sum += 3 * count
        elif choice == '茉莉蜜茶':
            sum += 3 * count
        elif choice == '尖叫':
            sum += 2.5 * count
    print(f'需要支付金额：{sum}元')

if __name__ == "__main__":
    show_goods()
    