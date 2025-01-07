#!/bin/python3

def weird_or_not(n):
    if n % 2 != 0:
        print("Weird")
    elif n % 2 == 0 and 2 <= n <= 5:
        print("Not Weird")
    elif n % 2 == 0 and 6 <= n <= 20:
        print("Weird")
    elif n % 2 == 0 and n > 20:
        print("Not Weird")  

def main():
    n = int(input().strip())
    weird_or_not(n)

if __name__ == '__main__':
    main()
