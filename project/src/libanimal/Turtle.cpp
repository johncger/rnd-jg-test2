/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InterfaceExample.cpp
 * @brief
 * @date 
 * @author 
 * @version
 * See the COPYRIGHT file at the top-level directory of this distribution for details of code ownership.
 * -----
 * Last Modified:
 * Modified By:
 * -----
 */


#include "Turtle.hpp"

namespace PROJ1 {
   
   Turtle::~Turtle() noexcept = default;
   std::string Turtle::Type() const { return "Turtle";}
   std::string Turtle::Sound() const { return "Hiss"; }
}  // namespace PROJ1