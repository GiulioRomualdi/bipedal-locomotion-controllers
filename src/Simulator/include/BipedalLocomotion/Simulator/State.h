/**
 * @file Integrator.h
 * @authors Giulio Romualdi
 * @copyright 2020 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef BIPEDAL_LOCOMOTION_FRAMEWORK_SIMULATOR_STATE_H
#define BIPEDAL_LOCOMOTION_FRAMEWORK_SIMULATOR_STATE_H

#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include <typeinfo>

namespace BipedalLocomotion
{
namespace Simulator
{

template <class... Ts> struct State
{
};

template <class T, class... Ts> struct State<T, Ts...> : State<Ts...>
{
    State(T t, Ts... ts)
        : State<Ts...>(ts...)
        , tail(t)
    {
    }

    T tail;
};

template <std::size_t, class> struct elem_type_holder;

template <class T, class... Ts> struct elem_type_holder<0, State<T, Ts...>>
{
    typedef T type;
};

template <std::size_t k, class T, class... Ts> struct elem_type_holder<k, State<T, Ts...>>
{
    typedef typename elem_type_holder<k - 1, State<Ts...>>::type type;
};

template <std::size_t k, class... Ts>
typename std::enable_if<k == 0, typename elem_type_holder<0, State<Ts...>>::type&>::type
get(State<Ts...>& t)
{
    return t.tail;
}

template <std::size_t k, class T, class... Ts>
typename std::enable_if<k != 0, typename elem_type_holder<k, State<T, Ts...>>::type&>::type
get(State<T, Ts...>& t)
{
    State<Ts...>& base = t;
    return get<k - 1>(base);
}

template <std::size_t k, class... Ts>
const typename std::enable_if<k == 0, typename elem_type_holder<0, State<Ts...>>::type&>::type
get(State<Ts...>& t) const
{
    return t.tail;
}

template <std::size_t k, class T, class... Ts>
const typename std::enable_if<k != 0, typename elem_type_holder<k, State<T, Ts...>>::type&>::type
get(State<T, Ts...>& t) const
{
    State<Ts...>& base = t;
    return get<k - 1>(base);
}


} // namespace Simulator
} // namespace BipedalLocomotion

#endif //
