def prim(Graph):
    node = 0
    U=[]
    while(len(U)<len(Graph)):
        U.append(node)
        min = 1000
        for i in range(len(Graph)):
            if Graph[node][i] < min and Graph[node][i]!=0 and (i not in U):
                min = Graph[node][i]
                node = i

    return U

Graph = [[0, 2, 3, 0],[2, 0, 0, 2],[3, 0, 0, 6],[0, 2, 6, 0]]

print(prim(Graph))
print(len(Graph))