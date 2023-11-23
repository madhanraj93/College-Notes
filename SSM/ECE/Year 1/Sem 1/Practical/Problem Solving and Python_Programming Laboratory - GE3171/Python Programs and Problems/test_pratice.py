ch = input("y/n")
while (ch == 'y'):
    print("1,2,3,4,5,6,7")
    sel = int(input("Enter the choice: "))

    if (sel == 1):
        def sumDigits(num):
            return 0 if num == 0 else int(num % 10) + sumDigits(int(num / 10))


        in_for_sum = int(input("Enter the numbers to sum: "))
        print(sumDigits(in_for_sum))

    elif (sel == 2):
        def coun(num):
            count = 0
            while (num > 0):
                count += 1
                num //= 10
            print(count)


        in_for_cou = int(input("Enter numbers to count: "))
        coun(in_for_cou)

    elif (sel == 3):
        def rev(num):
            rev = 0
            while (num != 0):
                digit = num % 10
                rev = rev * 10 + digit
                num //= 10
            print(rev)
        in_for_re = int(input("Enter the number: "))
        rev(in_for_re)

    elif (sel == 4):
        def palin(num):
            rev = 0
            n = 0
            temp = n
            while (n > 0):
                digit = num % 10
                rev = rev * 10 + digit
                n // 10
            if (temp ==  rev):
                print("Palin")
            else:
                print("Not Palin")
        in_for_pali = int(input("Enter the number for palindrome: "))
        palin(in_for_pali)

    elif (sel == 5):
        def armstr(nums):
            sum = 0
            temp = nums
            while temp > 0:
                digit = temp % 10
                sum += digit ** 3
                temp //= 10
            if nums == temp:
                print("arms")
            else:
                print("Not arms")
        in_for_arm = int(input("Enter no: "))
        armstr(in_for_arm)

    elif (sel == 6):
        def prime(num):
            if (num > 0):
                for i in range(2,int(num / 2) + 1):
                    if (num % i) == 0:
                        print("Not")
                        break
                else:
                    print("Prime")
            else:
                print("Not")
        in_for_prim = int(input("Enter the number: "))
        prime(in_for_prim)

    elif(sel == 7):
        def fibo(num):
            i = 0
            f1 = -1
            f2 = 1
            f3 = f1+f2
            while( f3 <= num):
                print(list(f3))
                f1 = f2
                f2 = f3
                f3 = f1 + f2
                i += 1
        in_for_fib = int(input("Enter no: "))
        fibo(in_for_fib)



