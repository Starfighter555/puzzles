def my_print(n):
    for i in range(1, n+1):
        print(i, sep=',', end="")

def main():
    n = int(input())
    my_print(n)

if __name__ == "__main__":
    main()