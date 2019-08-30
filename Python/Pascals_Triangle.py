
n=int(input("Enter the Level: "))
i,j = (n, n) 
a = [[0 for k in range(i)] for l in range(j)] 
a[0][0]=1
for i in range(1,n-1):
    for j in range(0,n):
        if(j==0):
            a[i][j]=0+a[i-1][j]
        else:
            a[i][j]=a[i-1][j-1]+a[i-1][j]
sp=n
for i in range(n-1):
    for k in range(sp):
        print("  ",end="")
    sp=sp-1
    for j in range(n-1):
        if(a[i][j]==0):
            continue
        else:
            print(a[i][j],' ',end='')
    print("\n")
