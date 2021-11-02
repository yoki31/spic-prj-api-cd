#ifndef CIRCLECOLLIDER_H_
#define CIRCLECOLLIDER_H_

#include "Collider.hpp"

namespace spic {

    /**
     * @brief A collider which represents a circular collision area.
     */
    class CircleCollider : public Collider {
        public:
            /**
             * @brief Constructor.
             */
            CircleCollider();

            /**
             * @brief Constructor.
             * @param radius The radius for the box collider.
             */
            CircleCollider(double radius);

            /**
             * @brief Get the collider's radius
             * @return The radius
             */
            double Radius() const { return radius; }

            /**
             * @brief Set the collider's radius
             * @param newRadius The desired radius
             */
            void Radius(double newRadius) { radius = newRadius; }

        private:
            double radius;
    };

}

#endif // CIRCLECOLLIDER_H_