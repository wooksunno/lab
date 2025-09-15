#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

const double DEGREES_TO_RADIANS = glm::pi<double>() / 180.0;
const double RADIANS_TO_DEGREES = 180.0 / glm::pi<double>();

int main() {
	glm::vec3 v(2, -1, 1);
	glm::vec3 u(1, 1, 2);
	float a = glm::dot(v, u);
	float b = a / (glm::length(u) * glm::length(v));
	float angle = glm::acos(b) * RADIANS_TO_DEGREES;
	std::cout << angle << std::endl;
	return 0;
}