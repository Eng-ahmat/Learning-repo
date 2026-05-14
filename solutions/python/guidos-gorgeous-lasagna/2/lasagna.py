# A modual that help to cook a gorgeous lasagna from your favorite cookbook.
EXPECTED_BAKE_TIME = 40 # The expected bake time to bake a lasagna.
PREPARATION_TIME = 2 # The preparation time a layer of lasagna.

def bake_time_remaining(elapsed_bake_time:int ) -> int:
    """Calculate the bake time remaining.

    Parameters:
        elapsed_bake_time (int): The baking time already elapsed.

    Returns:
        int: The remaining bake time (in minutes) derived from 'EXPECTED_BAKE_TIME'.

    Function that takes the actual minutes the lasagna has been in the oven as
    an argument and returns how many minutes the lasagna still needs to bake
    based on the `EXPECTED_BAKE_TIME`.
    """
    return EXPECTED_BAKE_TIME - elapsed_bake_time


def preparation_time_in_minutes(number_of_layers: int):
    """Calculate the preparation time of the lasagna.

    Parameters:
        number_of_layers (int): The baking time already elapsed.

    Returns:
        int: Returns how many minutes you would spend making them.

    function that takes the number_of_layers you want to add to the lasagna as an argument and returns how     many minutes you would spend making them. Each layer takes PREPARATION_TIME minitus.
    """
    return PREPARATION_TIME * number_of_layers

def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Calculate the elapsed cooking time.
    
    Parameters:
        number_of_layers (int): The number of layers in the lasagna.
        elapsed_bake_time (int): Time the lasagna has been baking in the oven.
    
    Returns:
        int: The total time elapsed (in minutes) preparing and baking.

    This function takes two integers representing the number of lasagna 
    layers and the time already spent baking the lasagna. It calculates 
    the total elapsed minutes spent cooking (preparing + baking).
    """
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time