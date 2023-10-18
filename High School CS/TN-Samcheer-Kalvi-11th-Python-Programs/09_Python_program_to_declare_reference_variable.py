#We cannot create referenece variable in Python

num = 100
temp = num
print("The value of num = " + str(num))
print("The value of temp = " + str(temp))

#Proof
print(id(num))
print(id(temp))


#Alternatively, we can use self crafted container
class Value(object):
    def __init__(self, value): self.value = value

y = Value(7)
x=y
x.Value = 8
print (y.value)