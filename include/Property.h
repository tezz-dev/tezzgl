#include TEZZGL_PROPERTY_H
#define TEZZGL_PROPERTY_H

template <typename T>
class Property {
private:
    T value;
public:
    auto set = []( T value ) {};

    Property( T _value ) {
        value = _value;
    }

    T& operator=( const T& _value ) {
        value = _value;
    }

    const T& operator()() const {
        return value;
    }

    explicit operator const T& () const {
        return value;
    }

    T* operator->() {
        return &value;
    }
}

#endif
