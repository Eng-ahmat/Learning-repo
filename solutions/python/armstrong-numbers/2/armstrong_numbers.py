def is_armstrong_number(number):
    value: int = 0
    _number = str(number)
    for n in _number:
        value += int(n) ** len(_number)
    return value == number
