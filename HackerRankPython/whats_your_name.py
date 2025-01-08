def print_full_name(first, last):
    full_name = f"Hello {first} {last}! You just delved into python."   
    print(full_name)
    
def main():
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)

if __name__ == '__main__':
    main()