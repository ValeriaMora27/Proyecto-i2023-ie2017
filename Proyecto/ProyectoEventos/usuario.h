/**
 * @file usuario.h
 * @brief Definición de la clase Usuario.
 */

#ifndef USUARIO_H
#define USUARIO_H

#include <string>

/**
 * @class Usuario
 * @brief Clase que representa a un usuario.
 */
class Usuario {
public:
    /**
     * @brief Constructor de la clase Usuario.
     *
     * @param nombre El nombre del usuario.
     * @param correo El correo electrónico del usuario.
     * @param rol El rol del usuario.
     * @param contrasena La contraseña del usuario.
     */
    Usuario(const std::string& nombre, const std::string& correo, const std::string& rol, const std::string& contrasena);

    /**
     * @brief Obtiene el nombre del usuario.
     *
     * @return El nombre del usuario.
     */
    std::string getNombre() const;

    /**
     * @brief Obtiene el correo electrónico del usuario.
     *
     * @return El correo electrónico del usuario.
     */
    std::string getCorreo() const;

    /**
     * @brief Obtiene el rol del usuario.
     *
     * @return El rol del usuario.
     */
    std::string getRol() const;

    /**
     * @brief Obtiene la contraseña del usuario.
     *
     * @return La contraseña del usuario.
     */
    std::string getContrasena() const;

private:
    std::string nombre; /**< El nombre del usuario. */
    std::string correo; /**< El correo electrónico del usuario. */
    std::string rol; /**< El rol del usuario. */
    std::string contrasena; /**< La contraseña del usuario. */
};

#endif // USUARIO_H
