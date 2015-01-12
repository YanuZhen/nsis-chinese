/*-----------------------------------------------------------------------------
                                 utfconvert.cpp                                
-------------------------------------------------------------------------------

   Implements UTFConvert.

-------------------------------------------------------------------------------

-----------------------------------------------------------------------------*/

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------

#include "utfconvert.h"

//-----------------------------------------------------------------------------
// Namespace
//-----------------------------------------------------------------------------

namespace detail
{
const char* UTFErrorStrings<1>::s_strBadlyFormed = "Badly formatted UTF-8 string!";
const char* UTFErrorStrings<2>::s_strBadlyFormed = "Badly formatted UTF-16 string!";
const char* UTFErrorStrings<4>::s_strBadlyFormed = "Badly formatted UTF-32 string!";
}

