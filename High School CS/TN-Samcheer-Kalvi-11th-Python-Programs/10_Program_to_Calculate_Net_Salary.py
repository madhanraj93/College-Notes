basic = input("Enter Basic Pay : ")
da = input("Enter D.A : ")
hra = input("Enter H.R.A : ")
gross = basic + da + hra
gpf = (basic + da) * 0.10
tax = gross * 0.10
np = gross - (gpf + tax)
print("Basic Pay              : ".center(30) + str(basic))
print("Dearness Allowance     : ".center(30) + str(da))
print("House Rent Allowance   : ".center(30) + str(hra))
print("Gross Pay              : ".center(30) + str(gross))
print("G.P.F                  : ".center(30) + str(gpf))
print("Income Tax             : ".center(30) + str(tax))
print("Net Pay                : ".center(30) + str(np))
