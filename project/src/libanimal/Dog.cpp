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


#include "Dog.hpp"

namespace PROJ1 {
   Dog::~Dog() noexcept = default;
   std::string Dog::Type() const { return "Dog";}
   std::string Dog::Sound() const { return "Woof"; }
}  // namespace PROJ1