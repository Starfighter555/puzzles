def count_substring(string, sub_string):
    count = 0
    for i in range(len(string)):
        if string[i:i+len(sub_string)] == sub_string:
            count += 1
    return count

def main():
    string = input().strip()
    sub_string = input().strip()
    count = count_substring(string, sub_string)
    print(count)

if __name__ == '__main__':
    main()