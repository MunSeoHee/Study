file = open("sales", "r")
files = open("summary", "w")

sum = 0
count = 0
line="r"

while line != "":
    line = float(file.readline())
    sum += line
    count+=1

files.write("총매출 = "+str(sum))
files.write("평균 일매출 = "+str(sum/count))
    

file.close()
files.close()
