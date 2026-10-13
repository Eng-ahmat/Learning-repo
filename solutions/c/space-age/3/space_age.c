
#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    
    const float seconds_per_earth_year = 31557600.0f;
    const float invalid_planet = -1.0f;
    
    static const float planet_orbital_periods[] = {
        [MERCURY] = 0.2408467f,
        [VENUS]   = 0.61519726f,
        [EARTH]   = 1.0f,
        [MARS]    = 1.8808158f,
        [JUPITER] = 11.862615f,
        [SATURN]  = 29.447498f,
        [URANUS]  = 84.016846f,
        [NEPTUNE] = 164.79132f
        };

    if ((unsigned int)planet > NEPTUNE){
        return invalid_planet;
    }
    float planet_year_duration =
        planet_orbital_periods[planet] * seconds_per_earth_year;

    return seconds / planet_year_duration;
}
