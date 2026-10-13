#include "space_age.h"

#define TIME_COEFF(x) 1.0f / (x * seconds_per_earth_year)

float age(planet_t planet, int64_t seconds){
    
    const float seconds_per_earth_year = 31557600.0f;
    const float invalid_planet = -1.0f;
    
    static const float planet_time_coefficient[] = {
        [MERCURY] = TIME_COEFF(0.2408467f),
        [VENUS]   = TIME_COEFF(0.61519726f),
        [EARTH]   = TIME_COEFF(1.0f),
        [MARS]    = TIME_COEFF(1.8808158f),
        [JUPITER] = TIME_COEFF(11.862615f),
        [SATURN]  = TIME_COEFF(29.447498f),
        [URANUS]  = TIME_COEFF(84.016846f),
        [NEPTUNE] = TIME_COEFF(164.79132f)
        };

    if ((unsigned int)planet > NEPTUNE){
        return invalid_planet;
    }

    return seconds * planet_time_coefficient[planet];
}
