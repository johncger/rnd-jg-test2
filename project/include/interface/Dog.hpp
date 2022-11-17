
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


#ifndef DOG_HPP
#define DOG_HPP

#include "AnimalInterface.hpp"

namespace PROJ1 {
class Dog : public AnimalInterface {
 public:
    ~Dog() noexcept override;
    std::string Type() const override;
    std::string Sound() const override;
};

} // namespace PROJ1

#endif