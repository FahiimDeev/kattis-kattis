def main():
    # Get the size of the array from the user
    size = int(input("Enter the size of the array: "))

    # Initialize an empty list to store the elements
    array = []

    # Get the elements of the array from the user
    for i in range(size):
        element = int(input(f"Enter element {i + 1}: "))
        array.append(element)

    # Print the array
    print("Array:", array)

if __name__ == "__main__":
    main()
