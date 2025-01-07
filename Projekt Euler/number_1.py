def input_testcases():
    t = int(input("Number of test cases: ").strip())
    return t


def calculate_sum(n):
    sum = 0
    for i in range(1, n):
        if i % 3 == 0 or i % 5 == 0:
            sum += i
    return sum


def output_sum(n, sum):
    print(f"n is  {n} and the sum is: {sum}")


def main():
    print("This is the solution of the first problem")
    t = input_testcases()
    for a0 in range(t):
        n = int(input().strip())
        sum = calculate_sum(n)
        output_sum(n, sum)


if __name__ == "__main__":
    main()
