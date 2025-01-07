def calculate_sum(n):
    # Mathematical calculation for the sum of multiples of 3 or 5 below n
    def sum_divisible_by(k):
        p = (n - 1) // k  # Number of multiples of k below n
        return k * p * (p + 1) // 2  # Sum of the first p multiples of k

    return sum_divisible_by(3) + sum_divisible_by(5) - sum_divisible_by(15)


def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        print(calculate_sum(n))


if __name__ == "__main__":
    main()
