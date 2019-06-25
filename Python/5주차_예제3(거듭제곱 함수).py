a = int(input("정수를 입력하시오:"))
b = int(input("정수를 입력하시오:"))

def x (a,b):
    result = 1
    for i in range (b):
        result = result*a

    return result

print(x(a,b))
