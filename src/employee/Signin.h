#ifndef SIGNIN_H_
#define SIGNIN_H_
#include <cstdint>
#include <iostream>
#include <istream>
#include <limits>
#include <string>

namespace Signin {
enum struct Options { kExit = 0, kSignin };

/**
 * @brief
 *
 * @param username
 * @param social
 */
void input(std::string &username, uint32_t &social);

/**
 * @brief
 *
 * @param in
 * @param option
 * @return std::istream&
 */
std::istream &operator>>(std::istream &in, Options &option);
}  // namespace Signin

#endif  // SIGNIN_H_