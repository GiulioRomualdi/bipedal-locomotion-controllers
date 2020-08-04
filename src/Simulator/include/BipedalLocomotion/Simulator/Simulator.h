/**
 * @file Simulator.h
 * @authors Giulio Romualdi
 * @copyright 2020 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef BIPEDAL_LOCOMOTION_SIMULATOR_SIMULATOR_H
#define BIPEDAL_LOCOMOTION_SIMULATOR_SIMULATOR_H

#include <memory>

#include <iDynTree/Core/VectorDynSize.h>
#include <iDynTree/KinDynComputations.h>
#include <iDynTree/Model/Model.h>
#include <iDynTree/Model/FreeFloatingState.h>

#include <BipedalLocomotion/ContactModels/ContinuousContactModel.h>
#include <BipedalLocomotion/ParametersHandler/IParametersHandler.h>
#include <BipedalLocomotion/System/ForwardEuler.h>
#include <BipedalLocomotion/System/FloatingBaseSystemDynamics.h>

namespace BipedalLocomotion
{
namespace Simulator
{
class Simulator
{
    struct Contact
    {
        std::shared_ptr<ContactModels::ContinuousContactModel> model;
        iDynTree::FrameIndex indexInTheModel;
        iDynTree::Transform frameNullForce;
        iDynTree::MatrixDynSize jacobian;
        bool isInContact{true};
    };

    std::unordered_map<std::string, std::pair<const std::string, const iDynTree::Transform>> m_baseFrames;

    std::shared_ptr<iDynTree::KinDynComputations> m_kinDyn;
    std::shared_ptr<System::FloatingBaseDynamicalSystem> m_dynamicalSystem;
    std::unique_ptr<System::ForwardEuler<System::FloatingBaseDynamicalSystem>> m_integrator;

    //TODO move from here
    double m_length, m_width, m_springCoeff, m_damperCoeff;

    std::size_t m_numberOfDoF;
    double m_dT;

    Contact m_leftContact;
    Contact m_rightContact;

    iDynTree::Vector3 m_gravity;

    iDynTree::VectorDynSize m_jointTorques;

    iDynTree::FrameIndex m_baseFrame;

    bool setBaseFrame(const iDynTree::FrameIndex& frameBaseIndex, const std::string& name);

    enum class State
    {
        NotInitialized,
        Initialized,
        Ready,
        Running
    };

    State m_state{State::NotInitialized};

public:

    Simulator(const iDynTree::Model& model);

    bool initialize(std::weak_ptr<ParametersHandler::IParametersHandler> handlerWeak);

    bool reset(const iDynTree::VectorDynSize& initialJointValues,
               const iDynTree::Transform& leftFootTransform,
               const iDynTree::Transform& rightFootTransform);

    bool advance(const double& time = 0);

    iDynTree::Wrench leftWrench();
    iDynTree::Wrench rightWrench();

    const iDynTree::VectorDynSize& jointPositions() const;
    const iDynTree::VectorDynSize& jointVelocities() const;

    iDynTree::Transform baseTransform() const;
    iDynTree::Twist baseVelocity() const;

    void setLeftFootNullForceTransform(const iDynTree::Transform& transform);

    void setRightFootNullForceTransform(const iDynTree::Transform& transform);

    void setLeftFootState(bool isInContact);
    void setRightFootState(bool isInContact);

    bool setTorqueReferences(const iDynTree::VectorDynSize& torques);
    bool setAccelerationReferences(const iDynTree::VectorDynSize& acceleration);
    bool setVelocityReferences(const iDynTree::VectorDynSize& velocity);
};
} // namespace Simulator
} // namespace BipedalLocomotion

#endif // BIPEDAL_LOCOMOTION_SIMULATOR_SIMULATOR_H
