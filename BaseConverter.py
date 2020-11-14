# convert to binary
def binary(deca):
    cont = True
    result = ""
    # while deca / 2 != 0, add deca modulo 2 to the string result
    while cont:
        result = "".join((result, str(deca % 2)))
        deca = int(deca / 2)
        if deca / 2 == 0:
            cont = False
    result = result[::-1]   # reverse string (MSB to LSB)
    print("Binary: ", result)


# convert to octal
def octal(deca):
    cont = True
    result = ""
    # while deca / 8 != 0, add deca modulo 8 to the string result
    while cont:
        result = "".join((result, str(deca % 8)))
        deca = int(deca / 8)
        if deca / 8 == 0:
            cont = False
    result = result[::-1]   # reverse string (MSB to LSB)
    print("Octal: ", result)


# convert to hexadecimal
def hexadecimal(deca):
    cont = True
    result = ""
    # while deca / 16 != 0, add deca modulo 16 to the string result
    while cont:
        if deca % 16 == 10:
            current = "A"
        elif deca % 16 == 11:
            current = "B"
        elif deca % 16 == 12:
            current = "C"
        elif deca % 16 == 13:
            current = "D"
        elif deca % 16 == 14:
            current = "E"
        elif deca % 16 == 15:
            current = "F"
        else:
            current = str(deca % 16)

        result += current # append the string result with the current modulo

        deca = int(deca / 16) # new value of deca

        if deca / 16 == 0: # when to stop
            cont = False

    result = result[::-1]   # reverse string result

    print("Hexadecimal: ", result)

# user input (a decimal number that we wish to convert)
decimal = input("Enter a number base 10: ")

# print binary
binary(int(decimal))

# print octal
octal(int(decimal))

# print decimal
print("Decimal: ", decimal)

# print hexadecimal
hexadecimal(int(decimal))
