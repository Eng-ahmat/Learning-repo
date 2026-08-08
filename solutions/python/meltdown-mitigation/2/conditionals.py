"""Functions to prevent a nuclear meltdown."""


def is_criticality_balanced(
    temperature: int | float, neutrons_emitted: int | float
) -> bool:
    """Verify criticality is balanced.

    Parameters:
        temperature (int or float): The temperature value in kelvin.
        neutrons_emitted (int or float): The number of neutrons emitted per second.

    Returns:
        bool: Is criticality balanced?

    Note:
        A reactor is said to be balanced in criticality if it satisfies the following conditions:
            - The temperature is less than 800 K.
            - The number of neutrons emitted per second is greater than 500.
            - The product of temperature and neutrons emitted per second is less than 500000.
    """

    return (
        temperature < 800
        and neutrons_emitted > 500
        and temperature * neutrons_emitted < 500_000
    )


def reactor_efficiency(
    voltage: int | float, current: int | float, theoretical_max_power: int | float
) -> str:
    """Assess reactor efficiency zone.

    Parameters:
        voltage (int or float): Voltage value.
        current (int or float): Current value.
        theoretical_max_power (int or float): The power level that corresponds to a 100% efficiency.

    Returns:
        str: One of ('green', 'orange', 'red', or 'black').

    Note:
        Efficiency can be grouped into 4 bands:
            1. green -> efficiency of 80% or more,
            2. orange -> efficiency of less than 80% but at least 60%,
            3. red -> efficiency below 60%, but still 30% or more,
            4. black ->  less than 30% efficient.

        The percentage value is calculated as
        (generated power/ theoretical max power)*100
        where generated power = voltage * current
    """
    colors: tuple[str, str, str, str] = ("green", "orange", "red", "black")
    generated_power: int | float = voltage * current
    percentage: float = generated_power / theoretical_max_power * 100

    if percentage >= 80:
        return colors[0]
    if 60 <= percentage < 80:
        return colors[1]
    if 30 <= percentage < 60:
        return colors[2]
    return colors[3]


def fail_safe(
    temperature: int | float,
    neutrons_produced_per_second: int | float,
    threshold: int | float,
) -> str:
    """Assess and return status code for the reactor.

    Parameters:
        temperature (int or float): The value of the temperature in kelvin.
        neutrons_produced_per_second (int or float): The neutron flux.
        threshold (int or float): The threshold for the category.

    Returns:
        str: One of ('LOW', 'NORMAL', 'DANGER').

    Note:
        1. 'LOW' -> `temperature * neutrons per second` < 90% of `threshold`
        2. 'NORMAL' -> `temperature * neutrons per second` +/- 10% of `threshold`
        3. 'DANGER' -> `temperature * neutrons per second` is not in the above-stated ranges
    """
    statuses: tuple[str, str, str] = ("LOW", "NORMAL", "DANGER")
    reactor_value = temperature * neutrons_produced_per_second

    if reactor_value < 0.9 * threshold:
        return statuses[0]
    if threshold - (0.1 * threshold)< reactor_value < threshold + (0.1 * threshold):
        return statuses[1]
    return statuses[2]
