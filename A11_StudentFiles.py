import os

path = input("Directory : ")
os.chdir(f"{path}")

def Add():
    name = input("Name : ")
    rollno = input("Roll no. : ")
    div = input("Division : ")
    addr = input("Address : ")

    with open (f"{name}.txt",'w') as f:
        f.write(f"Name : {name}\nRoll No. : {rollno}\nDivision : {div}\nAddress : {addr}")

def Del():
    name = input("Name : ")
    os.remove(f"{name}.txt")

def Open():
    name = input("Name : ")
    for i in os.listdir():
        if(f"{name}.txt"== i):
            with open(f"{name}.txt",'r') as f:
                return print(f.read())
    return print("Student not present in record")
