def division(a, b):
    return a // b, a / b

def main():
    a = int(input())
    b = int(input())
    integer_result, float_result = division(a, b)
    print(integer_result)
    print(float_result)

if __name__ == '__main__':
    main()