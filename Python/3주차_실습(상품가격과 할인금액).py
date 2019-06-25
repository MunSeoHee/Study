pay = int(input("구입 금액을 입력하시오:"))

if pay >= 100000:
    pay = pay * 0.95

print("지불 금액은", pay,"입니다.")
