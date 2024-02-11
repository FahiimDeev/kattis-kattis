def validate_cpr(cpr_number):
    # Extract day, month, year, and sequence number from the CPR number
    day = int(cpr_number[0:2])
    month = int(cpr_number[2:4])
    year = int(cpr_number[4:6])
    sequence_number = int(cpr_number[7:])

    # Validate the CPR number using the modulo 11 rule
    weights = [4, 3, 2, 7, 6, 5, 4, 3, 2, 1]
    total = sum(int(c) * w for c, w in zip(cpr_number[:-1], weights))
    remainder = total % 11
    check_digit = (11 - remainder) % 11

    # Check if the CPR number is valid
    is_valid = (check_digit == 10 and int(cpr_number[-1]) == 0) or (check_digit == int(cpr_number[-1]))

    return 1 if is_valid else 0

# Read the input CPR number
cpr_number = input().strip()

# Output the result
print(validate_cpr(cpr_number))
