def string_validators(s):
    print(any(c.isalnum() for c in s))
    print(any(c.isalpha() for c in s))
    print(any(c.isdigit() for c in s))
    print(any(c.islower() for c in s))
    print(any(c.isupper() for c in s))

def main():
    s = input()
    string_validators(s)

if __name__ == "__main__":
    main()