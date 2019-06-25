sec = int(input("초를 입력하시오"))
minute = sec//60
#sec = sec - minute*60
sec = sec%60
print(minute,"분", sec,"초")
