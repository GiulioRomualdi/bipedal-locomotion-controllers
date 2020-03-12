/**
 * @file ParametersHandlerYarpTest.cpp
 * @authors Giulio Romualdi
 * @copyright 2020 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

// std
#include <memory>

// Catch2
#include <catch2/catch.hpp>

// YARP
#include <yarp/os/Property.h>
#include <yarp/os/Searchable.h>
#include <yarp/os/Value.h>
#include <yarp/os/ResourceFinder.h>
#include <yarp/os/Bottle.h>

#include <BipedalLocomotionControllers/ParametersHandler/IParametersHandler.h>
#include <BipedalLocomotionControllers/ParametersHandler/YarpImplementation.h>

#include <ConfigFolderPath.h>

using namespace BipedalLocomotionControllers::ParametersHandler;

TEST_CASE("Get parameters")
{
    std::vector<int> fibonacciNumbers{1, 1, 2, 3, 5, 8, 13, 21};
    std::vector<std::string> donaldsNephews{"Huey", "Dewey", "Louie"};

    YarpImplementation::unique_ptr parameterHandler = YarpImplementation::make_unique();
    parameterHandler->setParameter("answer_to_the_ultimate_question_of_life", 42);
    parameterHandler->setParameter("pi", 3.14);
    parameterHandler->setParameter("John", "Smith");
    parameterHandler->setParameter("Fibonacci Numbers", fibonacciNumbers);

    SECTION("Get integer")
    {
        int element;
        REQUIRE(parameterHandler->getParameter("answer_to_the_ultimate_question_of_life", element));
        REQUIRE(element == 42);
    }

    SECTION("Get Double")
    {
        double element;
        REQUIRE(parameterHandler->getParameter("pi", element));
        REQUIRE(element == 3.14);
    }

    SECTION("Get String")
    {
        std::string element;
        REQUIRE(parameterHandler->getParameter("John", element));
        REQUIRE(element == "Smith");
    }

    SECTION("Change String")
    {
        parameterHandler->setParameter("John", "Doe");
        std::string element;
        REQUIRE(parameterHandler->getParameter("John", element));
        REQUIRE(element == "Doe");
    }

    SECTION("Get Vector")
    {
        std::vector<int> element;
        REQUIRE(parameterHandler->getParameter("Fibonacci Numbers", element));
        REQUIRE(element == fibonacciNumbers);
    }

    SECTION("Change Vector")
    {
        fibonacciNumbers.push_back(34);
        parameterHandler->setParameter("Fibonacci Numbers", fibonacciNumbers);
        std::vector<int> element;
        REQUIRE(parameterHandler->getParameter("Fibonacci Numbers", element));
        REQUIRE(element == fibonacciNumbers);
    }

    SECTION("Set/Get Group")
    {
        YarpImplementation::shared_ptr setGroup = YarpImplementation::make_shared();
        setGroup->setParameter("Donald's nephews", donaldsNephews);
        parameterHandler->setGroup("CARTOONS", setGroup);
        YarpImplementation::shared_ptr cartoonsGroup = parameterHandler->getGroup("CARTOONS").lock();
        REQUIRE(cartoonsGroup);

        std::vector<std::string> element;
        REQUIRE(cartoonsGroup->getParameter("Donald's nephews", element));
        REQUIRE(element == donaldsNephews);
    }

    SECTION("Print content")
    {
        std::cout << "Parameters: " << *parameterHandler << std::endl;
    }

    SECTION("is Empty")
    {
        YarpImplementation::shared_ptr groupHandler = parameterHandler->getGroup("CARTOONS").lock();
        REQUIRE_FALSE(groupHandler);
        YarpImplementation::shared_ptr setGroup = YarpImplementation::make_shared();
        parameterHandler->setGroup("CARTOONS", setGroup);

        groupHandler = parameterHandler->getGroup("CARTOONS").lock(); //now the pointer should be lockable
        REQUIRE(groupHandler);
        REQUIRE(groupHandler->isEmpty());

        groupHandler->setParameter("Donald's nephews", donaldsNephews);
        REQUIRE_FALSE(groupHandler->isEmpty());
        std::cout << "Parameters: " << *parameterHandler << std::endl;

    }

    SECTION("Clear")
    {
        REQUIRE_FALSE(parameterHandler->isEmpty());
        parameterHandler->clear();
        REQUIRE(parameterHandler->isEmpty());
    }

    SECTION("Set from object")
    {
        yarp::os::ResourceFinder rf;
        parameterHandler->set(rf);

        yarp::os::Property property;
        property.put("value", 10);
        parameterHandler->set(property);
        int expected;
        REQUIRE(parameterHandler->getParameter("value", expected));
        REQUIRE(expected == 10);
    }

    SECTION("Set from RF")
    {
        yarp::os::ResourceFinder &rf = yarp::os::ResourceFinder::getResourceFinderSingleton();
        rf.setDefaultConfigFile("config.ini");

        std::vector<std::string> arguments = {" ", "--from ", getConfigPath()};

        std::vector<char*> argv;
        for (const auto& arg : arguments)
            argv.push_back((char*)arg.data());
        argv.push_back(nullptr);

        rf.configure(argv.size() - 1, argv.data());

        REQUIRE_FALSE(rf.isNull());
        parameterHandler->clear();
        REQUIRE(parameterHandler->isEmpty());
        parameterHandler->set(rf);

        {
            int element;
            REQUIRE(parameterHandler->getParameter("answer_to_the_ultimate_question_of_life", element));
            REQUIRE(element == 42);
        }

        {
            double element;
            REQUIRE(parameterHandler->getParameter("pi", element));
            REQUIRE(element == 3.14);
        }

        {
            std::string element;
            REQUIRE(parameterHandler->getParameter("John", element));
            REQUIRE(element == "Smith");
        }

        {
            std::vector<int> element;
            REQUIRE(parameterHandler->getParameter("Fibonacci Numbers", element));
            REQUIRE(element == fibonacciNumbers);
        }

        YarpImplementation::shared_ptr cartoonsGroup = parameterHandler->getGroup("CARTOONS").lock();
        REQUIRE(cartoonsGroup);

        {
            std::vector<std::string> element;
            REQUIRE(cartoonsGroup->getParameter("Donald's nephews", element));
            REQUIRE(element == donaldsNephews);

        }

        {
            std::vector<int> element;
            REQUIRE(cartoonsGroup->getParameter("Fibonacci_Numbers", element));
            REQUIRE(element == fibonacciNumbers);
        }

        {
            std::string element;
            REQUIRE(cartoonsGroup->getParameter("John", element));
            REQUIRE(element == "Doe");
        }
    }

}
