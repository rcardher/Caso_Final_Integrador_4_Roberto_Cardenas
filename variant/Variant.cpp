//
// Created by Roberto C on 16/12/24.
//

#include "Variant.h"
#include "enviroment.h"

// Implementación de los constructores
Variant::Variant(const std::string& value, Type type) : type(type) {
    // Inicializar otros miembros según sea necesario
}

Variant::Variant(double value) : type(Type::Number) {
    // Inicializar otros miembros según sea necesario
}

// Implementación de parse_json
Variant Variant::parse_json(const json11::Json& json) {
    // Comprobamos el tipo de JSON y devolvemos el Variant correspondiente
    switch (json.type()) {
        case json11::Json::Type::STRING:
            return Variant(json.string_value(), Type::String);
        case json11::Json::Type::NUMBER:
            return Variant(json.number_value());
        case json11::Json::Type::OBJECT:
            // Manejar objetos JSON
        case json11::Json::Type::ARRAY:
            // Manejar arrays JSON
        case json11::Json::Type::BOOL:
            // Manejar booleanos JSON
        case json11::Json::Type::NUL:
            // Manejar valores nulos JSON

        default:
            throw std::runtime_error("Tipo JSON no soportado");
    }
}

// Implementación de from_json_string
Variant Variant::from_json_string(const std::string& json_str) {
    // Uso del string JSON y manejamos errores
    std::string err;
    auto json = json11::Json::parse(json_str, err);
    if (!err.empty()) {
        throw std::runtime_error("Error al parsear JSON: " + err);
    }
    return parse_json(json);
}