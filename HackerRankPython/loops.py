def square(n):
    for i in range(n):
        print(i * i)
        
def main():
    n = int(input())
    if n > 0:
        square(n)
        
if __name__ == '__main__':
    main()