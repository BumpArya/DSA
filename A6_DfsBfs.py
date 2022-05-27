def DFS(adjList, start, visited=[]):
    visited.append(start)
    for next in adjList[start]:
        if(next not in visited):
            DFS(adjList, next, visited)

    return visited

adjList = {0: [1, 2, 3], 1: [0, 2], 2: [0, 1, 4], 3: [0], 4: [2]}

print(DFS(adjList, 0, visited=[]))

def BFS(adjList, visited=[]):
    for i in adjList:
        if i not in visited:
            visited.append(i)
        for j in adjList[i]:
            if j not in visited:
                visited.append(j)

    return visited


print(BFS(adjList, visited=[]))
