n = int(input())
for i in range(n):
    temp = input()
    if (temp[0]=='Y' or temp[0]=='y') and (temp[1]=='E' or temp[1]=='e') and (temp[2]=='S' or temp[2]=='s'):
        print("YES")
    else:
        print("NO")