n = int(input())
for i in range(n):
    N,X=map(int,input().split())
    height = list(map(int,input().split()))
    height.sort()
    FirstRow = height[:N]
    count = 0
    SecondRow = height[N:]
    for j in range(N):
        if(SecondRow[j]-FirstRow[j]>=X):
            count +=1
        else:
            print("No")
            break
            
    if(count==N):
        print("Yes")
        




#-------------------------------------
# 1 5 2 3 3 1 5 1 3 4
# ascending order
# 1 1 1 2 3 3 3 4 5 5
# n = 5
# 1 1 1 2 3 
# 3 3 4 5 5
