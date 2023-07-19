//=============================================================================
// Copyright (C) 2002 Radical Entertainment Ltd.  All rights reserved.
//
// File:        
//
// Description: Implement Potentials
//
// History:     22/07/2002 + Created -- NAME
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

#include <ai/vehicle/potentials.h>

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
// Potentials::Potentials
//==============================================================================
// Description: Constructor.
//
// Parameters: None.
//
// Return:      N/A.
//
//==============================================================================
Potentials::Potentials() {
}

//==============================================================================
// Potentials::~Potentials
//==============================================================================
// Description: Destructor.
//
// Parameters: None.
//
// Return:      N/A.
//
//==============================================================================
Potentials::~Potentials() {
}

//=============================================================================
// Potentials::Clear
//=============================================================================
// Description: Comment
//
// Parameters:  ()
//
// Return:      void 
//
//=============================================================================
void Potentials::Clear(const float value) {
    for (int i = 0; i < MAX_POTENTIALS; i++) {
        //mValues[ i ] = -rmt::Fabs(static_cast<float>(i - MAX_POTENTIALS / 2) / static_cast<float>(MAX_POTENTIALS));
        mValues[i] = value;
    }
}

//******************************************************************************
//
// Private Member Functions
//
//******************************************************************************
