stu_info = []

def print_menu():
    print('==============================')
    print('学生管理系统 V10.0')
    print('1.添加学生信息')
    print('2.删除学生信息')
    print('3.修改学生信息')
    print('4.查询所有学生信息')
    print('0.退出系统')
    print('==============================')

def add_stu_info():
    
    new_name = input('请输入新学生的姓名:')
    new_sex = input('请输入新学生的性别:')
    new_tele = input('请输入新学生的手机号码:')
    new_info = {'name':new_name, 'sex':new_sex, 'tele':new_tele}
    stu_info.append(new_info)

def del_stu_info():
    del_info = int(input('请输入要删除的序号：')) - 1
    # stu_info.remove(del_info)
    del stu_info[del_info]
    print('删除成功！')

def modify_stu_info():
    modeif_info = int(input('请输入要修改学生的序号:')) - 1
    if modeif_info == -1:
        print('输入错误，请重新输入！')
        modify_stu_info()
    modeif_name = input('请输入要修改学生的姓名:')
    modeif_sex = input('请输入要修改学生的性别:(男/女)')
    modeif_tele = input('请输入要修改学生的手机号码:')
    stu_info[modeif_info]['name'] = modeif_name
    stu_info[modeif_info]['sex'] = modeif_sex
    stu_info[modeif_info]['tele'] = modeif_tele


def show_stu_info():
    print('学生的信息如下：')
    print('==============================')
    print('序号    姓名    性别    手机号码')
    n = 1
    for i in stu_info:
        print(f"{n}       {i['name']}     {i['sex']}      {i['tele']}")
        n = n + 1

def main():
    while True:
        print_menu()
        select = input('请输入功能对应的数字：')
        if select == '1':
            add_stu_info()
        elif select == '2':
            del_stu_info()
        elif select == '3':
            modify_stu_info()
        elif select == '4':
            show_stu_info()
        elif select == '0':
            choice = input('亲，真的要退出么？(Yes or No):')
            if choice == ('YES' and 'yes'):
                print('谢谢使用！')
                break
            elif choice == ('NO' and 'no'):
                main()

if __name__ == '__main__':
    main()