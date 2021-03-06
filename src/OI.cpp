// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CrochetsDown.h"
#include "Commands/CrochetsUp.h"
#include "Commands/Pilotage.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	stick = new Joystick(0);
	
	stickButton2 = new JoystickButton(stick, 2);
	stickButton2->WhileHeld(new CrochetsDown());
	stickButton1 = new JoystickButton(stick, 1);
	stickButton1->WhileHeld(new CrochetsUp());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Pilotage", new Pilotage());

	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("CrochetsUp", new CrochetsUp());

	SmartDashboard::PutData("CrochetsDown", new CrochetsDown());

        // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getstick() {
	return stick;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
