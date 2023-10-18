sales = int(input("Enter Sales amount : "))
grade = str(input("Enter Grade : "))
if sales > 5000:
    commission = sales * 0.10
    print("\nCommision : " ),int(commission)
else:
    commission = sales * 0.05
    print("\nCommission : " ),int(commission)

print("\nGood Job ...")
