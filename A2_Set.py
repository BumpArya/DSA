class set:
    def __init__(self):
        self.list = []

    def Iterator(self):
        return self.list

    def Size(self):
        return len(self.list)

    def Contains(self,ele):
        if ele in self.list:
            return True
        else:
            return False

    def Add(self,ele):
        if self.Contains(ele):
            print("Set dosen't allow duplicate values.")
        else:
            self.list.append(ele)
        return self.list

    def Remove(self,ele):
        if self.Contains(ele):
            self.list.remove(ele)
        else:
            print("Element not present in set.")
        return self.list


def Union(A,B):
    Union = A
    for i in B.Iterator():
        if not(Union.Contains(i)):
            Union.Add(i)
    return Union

def Intersection(A,B):
    Intersection = set()
    U = Union(A,B)
    for i in U.Iterator():
        if A.Contains(i) and B.Contains(i):
            Intersection.Add(i)
    return Intersection

# A - B
def Diffrence(A,B): 
    I = Intersection(A,B)
    for i in I.Iterator():
        A.Remove(i)
    return A




X = set()
X.list = [1,2,3,4,5,6]
Z = set()
Z.list = [1,2,3,4,5,7]
Y = set()
Y.list = [5,6,7,8,9,10]        
for i in Diffrence(X,Y).Iterator():
    print(i)

