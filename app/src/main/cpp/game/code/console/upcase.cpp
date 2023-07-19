//===========================================================================
// Copyright (C) 2003 Radical Entertainment Ltd.  All rights reserved.
//
// Component:   upcase function
//
// Description: 
//
// Authors:     Ian Gipson
//
// Revisions		Date		Author	Revision
//					2003/10/23	IJG		Created
//
//===========================================================================

//---------------------------------------------------------------------------
// Includes
//===========================================================================
#include <console/upcase.h>

#if defined(RAD_ANDROID)
#include <cstdint>
#include <cstring>
#include <cctype>
#endif

//===========================================================================
// Local Constants, Typedefs, and Macros
//===========================================================================

//===========================================================================
// Global Data, Local Data, Local Classes
//===========================================================================

//===========================================================================
// Member Functions
//===========================================================================

//===========================================================================
// Upcase
//===========================================================================
// Description: converts a string to upper case
//
// Constraints:	none
//
// Parameters:	string - string to convert to upper case
//
// Return:      NONE
//
//===========================================================================
void Upcase( char* string )
{
    size_t length = ::strlen( string );
    size_t i;
    for( i = 0; i < length; ++i )
    {
        string[ i ] = toupper( string[ i ] );
    }
}