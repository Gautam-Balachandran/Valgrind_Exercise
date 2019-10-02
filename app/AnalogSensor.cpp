/**
 *  @file AnalogSensor.cpp
 *  @author Gautam Balachandran
 *
 *  @brief Valgrind exercise assignment Week 6
 *
 *  @section DESCRIPTION
 *
 *  Fixed Valgrind bugs
 *
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    std::vector<int> readings(mSamples, 10);// Pointer to Vector - FIXED

    double result = std::accumulate( readings.begin(), readings.end(), 0.0 ) / readings.size();
    return result;
}


