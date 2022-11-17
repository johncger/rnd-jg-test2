/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InterfaceExample.hpp
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


#ifndef ANIMAL_INTERFACE_HPP
#define ANIMAL_INTERFACE_HPP

#include <string>

namespace PROJ1 {
class AnimalInterface {
 public:
    virtual ~AnimalInterface() noexcept = default;
    virtual std::string Type() const = 0;
    virtual std::string Sound() const = 0;
};

} // namespace PROJ1

#endif