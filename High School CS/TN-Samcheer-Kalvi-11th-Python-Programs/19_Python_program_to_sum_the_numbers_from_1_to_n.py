n = int(input("\nEnter The Value of n : "))
sum = 0

for i in range(1, n + 1):
    sum += i

print("\nThe sum of 1 to {:,} is {:,}".format(n, sum))

#Alternatively - print(f"The sum of 1 to {n} is {sum}.")
