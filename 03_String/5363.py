count = int(input())
w = []
for i in range(count) :
    word = input().split()
    w.append(word)
for i in range(count) :
    print(" ".join(w[i][2:len(w[i])]) +" "+ " ".join(w[i][0:2]))