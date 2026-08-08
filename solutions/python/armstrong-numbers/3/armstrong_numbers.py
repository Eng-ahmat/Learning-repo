def is_armstrong_number(number):
    value: int = 0
    string_number = str(number)
    for _number in string_number:
        value += int(_number) ** len(string_number)
    return value == number
