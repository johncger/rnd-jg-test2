/*
 * Copyright (c) 2022 Harvest Technology Group Pty Ltd. All Rights Reserved.
 * @file InterfaceExample.test.cpp
 * @brief
 * @date 10/06/2022
 * @author Olesia Kochergina
 * @version
 * See the COPYRIGHT file at the top-level directory of this distribution for details of code ownership.
 * -----
 * Last Modified: 10/06/2022
 * Modified By: Olesia Kochergina
 * -----
 * HISTORY:
 */


#include "AnimalInterface.hpp"
#include "Dog.hpp"
#include "Turtle.hpp"

#include <gtest/gtest.h>

TEST(AnimalInterface, ValidateHelloWorld) {
    PROJ1::Dog dog1;
    PROJ1::Turtle turtle1;
    ASSERT_EQ(dog1.Sound(), "Woof");
    ASSERT_EQ(turtle1.Sound(), "Hiss");
    auto animalOut = [](const PROJ1::AnimalInterface& animal) {
        std::cout << "Animal: " << animal.Type() << " sound: " << animal.Sound() << std::endl;
    };
    animalOut(dog1);
    animalOut(turtle1);
}
