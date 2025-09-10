#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main()
{
	//Q1
	glm::vec3 p(1, 4, -5);
	glm::vec3 v(5, 1, 4);
	p = p + v;
	std::cout << "Q1 " << glm::to_string(p) << std::endl;

	//Q2
	glm::vec3 v1(1, 0, 0);
	glm::vec3 v2(0, 1, 0);
	std::cout << "Q2 " << glm::to_string(v1 + v2) << std::endl;

	//Q3
	glm::vec3 v3(0, 1, 0);
	v3 *= 2;
	std::cout << "Q3 " << glm::to_string(v3) << std::endl;

	//Q4
	glm::vec3 p1(8, 2, 5);
	glm::vec3 p2(1, -1, 4);
	glm::vec3 v4 = p2 - p1;
	std::cout << "Q4 " << glm::to_string(v4) << std::endl;
	
	//Q5
	glm::vec3 v5(1, 3, 4);
	v5 = glm::normalize(v5);
	std::cout << "Q5 " << glm::to_string(v5) << std::endl;

	//Q6
	glm::vec3 v6(1, -1, 4);
	glm::vec4 v7(v6, 0);
	std::cout << "Q6 " << glm::to_string(v7) << std::endl;

	return 0;
}