def is_armstrong_number(number):
    value: int = 0
    string_number = str(number)
    for n in string_number:
        value += int(n) ** len(string_number)
    return value == number
