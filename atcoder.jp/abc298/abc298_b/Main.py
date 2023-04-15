N=int(input())

A=[list(map(int,input().split())) for _ in range(N)]

#print(A)


B=[list(map(int,input().split())) for _ in range(N)]

num=0

for i in range(N):
    for j in range(N):
        if A[i][j] == 1:
            num+=1
if num==0:
    exit(print("Yes"))

count=0
for i in range(N):
    for j in range(N):
        if A[i][j] == 1:
            if B[i][j]==1:
                count+=1
                if count==num:
                    exit(print("Yes"))
                pass
            else:
                break

count=0
for i in range(N):
    for j in range(N):
        if A[N-1-j][i] == 1:
            if B[i][j]==1:
                count+=1
                if count==num:
                    exit(print("Yes"))
                pass
            else:
                break
count=0
for i in range(N):
    for j in range(N):
        if A[N-1-i][N-1-j] == 1:
            if B[i][j]==1:
                count+=1
                if count==num:
                    exit(print("Yes"))
                pass
            else:
                break
count=0
for i in range(N):
    for j in range(N):
        if A[j][N-1-i] == 1:
            if B[i][j]==1:
                count+=1
                if count==num:
                    exit(print("Yes"))
                pass
            else:
                break

print("No")