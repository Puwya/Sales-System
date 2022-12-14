#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <cstdint>
#include <string>
#include <unordered_map>

namespace Access {
enum struct Level { kCashier = 0, kShiftLead, kManagment };
}  // namespace Access

class Employee {
 public:
  /**
   * @brief Construct a new Employee object
   *
   * @param username
   * @param social
   * @param accessLevel
   */
  Employee(
      const std::string &username, const uint32_t &social,
      const Access::Level &accessLevel);

  /**
   * @brief Get the Access object
   *
   * @return Access::Level
   */
  Access::Level getAccess() const;

 private:
  // ACCESS HAS BEEN DELETED FOR COPYING AND MOVING
  /**
   * @brief Construct a new Employee object
   *
   * @param rhs
   */
  Employee(const Employee &rhs) = delete;

  /**
   * @brief Construct a new Employee object
   *
   * @param rhs
   */
  Employee(Employee &&rhs) = delete;

  /**
   * @brief Copy Assignment
   *
   * @param rhs
   * @return Employee&
   */
  Employee &operator=(const Employee &rhs) = delete;

  /**
   * @brief Move Assignment
   *
   * @param rhs
   * @return Employee&
   */
  Employee &operator=(Employee &&rhs) = delete;

  Access::Level accessLevel_;
  std::string username_;
  uint32_t social_;
};

#endif  // EMPLOYEE_H_