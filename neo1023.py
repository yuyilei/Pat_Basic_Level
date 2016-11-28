# coding: utf-8

def min_num(lit):
    """
    组最小数
    lit是一个列表, 元素是每个下标出现的次数
    """
    for i, num in enumerate(lit):
        if num != 0 and i != 0:
            print i,
            num -= 1
            break
    if lit[0]:
        for i in range(lit[0]):
            print 0,
    for i, num in enumerate(lit[1:]):
        for j in range(num):
            print i+1,

if __name__ == "__main__":
    nums = raw_input()
    lit = []
    str_lit = nums.split()
    for str_num in str_lit:
        lit.append(int(str_num))
    print lit
    min_num(lit)
