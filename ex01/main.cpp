#include "data.hpp"
#include "Serializer.hpp"

int main() {
    Data data;
    data.value = 10;
    Data* ptr = &data;

    unsigned long raw = Serializer::serialize(ptr);
    Data* restoredPtr = NULL;

    std::cout << "Before deserialize of restoredPtr: " << &restoredPtr << "\n";
    restoredPtr = Serializer::deserialize(raw);
    std::cout << "values of restoredPtr: " << restoredPtr->value << "\n";

    std::cout << "Original pointer: " << ptr << "\n";
    std::cout << "Restored pointer: " << restoredPtr << "\n";

    return 0;
}
