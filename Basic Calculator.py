import math
# This imports the math module so we can use some mathematical functions

# Function to display menu and get user choice
def Menu():
    print("Choose an operation:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Classic Division")
    print("5. Factorial")
    print("6. x_power_y")
    print("7. log()")
    print("8. ln()")
    print("9. Quit")
    choice = int(input("Enter your choice (1/2/3/4/5/6/7/8/9): "))
    return choice

# Function for addition
def Addition():
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    result = num1 + num2
    print("Sum: ", result)

# Function for subtraction
def Subtraction():
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    result = num1 - num2
    print("Difference: ", result)

# Function for multiplication
def Multiplication():
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    result = num1 * num2
    print("Product: ", result)

# Function for classic division
def ClassicDivision():
    num1 = float(input("Enter the numerator: "))
    num2 = float(input("Enter the denominator: "))
    if num2 == 0:
        print("Division by zero is not allowed.")
    else:
        result = num1 / num2
        print("Quotient: ", result)

# Function for factorial
def Factorial():
    num = int(input("Enter a number: "))
    result = math.factorial(num)
    print("Factorial: ", result)

# Function for x^y (x raised to the power y)
def x_power_y():
    base = float(input("Enter the base (x): "))
    exponent = float(input("Enter the exponent (y): "))
    result = base ** exponent
    print(f"{base}^{exponent} = {result}")

# Function for logarithm (base 10)
def log():
    num = float(input("Enter a number: "))
    result = math.log10(num)
    print(f"log({num}) = {result}")

# Function for natural logarithm (ln)
def ln():
    num = float(input("Enter a number: "))
    result = math.log(num)
    print(f"ln({num}) = {result}")

# Main program (continue from where it left off)
while True:
    choice = Menu()
    if choice == 1:
        Addition()
    elif choice == 2:
        Subtraction()
    elif choice == 3:
        Multiplication()
    elif choice == 4:
        ClassicDivision()
    elif choice == 5:
        Factorial()
    elif choice == 6:
        x_power_y()
    elif choice == 7:
        log()
    elif choice == 8:
        ln()
    elif choice == 9:
        print("Have a lovely day!")
        break
    else:
        print("Invalid choice. Please choose a valid option.")
