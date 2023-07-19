//=============================================================================
// Copyright (C) 2002 Radical Entertainment Ltd.  All rights reserved.
//
// File:        DirectionalLocator.cpp
//
// Description: Implement DirectionalLocator
//
// History:     30/07/2002 + Created -- Cary Brisebois
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
#include <meta/DirectionalLocator.h>



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
// DirectionalLocator::DirectionalLocator
//==============================================================================
// Description: Constructor.
//
// Parameters:	None.
//
// Return:      N/A.
//
//==============================================================================
DirectionalLocator::DirectionalLocator() {
    mTransform.Identity();
}

//==============================================================================
// DirectionalLocator::~DirectionalLocator
//==============================================================================
// Description: Destructor.
//
// Parameters:	None.
//
// Return:      N/A.
//
//==============================================================================
DirectionalLocator::~DirectionalLocator() {
}

//******************************************************************************
//
// Private Member Functions
//
//******************************************************************************