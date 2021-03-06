//=================================================================================================
/*!
//  \file blaze/util/constraints/Constraints.h
//  \brief Header file for compile time constraints
//
//  Copyright (C) 2013 Klaus Iglberger - All Rights Reserved
//
//  This file is part of the Blaze library. You can redistribute it and/or modify it under
//  the terms of the New (Revised) BSD License. Redistribution and use in source and binary
//  forms, with or without modification, are permitted provided that the following conditions
//  are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this list of
//     conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice, this list
//     of conditions and the following disclaimer in the documentation and/or other materials
//     provided with the distribution.
//  3. Neither the names of the Blaze development group nor the names of its contributors
//     may be used to endorse or promote products derived from this software without specific
//     prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
//  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
//  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
//  SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
//  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
//  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
//  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
//  DAMAGE.
*/
//=================================================================================================

#ifndef _BLAZE_UTIL_CONSTRAINTS_CONSTRAINTS_H_
#define _BLAZE_UTIL_CONSTRAINTS_CONSTRAINTS_H_


//=================================================================================================
//
//  DOXYGEN DOCUMENTATION
//
//=================================================================================================

//*************************************************************************************************
/*!\defgroup constraints Compile time constraints
// \ingroup util
//
// Compile time constraints offer the possibility to stop the compilation if a constraint that
// can be checked at compile time is not met. These constraints are especially useful for generic
// code, where the type of the involved objects is not known beforehands.\n
// Standard C++ doesn't offer compile time constraints per default. However, most constraints
// can be rebuilt using the standard language features. The most difficult problem is the error
// message the compiler generates if a constraint is not met. The compile time constraints
// implemented in the Blaze library are implemented in such a way that the error message
// contains the source of the constraint violation as close as possible. The following example
// demonstrates one of the Blaze compile time constraints and shows two possible error messages
// for two different compilers:

   \code
   //----- Test.cpp -----
   #include <blaze/Util.h>

   class A {};
   class B : public A {};
   class C {};

   int main()
   {
      BLAZE_CONSTRAINT_MUST_BE_DERIVED_FROM( B, A );  // No compile time error, B is derived from A
      BLAZE_CONSTRAINT_MUST_BE_DERIVED_FROM( C, A );  // Compile time error, C is not derived from A
   }
   \endcode

// The resulting error message generated by the GNU g++ compiler contains the name of the
// constraint and the source code line of the constraint violation:

   \code
   Test.cpp: In function 'int main()':
   Test.cpp:11: incomplete type ‘blaze::CONSTRAINT_MUST_BE_DERIVED_FROM_FAILED<false>’ used in nested name specifier
   \endcode

// The Intel C++-compiler gives the following error message that also contains the name of the
// violated constraint and the source code line of the violation:

   \code
   Test.cpp(11): error: incomplete type is not allowed
        BLAZE_CONSTRAINT_MUST_BE_DERIVED_FROM( C, A );
   \endcode
*/
//*************************************************************************************************

#endif
