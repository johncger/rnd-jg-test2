/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InternalExample.cpp
 * @brief
 * @date 10/06/2022
 * @author Olesia Kochergina
 * @version
 * See the COPYRIGHT file at the top-level directory of this distribution for details of code ownership.
 * -----
 * Last Modified:
 * Modified By:
 * -----
 */


#include "Proj1InternalHidden.hpp"
#include <iostream>

namespace PROJ1 {
Proj1InternalHidden::Proj1InternalHidden() = default;
Proj1InternalHidden::~Proj1InternalHidden() = default;


std::string Proj1InternalHidden::GetName() const { return _name; }

} // namespace PROJ1