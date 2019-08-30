#to keep track of both largest and sec_largest

li=[]

largest=None
sec_lar=None
for element in li:
    if largest==None:
        largest=element
    if element>largest:
        largest=element


for element in li:
    if sec_lar==None:
        sec_lar=element
    if element>largest and sec_lar<=element:
        sec_lar=element

print("Second Largest : ",sec_lar)

#Another metod
#To sort list in descending order and output the second element in list

li = [2,2,1]
print(li)
for i in range(len(li)):
    for j in range(len(li)-i):
        if(j<len(li)-1):
            if(li[j]>li[j+1]):
                print(end="")
            else:
                temp=li[j+1]
                li[j+1]=li[j]
                li[j]=temp
print(li)

print("Second Largest : ",li[1])




