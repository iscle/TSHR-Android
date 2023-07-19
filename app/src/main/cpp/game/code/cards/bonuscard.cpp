//===========================================================================
// Copyright (C) 2000 Radical Entertainment Ltd.  All rights reserved.
//
// Component:   BonusCard
//
// Description: Implementation of the BonusCard class.
//
// Authors:     Tony Chu
//
// Revisions		Date			Author	    Revision
//                  2002/08/06      TChu        Created for SRR2
//
//===========================================================================

//===========================================================================
// Includes
//===========================================================================
#include <cards/bonuscard.h>

//===========================================================================
// Local Constants
//===========================================================================

//===========================================================================
// Public Member Functions
//===========================================================================

//===========================================================================
// BonusCard::BonusCard
//===========================================================================
// Description: 
//
// Constraints:	None.
//
// Parameters:	None.
//
// Return:      
//
//===========================================================================
BonusCard::BonusCard
        (
                unsigned int ID,
                unsigned int level,
                unsigned int levelID,
                tUID cardName,
                const eQuoteID *quotes,
                int numQuotes
        )
        : Card(ID, level, levelID, cardName, quotes, numQuotes) {
}

//===========================================================================
// BonusCard::~BonusCard
//===========================================================================
// Description: 
//
// Constraints:	None.
//
// Parameters:	None.
//
// Return:      
//
//===========================================================================
BonusCard::~BonusCard() {
}

//===========================================================================
// Private Member Functions
//===========================================================================

