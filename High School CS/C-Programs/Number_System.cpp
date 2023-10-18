#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int decimalNum, octalNumb, binnum, k, rev, mul, len, chg, hex, chk, octalDigit, binarNum, b, decnum, i, ch, rem, binaryNum[20], octalNum[50];
    char hexaDecimalNum[50];
    char binaryNumb[40] = "";
    do
    {
        int decimalNum = octalDigit = rev = k = len = chg = hex = i = 0;
        int b = mul = chk = 1;
        cout << "\n\n-----------------------------\n\tMENU\n-----------------------------\n\n1. Deciaml to Binary\n2. Decimal to Octal\n3. Decimal to HexaDecimal\n-----------------------------\n4. Binary to Decimal\n5. Binary to Octal\n6. Binary to Hexadecimal\n-----------------------------\n7. Octal to Decimal\n8. Octal to Binary\n9. Octal to Hexadecimal\n-----------------------------\n10. Hexadecimal to Decial\n11. Hexadeciaml to Binary\n12. Hexadecimal to Octal\n-----------------------------\n13. Exit\n-----------------------------\n";
        cout << "\nEnter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\nEnter the Decimal Number : ";
            cin >> decimalNum;
            while (decimalNum != 0)
            {
                binaryNum[i] = decimalNum % 2;
                i++;
                decimalNum = decimalNum / 2;
            }
            cout << "\nEquivalent Binary Value : ";
            for (i = (i - 1); i >= 0; i--)
                cout << binaryNum[i];
            cout << endl;
            break;

        case 2:
            cout << "\nEnter the Decimal Number : ";
            cin >> decimalNum;
            while (decimalNum != 0)
            {
                octalNum[i] = decimalNum % 8;
                i++;
                decimalNum = decimalNum / 8;
            }
            cout << "\nEquivalent Octal Value : ";
            for (i = (i - 1); i >= 0; i--)
                cout << octalNum[i];
            cout << endl;
            break;

        case 3:
            cout << "\nEnter the Decimal Number : ";
            cin >> decimalNum;
            while (decimalNum != 0)
            {
                rem = decimalNum % 16;
                if (rem < 10)
                    rem = rem + 48;
                else
                    rem = rem + 55;
                hexaDecimalNum[i] = rem;
                i++;
                decimalNum = decimalNum / 16;
            }
            cout << "\nEquivalent Hexadecimal Value : ";
            for (i = i - 1; i >= 0; i--)
                cout << hexaDecimalNum[i];
            cout << endl;
            break;

        case 4:
            cout << "\nEnter any Binary Number: ";
            cin >> binnum;
            while (binnum != 0)
            {
                rem = binnum % 10;
                decimalNum = decimalNum + (rem * b);
                b = b * 2;
                binnum = binnum / 10;
            }
            cout << "\nEquivalent Decimal Value = " << decimalNum;
            cout << endl;
            break;

        case 5:
            cout << "\nEnter the Binary Number : ";
            cin >> binarNum;
            while (binarNum != 0)
            {
                rem = binarNum % 10;
                octalDigit = octalDigit + (rem * mul);
                if (chk % 3 == 0)
                {
                    octalNum[i] = octalDigit;
                    mul = 1;
                    octalDigit = 0;
                    chk = 1;
                    i++;
                }
                else
                {
                    mul = mul * 2;
                    chk++;
                }
                binarNum = binarNum / 10;
            }
            if (chk != 1)
                octalNum[i] = octalDigit;
            cout << "\nEquivalent Octal Value :  ";
            for (i = i; i >= 0; i--)
                cout << octalNum[i];
            cout << endl;
            break;

        case 6:
            cout << "\nEnter any Binary Number : ";
            cin >> binarNum;
            while (binarNum != 0)
            {
                rem = binarNum % 10;
                hex = hex + (rem * mul);
                if (chk % 4 == 0)
                {
                    if (hex < 10)
                        hexaDecimalNum[i] = hex + 48;
                    else
                        hexaDecimalNum[i] = hex + 55;
                    mul = 1;
                    hex = 0;
                    chk = 1;
                    i++;
                }
                else
                {
                    mul = mul * 2;
                    chk++;
                }
                binarNum = binarNum / 10;
            }
            if (chk != 1)
                hexaDecimalNum[i] = hex + 48;
            if (chk == 1)
                i--;
            cout << "\nEquivalent Value in Hexadecimal : ";
            for (i = i; i >= 0; i--)
                cout << hexaDecimalNum[i];
            cout << endl;
            break;

        case 7:
            cout << "\nEnter the Octal Number : ";
            cin >> octalNumb;
            while (octalNumb != 0)
            {
                rem = octalNumb % 10;
                decimalNum = decimalNum + (rem * pow(8, i));
                i++;
                octalNumb = octalNumb / 10;
            }
            cout << "\nEquivalent Decimal Value : " << decimalNum;
            cout << endl;
            break;

        case 8:
            cout << "\nEnter the Octal Number : ";
            cin >> octalNumb;
            while (octalNumb != 0)
            {
                rem = octalNumb % 10;
                if (rem > 7)
                {
                    chg++;
                    break;
                }
                rev = (rev * 10) + rem;
                octalNumb = octalNumb / 10;
            }
            if (chg == 0)
            {
                octalNumb = rev;
                cout << "\nEquivalent Binary Value : ";
                while (octalNumb != 0)
                {
                    rem = octalNumb % 10;
                    switch (rem)
                    {
                    case 0:
                        strcat(binaryNumb, "000");
                        break;
                    case 1:
                        strcat(binaryNumb, "001");
                        break;
                    case 2:
                        strcat(binaryNumb, "010");
                        break;
                    case 3:
                        strcat(binaryNumb, "011");
                        break;
                    case 4:
                        strcat(binaryNumb, "100");
                        break;
                    case 5:
                        strcat(binaryNumb, "101");
                        break;
                    case 6:
                        strcat(binaryNumb, "110");
                        break;
                    case 7:
                        strcat(binaryNumb, "111");
                        break;
                    }
                    octalNumb = octalNumb / 10;
                }
                cout << binaryNumb;
            }
            else
                cout << "\nInvalid Octal Digit!";
            cout << endl;
            break;

        case 9:
            cout << "\nEnter any Octal Number : ";
            cin >> octalNumb;
            while (octalNumb != 0)
            {
                rem = octalNumb % 10;
                if (rem > 7)
                {
                    chg++;
                    break;
                }
                rev = (rev * 10) + rem;
                octalNumb = octalNumb / 10;
            }
            if (chg == 0)
            {
                octalNumb = rev;
                while (octalNumb != 0)
                {
                    rem = octalNumb % 10;
                    switch (rem)
                    {
                    case 0:
                        strcat(binaryNumb, "000");
                        break;
                    case 1:
                        strcat(binaryNumb, "001");
                        break;
                    case 2:
                        strcat(binaryNumb, "010");
                        break;
                    case 3:
                        strcat(binaryNumb, "011");
                        break;
                    case 4:
                        strcat(binaryNumb, "100");
                        break;
                    case 5:
                        strcat(binaryNumb, "101");
                        break;
                    case 6:
                        strcat(binaryNumb, "110");
                        break;
                    case 7:
                        strcat(binaryNumb, "111");
                        break;
                    }
                    octalNumb = octalNumb / 10;
                }
                while (binaryNumb[k] != '\0')
                    k++;
                chg = 1;
                k--;
                while (k >= 0)
                {
                    if (binaryNumb[k] == '0')
                        rem = 0;
                    else
                        rem = 1;
                    hex = hex + (rem * mul);
                    if (chg % 4 == 0)
                    {
                        if (hex < 10)
                            hexaDecimalNum[i] = hex + 48;
                        else
                            hexaDecimalNum[i] = hex + 55;
                        mul = 1;
                        hex = 0;
                        chg = 1;
                        i++;
                    }
                    else
                    {
                        mul = mul * 2;
                        chg++;
                    }
                    k--;
                }
                if (chg != 1)
                    hexaDecimalNum[i] = hex + 48;
                if (chg == 1)
                    i--;
                cout << "\nEquivalent Hexadecimal Value : ";
                chg = 0;
                for (i = i; i >= 0; i--)
                {
                    if (hexaDecimalNum[i] == '0' && chg == 0)
                    {
                        chg++;
                        continue;
                    }
                    else
                        cout << hexaDecimalNum[i];
                }
            }
            else
                cout << "\nInvalid Octal Digit " << rem;
            cout << endl;
            break;

        case 10:
            cout << "\nEnter the Hexadecimal Number : ";
            cin >> hexaDecimalNum;
            while (hexaDecimalNum[i] != '\0')
            {
                len++;
                i++;
            }
            len--;
            i = 0;
            while (len >= 0)
            {
                rem = hexaDecimalNum[len];
                if (rem >= 48 && rem <= 57)
                    rem = rem - 48;
                else if (rem >= 65 && rem <= 70)
                    rem = rem - 55;
                else if (rem >= 97 && rem <= 102)
                    rem = rem - 87;
                else
                {
                    cout << "\nInvalid Hex Digit!";
                    cout << endl;
                    return 0;
                }
                decimalNum = decimalNum + (rem * pow(16, i));
                len--;
                i++;
            }
            cout << "\nEquivalent Decimal Value : " << decimalNum;
            cout << endl;
            break;

        case 11:
            cout << "\nEnter the Hexadecimal Number : ";
            cin >> hexaDecimalNum;
            cout << "\nEquivalent Binary Value : ";
            while (hexaDecimalNum[i])
            {
                switch (hexaDecimalNum[i])
                {
                case '0':
                    cout << "0000";
                    break;
                case '1':
                    cout << "0001";
                    break;
                case '2':
                    cout << "0010";
                    break;
                case '3':
                    cout << "0011";
                    break;
                case '4':
                    cout << "0100";
                    break;
                case '5':
                    cout << "0101";
                    break;
                case '6':
                    cout << "0110";
                    break;
                case '7':
                    cout << "0111";
                    break;
                case '8':
                    cout << "1000";
                    break;
                case '9':
                    cout << "1001";
                    break;
                case 'A':
                case 'a':
                    cout << "1010";
                    break;
                case 'B':
                case 'b':
                    cout << "1011";
                    break;
                case 'C':
                case 'c':
                    cout << "1100";
                    break;
                case 'D':
                case 'd':
                    cout << "1101";
                    break;
                case 'E':
                case 'e':
                    cout << "1110";
                    break;
                case 'F':
                case 'f':
                    cout << "1111";
                    break;
                default:
                    cout << "--Invalid Hex Digit (" << hexaDecimalNum[i] << ")--";
                }
                i++;
            }
            cout << endl;
            break;

        case 12:
            cout << "\nEnter the Hexadecimal Number : ";
            cin >> hexaDecimalNum;
            while (hexaDecimalNum[i] != '\0')
            {
                len++;
                i++;
            }
            len--;
            i = 0;
            while (len >= 0)
            {
                rem = hexaDecimalNum[len];
                if (rem >= 48 && rem <= 57)
                    rem = rem - 48;
                else if (rem >= 65 && rem <= 70)
                    rem = rem - 55;
                else if (rem >= 97 && rem <= 102)
                    rem = rem - 87;
                else
                {
                    cout << "\nInvalid Hex Digit!";
                    cout << endl;
                    return 0;
                }
                decimalNum = decimalNum + (rem * pow(16, i));
                len--;
                i++;
            }
            i = 0;
            while (decimalNum != 0)
            {
                octalNum[i] = decimalNum % 8;
                i++;
                decimalNum = decimalNum / 8;
            }
            cout << "\nEquivalent Octal Value : ";
            for (i = (i - 1); i >= 0; i--)
                cout << octalNum[i];
            cout << endl;
            break;

        default:
            cout << "Invalid Choice";
            break;
        }

    } while (ch != 13);

    return 0;
}