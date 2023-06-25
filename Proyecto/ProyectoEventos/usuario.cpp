/**
 * @file usuario.cpp
 * @brief Implementación de la clase Usuario.
 */
#include "usuario.h"

/**
 * @brief Constructor de la clase Usuario.
 *
 * @param nombre El nombre del usuario.
 * @param correo El correo electrónico del usuario.
 * @param rol El rol del usuario.
 * @param contrasena La contraseña del usuario.
 */
Usuario::Usuario(const std::string& nombre, const std::string& correo, const std::string& rol, const std::string& contrasena)
    : nombre(nombre), correo(correo), rol(rol), contrasena(contrasena)
{
}

/**
 * @brief Obtiene el nombre del usuario.
 *
 * @return El nombre del usuario.
 */
std::string Usuario::getNombre() const {
    return nombre;
}

/**
 * @brief Obtiene el correo electrónico del usuario.
 *
 * @return El correo electrónico del usuario.
 */
std::string Usuario::getCorreo() const {
    return correo;
}

/**
 * @brief Obtiene el rol del usuario.
 *
 * @return El rol del usuario.
 */
std::string Usuario::getRol() const {
    return rol;
}

/**
 * @brief Obtiene la contraseña del usuario.
 *
 * @return La contraseña del usuario.
 */
std::string Usuario::getContrasena() const {
    return contrasena;
}
