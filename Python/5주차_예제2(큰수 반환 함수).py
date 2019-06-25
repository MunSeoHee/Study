a = int(input("정수를 입력하시오:"))
b = int(input("정수를 입력하시오:"))


def find_max (a, b):
    if a>b:
        return a
    else :
        return b

print(find_max(a,b))
