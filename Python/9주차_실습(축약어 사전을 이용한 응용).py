table = {"B4":"Before",
         "TX":"Thanks",
         "BBL":"Be Back Later",
         "BCNU":"Be Seeing You",
         "HAND":"Have A Nice Day"}

message = input("번역할 문장을 입력하시오:")
words = message.split() #입력한 문장내용으로 문자 단어별 list 구축
result = ""
for word in words:
    if word in table:
        result += table [word] + " "
    else:
        result += word

print(result)
