def print_number_pyramid(height):
    for i in range(1, height + 1):
        # Calculate the number sequence for the current row
        numbers = list(range(1, 2 * i, 2)) + list(range(2 * i - 3, 0, -2))
        
        # Convert numbers to string and join them with spaces
        numbers_str = ' '.join(map(str, numbers))
        
        # Calculate the leading spaces
        spaces = ' ' * (height - i)
        
        # Print the current row
        print(spaces + numbers_str)

# Input: Height of the pyramid
height = int(input("피라미드 높이를 입력: "))
print_number_pyramid(height)
