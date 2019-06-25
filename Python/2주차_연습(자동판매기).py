price = int(input("물건값을 입력하시오:"))
num1000 = int(input("1000원 지폐 개수:"))
num500 = int(input("500원 동전 개수:"))
num100 = int(input("100원 동전 개수:"))
money = num1000*1000 + num500*500 + num100*100
pay = money - price
pay500 = pay//500
pay -= pay500*500
pay100 = pay//100
pay-=pay100*100
pay10=pay//10
pay -= pay10*10

print("500원 = ", pay500, "100원 = ", pay100, "10원 = ", pay10, "1원 = ", pay)
