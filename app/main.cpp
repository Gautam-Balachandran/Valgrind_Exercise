/**
 *  @file main.cpp
 *  @author Gautam Balachandran
 *
 *  @brief Valgrind exercise assignment Week 6
 *
 *  @section DESCRIPTION
 *
 *  Fixed Valgrind bugs
 *
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true; // Unassigned boolean. FIXED
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
