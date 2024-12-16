//
// Created by Roberto C on 16/12/24.
//


#ifndef VARIANT_H
#define VARIANT_H

#include <vector>
#include <string>
#include <map>
#include <json11.hpp>


class Variant {
public:
    enum class Type { String, Number, // otros tipos según sea necesario
    };

    // Implementamos Constructores
    Variant(const std::string& value, Type type);
    Variant(double value);

    // Métodos estáticos
    static Variant parse_json(const json11::Json& json);
    static Variant from_json_string(const std::string& json_str);

private:
    Type type;
    // Otros miembros de datos
};

#endif // VARIANT_H
