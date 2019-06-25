char = input("영어단어 입력")
sum = 0
for i in char:
    if "a" <= i <= "z":
        sum += ord(i) - ord("a") + 1
    if "A" <= i <= "Z":
        sum += ord(i) - ord("A") + 1

print(sum)

