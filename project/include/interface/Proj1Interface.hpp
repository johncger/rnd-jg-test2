/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InterfaceExample.hpp
 * @brief
 * @date 01/03/2022
 * @author Olesia Kochergina
 * @version
 * See the COPYRIGHT file at the top-level directory of this distribution for details of code ownership.
 * -----
 * Last Modified:
 * Modified By:
 * -----
 */


#ifndef PROJ1_INTERFACE_HPP
#define PROJ1_INTERFACE_HPP
#include <memory>
#include <string>

namespace PROJ1 {
class Proj1Interface {
 public:
    Proj1Interface();
    ~Proj1Interface();

    std::string GetHelloWorld() const;

 private:
    class Proj1Impl;
    std::unique_ptr<Proj1Impl> _impl;
};
} // namespace PROJ1
#endif