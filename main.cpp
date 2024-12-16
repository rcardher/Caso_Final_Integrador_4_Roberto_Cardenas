//
// Created by Roberto C on 16/12/24.
//
#include <iostream>
#include "variant/Variant.h"
#include "json11/json11.hpp"

int main() {
    try {
        // Ejemplo de JSON para probar
        std::string json_str = R"({"key": "value"})"; // Cambia este JSON para probar diferentes tipos
        Variant var = Variant::from_json_string(json_str);
        std::cout << "JSON parseado correctamente." << std::endl;
    } catch (const std::exception& e) {
        // Manejo de errores
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
