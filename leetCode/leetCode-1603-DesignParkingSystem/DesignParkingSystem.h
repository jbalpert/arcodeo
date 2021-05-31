/*
 * DesignParkingSystem.h
 * Arcodeo Solution
 * LeetCode Problem 1603
 */
#ifndef PARKINGSYSTEM_H
#define PARKINGSYSTEM_H

class ParkingSystem{
    private:
    // Add member variables Here
    int b, m, s;
    public:
        ParkingSystem(int big, int medium, int small);
        
        bool addCar(int carType);
};

#endif