/**
 * @file DynamicalSystem.h
 * @authors Giulio Romualdi
 * @copyright 2020 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef BIPEDAL_LOCOMOTION_FRAMEWORK_DYNAMICAL_SYSTEM_H
#define BIPEDAL_LOCOMOTION_FRAMEWORK_DYNAMICAL_SYSTEM_H

namespace BipedalLocomotion
{
namespace Simulator
{
template <class... Args> class DynamicalSystem
{

    std::tuple<Args...> m_initialState;
    iDynTree::VectorDynSize m_controlIntput;

public:
    virtual bool setControlInput(const iDynTree::VectorDynSize controlInput);
    virtual void bool dynamics(const std::tuple<Args...>& state,
                               const double& time,
                               std::tuple<Args...>& statDerivative);

    virtual bool setInitialState(const std::tuple<Args...>& initialState);

    ~DynamicalSystem();
};

} // namespace Simulator
} // namespace BipedalLocomotion

#endif
