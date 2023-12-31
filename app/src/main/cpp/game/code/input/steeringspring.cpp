//=============================================================================
// Copyright (C) 2002 Radical Entertainment Ltd.  All rights reserved.
//
// File:        SteeringSpring.cpp
//
// Description: Implement SteeringSpring
//
// History:     10/21/2002 + Created -- Cary Brisebois
//                           Modified -- Neil Haran
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
#include <input/SteeringSpring.h>
#include <input/wheeldefines.h>

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
// SteeringSpring::SteeringSpring
//==============================================================================
// Description: Constructor.
//
// Parameters:	None.
//
// Return:      N/A.
//
//==============================================================================
SteeringSpring::SteeringSpring() {
    //Setup the respective force effect structures.
#ifdef RAD_WIN32
    m_conditon.lOffset              = 0;
    m_conditon.lDeadBand            = 0;
    m_conditon.lPositiveCoefficient = 127;
    m_conditon.lNegativeCoefficient = 127; 
    m_conditon.dwPositiveSaturation = 127;
    m_conditon.dwNegativeSaturation = 127;

    mForceEffect.dwFlags                 = DIEFF_CARTESIAN | DIEFF_OBJECTOFFSETS;
    mForceEffect.dwDuration              = INFINITE;
    mForceEffect.dwGain                  = DI_FFNOMINALMAX;
    mForceEffect.dwTriggerButton         = DIEB_NOTRIGGER;
    mForceEffect.cAxes                   = 1;
    mForceEffect.rgdwAxes                = m_rgdwAxes;
    mForceEffect.rglDirection            = m_rglDirection;
    mForceEffect.lpEnvelope              = NULL;
    mForceEffect.cbTypeSpecificParams    = sizeof(DICONDITION);
    mForceEffect.lpvTypeSpecificParams   = &m_conditon;
    mForceEffect.dwStartDelay            = 0;
#else
    mForceEffect.type = LG_TYPE_SPRING;
    mForceEffect.duration = LG_DURATION_INFINITE;
    mForceEffect.startDelay = 0;
    mForceEffect.p.condition[0].offset = 0;
    mForceEffect.p.condition[0].deadband = 0;
    mForceEffect.p.condition[0].saturationNeg = 127;
    mForceEffect.p.condition[0].saturationPos = 127;
    mForceEffect.p.condition[0].coefficientNeg = 127;
    mForceEffect.p.condition[0].coefficientPos = 127;
#endif
}

//==============================================================================
// SteeringSpring::~SteeringSpring
//==============================================================================
// Description: Destructor.
//
// Parameters:	None.
//
// Return:      N/A.
//
//==============================================================================
SteeringSpring::~SteeringSpring() {
}

//=============================================================================
// SteeringSpring::OnInit
//=============================================================================
// Description: Comment
//
// Parameters:  ()
//
// Return:      void 
//
//=============================================================================
void SteeringSpring::OnInit() {
}

//=============================================================================
// SteeringSpring::SetCenterPoint
//=============================================================================
// Description: Comment
//
// Parameters:  (s8 point, u8 deadband)
//
// Return:      void 
//
//=============================================================================
void SteeringSpring::SetCenterPoint(s8 point, u8 deadband) {
#ifdef RAD_WIN32
    m_conditon.lOffset                            = point;
    m_conditon.lDeadBand                          = deadband;
#else
    mForceEffect.p.condition[0].offset = point;
    mForceEffect.p.condition[0].deadband = deadband;
#endif
    mEffectDirty = true;
}

//=============================================================================
// SteeringSpring::SetSpringStrength
//=============================================================================
// Description: Comment
//
// Parameters:  (u8 strength)
//
// Return:      void 
//
//=============================================================================
#ifdef RAD_WIN32
void SteeringSpring::SetSpringStrength(u16 strength)
#else

void SteeringSpring::SetSpringStrength(u8 strength)
#endif
{
#ifdef RAD_WIN32
    m_conditon.dwPositiveSaturation               = strength;
    m_conditon.dwNegativeSaturation               = strength;
#else
    mForceEffect.p.condition[0].saturationNeg = strength;
    mForceEffect.p.condition[0].saturationPos = strength;
#endif

    mEffectDirty = true;
}

//=============================================================================
// SteeringSpring::SetSpringCoefficient
//=============================================================================
// Description: Comment
//
// Parameters:  (s16 coeff)
//
// Return:      void 
//
//=============================================================================
void SteeringSpring::SetSpringCoefficient(s16 coeff) {
#ifdef RAD_WIN32
    m_conditon.lPositiveCoefficient               = coeff;
    m_conditon.lNegativeCoefficient               = coeff;
#else
    mForceEffect.p.condition[0].coefficientNeg = coeff;
    mForceEffect.p.condition[0].coefficientPos = coeff;
#endif

    mEffectDirty = true;
}


//******************************************************************************
//
// Private Member Functions
//
//******************************************************************************
