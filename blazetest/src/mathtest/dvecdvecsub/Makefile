#==================================================================================================
#
#  Makefile for the dvecdvecsub module of the Blaze test suite
#
#  Copyright (C) 2013 Klaus Iglberger - All Rights Reserved - All Rights Reserved
#
#  This file is part of the Blaze library. You can redistribute it and/or modify it under
#  the terms of the New (Revised) BSD License. Redistribution and use in source and binary
#  forms, with or without modification, are permitted provided that the following conditions
#  are met:
#
#  1. Redistributions of source code must retain the above copyright notice, this list of
#     conditions and the following disclaimer.
#  2. Redistributions in binary form must reproduce the above copyright notice, this list
#     of conditions and the following disclaimer in the documentation and/or other materials
#     provided with the distribution.
#  3. Neither the names of the Blaze development group nor the names of its contributors
#     may be used to endorse or promote products derived from this software without specific
#     prior written permission.
#
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
#  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
#  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
#  SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
#  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
#  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
#  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
#  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
#  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
#  DAMAGE.
#
#==================================================================================================


# Including the compiler and library settings
ifneq ($(MAKECMDGOALS),clean)
-include ../../Makeconfig
endif


# Setting the source, object and dependency files
SRC = $(wildcard ./*.cpp)
DEP = $(SRC:.cpp=.d)
OBJ = $(SRC:.cpp=.o)
BIN = $(SRC:.cpp=)


# General rules
default: V3aV3a V3aV3b V3bV3a V3bV3b VHaVHa VHaVHb VHbVHa VHbVHb VDaVDa VDaVDb VDbVDa VDbVDb AliasingTest
all: $(BIN)
essential: V3aV3a VHaVHa VDaVDa AliasingTest
single: VDaVDa


# Build rules
V2aV2a: V2aV2a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2aV2b: V2aV2b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2aVDa: V2aVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2aVDb: V2aVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2bV2a: V2bV2a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2bV2b: V2bV2b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2bVDa: V2bVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V2bVDb: V2bVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

V3aV3a: V3aV3a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3aV3b: V3aV3b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3aVDa: V3aVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3aVDb: V3aVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3bV3a: V3bV3a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3bV3b: V3bV3b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3bVDa: V3bVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V3bVDb: V3bVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

V4aV4a: V4aV4a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4aV4b: V4aV4b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4aVDa: V4aVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4aVDb: V4aVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4bV4a: V4bV4a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4bV4b: V4bV4b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4bVDa: V4bVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V4bVDb: V4bVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

V5aV5a: V5aV5a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5aV5b: V5aV5b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5aVDa: V5aVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5aVDb: V5aVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5bV5a: V5bV5a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5bV5b: V5bV5b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5bVDa: V5bVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V5bVDb: V5bVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

V6aV6a: V6aV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6aV6b: V6aV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6aVDa: V6aVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6aVDb: V6aVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6aVHa: V6aVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6aVHb: V6aVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bV6a: V6bV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bV6b: V6bV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bVDa: V6bVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bVDb: V6bVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bVHa: V6bVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
V6bVHb: V6bVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

VDaV2a: VDaV2a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV2b: VDaV2b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV3a: VDaV3a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV3b: VDaV3b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV4a: VDaV4a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV4b: VDaV4b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV5a: VDaV5a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV5b: VDaV5b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV6a: VDaV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaV6b: VDaV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaVDa: VDaVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaVDb: VDaVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaVHa: VDaVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDaVHb: VDaVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV2a: VDbV2a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV2b: VDbV2b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV3a: VDbV3a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV3b: VDbV3b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV4a: VDbV4a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV4b: VDbV4b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV5a: VDbV5a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV5b: VDbV5b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV6a: VDbV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbV6b: VDbV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbVDa: VDbVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbVDb: VDbVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbVHa: VDbVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VDbVHb: VDbVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

VHaV6a: VHaV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHaV6b: VHaV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHaVDa: VHaVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHaVDb: VHaVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHaVHa: VHaVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHaVHb: VHaVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbV6a: VHbV6a.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbV6b: VHbV6b.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbVDa: VHbVDa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbVDb: VHbVDb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbVHa: VHbVHa.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)
VHbVHb: VHbVHb.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)

AliasingTest: AliasingTest.o
	@$(CXX) $(CXXFLAGS) -o $@ $< $(LIBRARIES)


# Cleanup
clean:
	@$(RM) $(DEP) $(OBJ) $(BIN)


# Makefile includes
ifneq ($(MAKECMDGOALS),clean)
-include $(DEP)
endif


# Makefile generation
%.d: %.cpp
	@$(CXX) -MM -MP -MT "$*.o $*.d" -MF $@ $(CXXFLAGS) $<


# Setting the independent commands
.PHONY: default all essential single clean
