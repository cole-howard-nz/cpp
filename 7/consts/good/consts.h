#pragma once

/* Best practice for creating global constants (for most use cases):
    - define global consts in a namespace within a header file
    - define the consts as inline constexpr
    - import the header files to files that require the constants
*/

namespace consts {
    inline constexpr int number_of_students { 30 };
    inline constexpr int number_of_classes { 15 };
}
