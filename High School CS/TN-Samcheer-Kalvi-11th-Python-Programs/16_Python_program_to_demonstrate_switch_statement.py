# There is no Switch or Case statement in python

# In Python we can use if-elif-else (or) dictionary mapping

# 1. if-elif-else

print("\nMethod 1: if-elif-else")

num = int(input("\nEnter week day in number : "))

if num == 1:
    print("\nMonday")
elif num == 2:
    print("\nTuesday")
elif num == 3:
    print("\nWednesday")
elif num == 4:
    print("\nThursday")
elif num == 5:
    print("\nFriday")
elif num == 6:
    print("\nSaturday")
elif num == 7:
    print("\nSunday")
else :
    print("\nWrong input...")

print("\n**********************************")

# 2. Dictionary mapping

print("\nMethod 2: Dictionay mapping")

def monday():
    return "\nMonday"
def tuesday():
    return "\nTuesday"
def wednesday():
    return "\nWednesday"
def thursday():
    return "\nThursday"
def friday():
    return "\nFriday"
def saturday():
    return "\nSaturday"
def sunday():
    return "\nSunday"
def default():
    return "\nWrong Input"


switcher = {
    1: monday,
    2: tuesday,
    3: wednesday,
    4: thursday,
    5: friday,
    6: saturday,
    7: sunday,
}


def switch(num):
    return switcher.get(num, default)()

print(switch(1))