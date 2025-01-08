def split_and_join(line):
    return "-".join(line.split())

def main():
    line = input()
    result = split_and_join(line)
    print(result)

if __name__ == '__main__':
   main()