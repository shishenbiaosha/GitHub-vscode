#商业贷款：五年以下（含五年）的贷款利率是4.75%，五年以上的贷款利率是4.90%
#公积金贷款：五年以下（含五年）的贷款利率是2.75%，五年以上的利率是3.25%
#住房公积金贷款最多能贷款60万元
choice = int(input('请选择贷款类型：1.商业贷款  2.公积金贷款  3.组合贷款\n'))
money = int(input('请输入贷款金额（万）\n')) * 10000
year = int(input('请选择期限（年）：5、10、15、20、25、30\n'))
if choice == 1:
    if year == 5:
        rate_year = 4.75 * 0.01
        rate_month = rate_year / 12
        supply_month = money * (rate_month * (1 + rate_month) ** 60) / (((1 + rate_month) ** 60) - 1)
        sum = supply_month * 5 * 12
        interest = sum - money
        print('每月月供参考（元）：%.2f元' % supply_month)
        print('支付利息（元）：%.2f元' % interest)
        print('还款总额（元）：%.2f元' % sum)
    else:
        rate_year = 4.90 * 0.01
        rate_month = rate_year / 12
        supply_month = money * (rate_month * (1 + rate_month) ** (year * 12)) / (((1 + rate_month) ** (year * 12)) - 1)
        sum = supply_month * year * 12
        interest = sum - money
        print('每月月供参考（元）：%.2f元' % supply_month)
        print('支付利息（元）：%.2f元' % interest)
        print('还款总额（元）：%.2f元' % sum)
if choice == 2:
    if year == 5:
        rate_year = 2.75 * 0.01
        rate_month = rate_year / 12
        supply_month = money * (rate_month * (1 + rate_month) ** 60) / (((1 + rate_month) ** 60) - 1)
        sum = supply_month * 5 * 12
        interest = sum - money
        print('每月月供参考（元）：%.2f元' % supply_month)
        print('支付利息（元）：%.2f元' % interest)
        print('还款总额（元）：%.2f元' % sum)
    else:
        rate_year = 3.25 * 0.01
        rate_month = rate_year / 12
        supply_month = money * (rate_month * (1 + rate_month) ** (year * 12)) / (((1 + rate_month) ** (year * 12)) - 1)
        sum = supply_month * year * 12
        interest = sum - money
        print('每月月供参考（元）：%.2f元' % supply_month)
        print('支付利息（元）：%.2f元' % interest)
        print('还款总额（元）：%.2f元' % sum)
if choice == 3:
    if year == 5:
        rate_year1 = 4.75 * 0.01
        rate_month1 = rate_year1 / 12
        rate_year2 = 2.75 * 0.01
        rate_month2 = rate_year2 / 12
        supply_month1 = (money - 60 * 10000) * (rate_month1 * (1 + rate_month1) ** 60) / (((1 + rate_month1) ** 60) - 1)
        supply_month2 = (60 * 10000) * (rate_month2 * (1 + rate_month2) ** 60) / (((1 + rate_month2) ** 60) - 1)
        sum1 = supply_month1 * 5 * 12
        sum2 = supply_month2 * 5 * 12
        interest1 = sum1 - (money - 60 * 10000)
        interest2 = sum2 - 60 * 10000
        print('每月月供参考（元）：%.2f元' % (supply_month1 + supply_month2))
        print('支付利息（元）：%.2f元' % (interest1 + interest2))
        print('还款总额（元）：%.2f元' % (sum1 + sum2))
    else:
        rate_year1 = 4.90 * 0.01
        rate_month1 = rate_year1 / 12
        rate_year2 = 3.25 * 0.01
        rate_month2 = rate_year2 / 12
        supply_month1 = (money - 60 * 10000) * (rate_month1 * (1 + rate_month1) ** (year * 12)) / (((1 + rate_month1) ** (year * 12)) - 1)
        supply_month2 = (60 * 10000) * (rate_month2 * (1 + rate_month2) ** (year * 12)) / (((1 + rate_month2) ** (year * 12)) - 1)
        sum1 = supply_month1 * year * 12
        sum2 = supply_month2 * year * 12
        interest1 = sum1 - (money - 60 * 10000)
        interest2 = sum2 - 60 * 10000
        print('每月月供参考（元）：%.2f元' % (supply_month1 + supply_month2))
        print('支付利息（元）：%.2f元' % (interest1 + interest2))
        print('还款总额（元）：%.2f元' % (sum1 + sum2)) 