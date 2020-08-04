/**
 * @file RegularizationElements.h
 * @authors Giulio Romualdi
 * @copyright 2019 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef BIPEDAL_LOCOMOTION_OPTIMAL_CONTROL_UTILITIES_REGULARIZATION_ELEMENT_H
#define BIPEDAL_LOCOMOTION_OPTIMAL_CONTROL_UTILITIES_REGULARIZATION_ELEMENT_H

#include <BipedalLocomotion/OptimalControlUtilities/ControlProblemElements.h>
#include <BipedalLocomotion/OptimalControlUtilities/PDController.h>
#include <BipedalLocomotion/OptimalControlUtilities/VariableHandler.h>

namespace BipedalLocomotion
{

namespace OptimalControlUtilities
{

/**
 * RegularizationElement describes an element used to regularize unknown variables
 * It is in general used as CostFunctionElement of the form  \f$ x^\top A^\top A x \f$
 */
class RegularizationElement : public ControlTask
{
public:
    /**
     * Constructor.
     * @param kinDyn an iDynTree kinDyn computation object
     * @param handler the variable handler object
     * @param variableName name of the unknown variable that should minimized
     * @throw std::runtime_error if the variableName is not defined in the handler
     */
    RegularizationElement(std::shared_ptr<iDynTree::KinDynComputations> kinDyn,
                          const VariableHandler& handler,
                          const std::string& variableName);
};

/**
 * RegularizationWithControlElement describes an element used to regularize unknown variables using
 * a control law It is in general used as CostFunctionElement of the form  \f$ x^\top A^\top A x +
 * g^\top x \f$
 */
class RegularizationWithControlElement : public RegularizationElement
{
    /** PD controller */
    LinearPD<iDynTree::VectorDynSize> m_pd;

public:
    /**
     * Constructor.
     * @param kinDyn an iDynTree kinDyn computation object
     * @param handler the variable handler object
     * @param controller linear PD controller
     * @param variableName name of the unknown variable that should minimized
     * @throw std::runtime_error if the variableName is not defined in the handler
     */
    RegularizationWithControlElement(std::shared_ptr<iDynTree::KinDynComputations> kinDyn,
                                     const LinearPD<iDynTree::VectorDynSize>& controller,
                                     const VariableHandler& handler,
                                     const std::string& variableName);

    /**
     * Set the desired trajectory
     * @param acceleration desired acceleration
     * @param velocity  desired velocity
     * @param position desired position
     */
    void setReference(const iDynTree::VectorDynSize& feedforward,
                      const iDynTree::VectorDynSize& stateDerivative,
                      const iDynTree::VectorDynSize& state);

    /**
     * Set the state
     * @param velocity current velocity
     * @param position current position
     */
    void setState(const iDynTree::VectorDynSize& stateDerivative, const iDynTree::VectorDynSize& state);

    /**
     * Set the PD gains
     * @param kp proportional gain
     * @param kd derivative gain
     */
    void setPDGains(const iDynTree::VectorDynSize& kp, const iDynTree::VectorDynSize& kd);

    /**
     * Get (and compute) the element vector
     * @return the element vector
     */
    virtual const iDynTree::VectorDynSize& getB() final;
};

} // namespace OptimalControlUtilities
} // namespace BipedalLocomotion

#endif // BIPEDAL_LOCOMOTION_OPTIMAL_CONTROL_UTILITIES_REGULARIZATION_ELEMENT_H
