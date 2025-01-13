import textwrap

def wrap(string, max_width):
    return textwrap.fill(string, max_width)

def main():
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)

if __name__ == '__main__':
    main()  