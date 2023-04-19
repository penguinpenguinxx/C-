def eratosthenes_sieve(n):  #篩_計算量O(NloglogN)とても高速、nで指定した値までTrue ,Falseで返す
    is_prime = [True]*(n + 1)
    is_prime[0] = is_prime[1] = False
    for p in range(2, n + 1):
        if is_prime[p]:
            for q in range(2*p, n + 1, p):
                is_prime[q] = False
    return is_prime


n=10**5
P=eratosthenes_sieve(n)
#print(len(P))
num=[0]*(10**5+1)


for i in range(1,10**5,2):
    if P[i]:
        if P[(i+1)//2]:
            num[i]+=1
#print(num)

Sum=[0]*(10**5+1)

count=0
for i in range(len(num)):
    count+=num[i]
    Sum[i]=count
#print(Sum)

Q=int(input())

for i in range(Q):
    r,l=map(int,input().split())
    print(Sum[l]-Sum[r-1])