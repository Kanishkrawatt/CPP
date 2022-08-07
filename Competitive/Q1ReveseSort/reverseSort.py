def FindCost(List,initialPos,n):               
    min =List[initialPos]                      
    loc = initialPos                           
    cost = 0
    for i in range(initialPos+1,n):
        if(min > List[i]):
            min = List[i]
            loc = i
    for j in range(initialPos,int(loc/2)+1):
        if(j !=loc-j):
            temp = List[j]
            List[j] = List[loc-j]
            List[loc-j] = temp
    cost += loc+1-initialPos
    return cost

n = int(input())
for i in range(n):
    sizeOfList = int(input())
    GivenList = list(map(int, input().split()))
    cost = 0
    print("GivenList :" ,GivenList)
    for j in range(sizeOfList-1):
        cost +=FindCost(GivenList,j,sizeOfList)
        
    print("Case #"+str(i+1)+":"+str(cost))


# Example : 4 2 1 3
# 1st Iteration
# 4 2 1 3 (List = GivenList ,initialPos = 0,n=4)
# 4  (loc = 0),cost =0
# ForLoop(from 1 to 3) 
     #1.  4 > 2  true  : min = 2 loc = 1
     #2.  2 > 1  true  : min = 1 loc = 2
     #3.  1 > 3  false
# ForLoop(from 0 to 1):
     #0. 
        #a. List[0] = temp = 4
        #b. List[0] = list[2-0] = 1
        #c. List[2] = 4   (List : 1 2 4 3)
     #1. 
        #Exit (j == loc -j)
# COST += 3
# 2nd Iteration
# 1 2 4 3 (List = GivenList, initialPos = 1 ,n=4)
# 2 (loc =1 ),cost =0
# ForLoop(from 2 to 3)
     #2.  2 > 4  False:
     #3.  2 > 3  False:
# ForLoop(from 1 to 1):
     # Exit 
# COST += 1
# 3rd Iteration
# 1 2 4 3 
# 4 (List = GivenList, initialPos = 2,n =4)
# ForLoop(from 3 to 3)
    #1.  4 < 3  true  : min = 3 loc = 3
# ForLoop(from 2 to 2):
    #2. Exit
# COST += 2