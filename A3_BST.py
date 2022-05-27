class BST :
    
    def __init__(self,key,): # Constructor
        self.key = key
        self.left = None
        self.right = None

    def insert(self,data):
        if self.key is None:
            self.key=data
            return
        elif self.key >= data:
            if self.left:
                self.left.insert(data)         
            else:
                self.left = BST(data)
        elif self.key < data:
            if self.right:
                self.right.insert(data)
            else:
                self.right = BST(data) 
    
def MaxHeight(root): 
    if (root == None):
        return -1
            
    L = MaxHeight(root.left)
    R = MaxHeight(root.right)

    if(L>R):
        return L+1
    if(R>L):
        return R+1
    if(L==R):
        return L+1    

def printTraversal(tree):
    print(tree.key)
    if(tree.right):
        printTraversal(tree.right)
    else:
        pass
    if(tree.left):
        printTraversal(tree.left)
    else:
        pass
    
def min(tree):
    node = tree.left
    while(node.left):
        node = node.left
    return node.key

def swap(node):
    temp = node.left
    node.left = node.right
    node.right = temp

def traversalSwap(tree):
    swap(tree)
    if(tree.right):
        traversalSwap(tree.right)
    else:
        pass
    if(tree.left):
        traversalSwap(tree.left)
    else:
        pass

list = [20,4,30,4,1,5,6,8]
root = BST(10)
for i in list:
    root.insert(i)

print(MaxHeight(root+1))
print(min(root))
printTraversal(root)
print("---------------------------")
traversalSwap(root)
print("---------------------------")
printTraversal(root)


