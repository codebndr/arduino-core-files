// Overshoot.pde
// -*- mode: C++ -*-
//
// Check overshoot handling
// which sets a new target position and then waits until the stepper has 
// achieved it. This is used for testing the handling of overshoots
//
// Copyright (C) 2009 Mike McCauley
// $Id: Overshoot.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>

// Define a stepper and the pins it will use
AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{  
}

void loop()
{    
    stepper.setMaxSpeed(200);
    stepper.setAcceleration(50);
    stepper.runToNewPosition(0);

    stepper.moveTo(500);
    while (stepper.currentPosition() != 300)
	stepper.run();
    // cause an overshoot as we whiz past 300
    stepper.setCurrentPosition(600);
}
