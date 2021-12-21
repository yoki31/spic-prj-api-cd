#ifndef BEHAVIOURSCRIPT_H_
#define BEHAVIOURSCRIPT_H_

#include "Component.hpp"
#include "Collider.hpp"

#if __has_include("BehaviourScript_includes.hpp")
#include "BehaviourScript_includes.hpp"
#endif

namespace spic {
    /**
     * @brief Base class for script running in the game.
     */
    class BehaviourScript : public Component {
        public:
            /**
             * @brief constructor for BehaviourScript
             * @sharedapi
             */
            BehaviourScript();

            /**
             * @brief TODO
             * @spicapi
             */
            virtual void OnStart();

            /**
             * @brief TODO
             * @spicapi
             */
            virtual void OnUpdate();

            /**
             * @brief Triggers after all Update functions have been called.
             * @sharedapi
             */
            virtual void OnLateUpdate() { }

            /**
             * @brief Sent when another object enters a trigger collider
             *        attached to this object (2D physics only).
             * @spicapi
             */
            virtual void OnTriggerEnter2D(const Collider& collider);

            /**
             * @brief Sent when another object leaves a trigger collider
             *        attached to this object (2D physics only).
             * @spicapi
             */
            virtual void OnTriggerExit2D(const Collider& collider);

            /**
             * @brief Sent each frame where another object is within a trigger
             *        collider attached to this object (2D physics only).
             * @spicapi
             */
            virtual void OnTriggerStay2D(const Collider& collider);

            /**
             * @brief Whether the script has been started.
             * @param started desired value
             * @sharedapi
             */
            void Started(bool started);

            /**
             * @brief Whether the script has been started.
             * @return current value
             * @sharedapi
             */
            bool Started() const;

        private:
#if __has_include("BehaviourScript_private.hpp")
#include "BehaviourScript_private.hpp"
#endif
    };

}

#endif // BEHAVIOURSCRIPT_H_
