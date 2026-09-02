def leap_year(year: int) -> bool:
    """A funtions that check for a year if it is a leap year or not.
    Args: int year
    returns: Bool is_leap"""
    if year % 4 == 0:
        if year % 100 == 0 and year % 400 == 0 or year % 100 != 0:
            return True
    return False
