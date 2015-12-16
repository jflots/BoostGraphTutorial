#ifndef MY_VERTEX_H
#define MY_VERTEX_H

#include <string>
#include <iostream>

class my_vertex
{
public:
  my_vertex(
    const std::string& name = "",
    const std::string& description = "",
    const double x = 0.0,
    const double y = 0.0
  ) noexcept;
  std::string m_name;
  std::string m_description;
  double m_x;
  double m_y;
};

bool operator==(const my_vertex& lhs, const my_vertex& rhs) noexcept;
bool operator!=(const my_vertex& lhs, const my_vertex& rhs) noexcept;
std::ostream& operator<<(std::ostream& os, const my_vertex& v) noexcept;
std::istream& operator>>(std::istream& os, my_vertex& v) noexcept;

void my_vertex_test() noexcept;

#endif // MY_VERTEX_H
