#!/usr/bin/env python3

import random

def divide_input(input_num):
    num1 = input_num % 10
    num2 = input_num // 10
    return num1, num2

def check_win(win_num, input_num):
    # 조건1: 정확한 일치
    if win_num == input_num: return '정확한', 10000000

    flag = 0
    div_win_num = divide_input(win_num)
    div_input_num = divide_input(input_num)

    # 조건2: 순서 무관 두자리 일치
    if div_win_num[0] == div_input_num[1] and div_win_num[1] == div_input_num[0]:
        return '두자리 숫자', 3000000

    # 조건3: 순서 무관 한자리 일치
    for i in div_win_num:
        for j in div_input_num:
            if i == j:
                flag += 1
                break
    if flag == 1:
        return '한자리 숫자', 1000000

    return '불', 0

def main():
    input_str = input('복권 예상번호를 입력하세요(두 자릿수): ')
    win_num = random.randrange(0,99)
    print('복권번호는 %2d 입니다' % win_num)
    jackpot_str, jackpot_num = check_win(win_num, int(input_str))
    print('%s 일치: %s원을 획득하셨습니다.' % (jackpot_str, '{:,}'.format(jackpot_num)))

if __name__=="__main__":
    main()
