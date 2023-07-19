//=============================================================================
// Copyright (C) 2002 Radical Entertainment Ltd.  All rights reserved.
//
// File:        
//
// Description: Implement VehicleCondition
//
// History:     08/07/2002 + Created -- NAME
//
//=============================================================================

//========================================
// System Includes
//========================================
// Foundation Tech
#include <raddebug.hpp>

//========================================
// Project Includes
//========================================

#include <mission/conditions/vehiclecondition.h>

//******************************************************************************
//
// Global Data, Local Data, Local Classes
//
//******************************************************************************

//******************************************************************************
//
// Public Member Functions
//
//******************************************************************************

//==============================================================================
// VehicleCondition::VehicleCondition
//==============================================================================
// Description: Constructor.
//
// Parameters: None.
//
// Return:      N/A.
//
//==============================================================================
VehicleCondition::VehicleCondition() :
        mpVehicle(NULL) {
    //this->SetType(COND_PLAYER_OUT_OF_VEHICLE);
}

//==============================================================================
// VehicleCondition::~VehicleCondition
//==============================================================================
// Description: Destructor.
//
// Parameters: None.
//
// Return:      N/A.
//
//==============================================================================
VehicleCondition::~VehicleCondition() {
}

//******************************************************************************
//
// Private Member Functions
//
//******************************************************************************