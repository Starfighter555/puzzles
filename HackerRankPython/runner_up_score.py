def main():
    arr = list(map(int, input().split()))
    arr = list(set(arr))
    arr.sort()
    print(arr[-2])

if __name__ == '__main__':
    main()