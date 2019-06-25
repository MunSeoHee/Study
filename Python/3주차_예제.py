fresh = input("사과 상태 (신선, 안신선):")
pay = int(input("사과 가격:"))

if fresh == '신선':
    if pay>=1000:
        print("5개만 산다")

    elif pay<1000:
        print("10개 산다")

else :
    print("사지 않는다")
