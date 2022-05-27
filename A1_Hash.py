def h(key,table):
    m = len(table)
    loc = key%m
    return loc



def linPro(table,key):
    loc = h(key,table)
    m = len(table)
    i = 0
    while(table[loc]!=0):
        loc = (h(key,table)+i)%m
        i+=1
    table[loc]=key
    return table

def quadPro(table,key):
    loc=h(key,table)
    m=len(table)
    i=0
    while(table[loc]!=0):
        loc=(h(key,table)+(i*i))%m
        i+=1
    table[loc]=key
    return table


table = [0,0,0,0,0,0,0]
keys = [50,700,76,85,92,73,101]        

# for i in keys:
#     quadPro(table,i)
# print(table)

for i in keys:
    linPro(table,i)
print(table)






