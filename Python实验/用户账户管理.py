import os

def menu():
    print('欢迎使用账户管理程序')
    print('1.用户注册')
    print('2.用户登录')
    print('3.用户注销')
    print('4.修改密码')
    print('5.退出')

def register():
    with open('info.txt', 'a', encoding = 'UTF-8') as f:
        new_user = input('请输入注册用户名：\n') + ':'
        new_password = input('请输入注册密码：\n') + '\n'
        f.write(new_user)
        f.write(new_password)

def login():
    with open('info.txt', 'r', encoding = 'UTF-8') as f:
        f.seek(0)
        if len(f.read()) == 0:
            print('当前无数据，请先注册\n')
        else:
            in_user = input('请输入登录用户名：\n')
            in_password = input('请输入登录密码：\n')
            with open('info.txt', 'r', encoding = 'UTF-8') as f:
                for i in f.readlines():
                    if in_user in i and in_password in i:
                        print('登陆成功\n')
                        break
                    else:
                        print('输入的密码有误，请重新输入\n')
                        break
                else:
                    print('当前无数据，请先注册\n')

def cancel():
    with open('info.txt', 'r', encoding = 'UTF-8') as f:
        f.seek(0)
        if len(f.read()) == 0:
            print('注销的用户不存在\n')
        else:
            del_user = input('请输入用户名：\n')
            del_password = input('请输入要注销用户的密码：\n')
            with open('info.txt', 'r', encoding = 'UTF-8') as f:
                for i in f.readlines():
                    if del_user in i and del_password in i:
                        with open ('info.txt', 'r', encoding = 'UTF-8') as f:
                            lines = f.readlines()
                        with open ('info.txt', 'w', encoding = 'UTF-8') as f:
                            for i in lines:
                                if del_user in i and del_password in i:
                                    continue
                                f.write(i)
                        print('注销成功\n')
                        break
                else:
                    print('用户名或密码不正确\n')

def modify():
    with open('info.txt', 'r', encoding = 'UTF-8') as f:
        f.seek(0)
        if len(f.read()) == 0:
            print('要修改密码的用户不存在\n')
        else:
            modify_user = input('请输入用户名：\n')
            modify_password = input('请输入旧密码：\n')
            with open('info.txt', 'r', encoding = 'UTF-8') as f:
                for i in f.readlines():
                    if modify_user in i and modify_password in i:
                        new_modify_password = input('请输入新密码\n')
                        with open ('info.txt', 'r', encoding = 'UTF-8') as f:
                            lines = f.readlines()
                        with open ('info.txt', 'w', encoding = 'UTF-8') as f:
                            for i in lines:
                                if modify_user in i and modify_password in i:
                                    f.writelines(modify_user + ':')
                                    f.writelines(new_modify_password + '\n')
                                    continue
                                f.write(i)
                        print('修改成功\n')
                        break
                else:
                    print('用户名或密码不正确\n')

def welcome():
    while True:
        menu()
        key = input('请选择功能：\n')
        if key == '1':
            register()
        elif key == '2':
            login()
        elif key == '3':
            cancel()
        elif key == '4':
            modify()
        elif key == '5':
            break

if __name__ == '__main__':
    welcome()