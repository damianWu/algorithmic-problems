#ifndef ALGORITHMS_DATA_STRUCTURES_EXCEPTION_H
#define ALGORITHMS_DATA_STRUCTURES_EXCEPTION_H

#include <stdexcept>

namespace ADSException {
// All exception classes should derive by template class which is
// out of my skills right now.
// Exception classes
    class EmptyVectorException : public std::runtime_error {
    public:
        explicit EmptyVectorException(const std::string &what_message)
                : std::runtime_error{what_message} {}
    };

    class TargetNotFoundException : public std::runtime_error {
    public:
        explicit TargetNotFoundException(const std::string &what_message)
                : std::runtime_error{what_message} {}
    };

}

#endif //ALGORITHMS_DATA_STRUCTURES_EXCEPTION_H
