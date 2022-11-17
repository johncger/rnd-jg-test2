/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InterfaceExample.cpp
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


#include "Proj1Interface.hpp"
#include "Proj1InternalHidden.hpp"

namespace PROJ1 {
class Proj1Interface::Proj1Impl {
 public:
    std::string GetMessage() { return _hello.append(_example.GetName()); }

 private:
    std::string _hello = "Hello World! ";

    Proj1InternalHidden _example;
};

Proj1Interface::Proj1Interface() : _impl(new Proj1Interface::Proj1Impl()) {}

Proj1Interface::~Proj1Interface() = default;

std::string Proj1Interface::GetHelloWorld() const { return _impl->GetMessage(); }

} // namespace PROJ1