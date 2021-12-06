#ifndef GLTF_ACCESSOR_H
#define GLTF_ACCESSOR_H

#include "gltf_buffer_view.h"

class gltf_accessor
{
public:

	bool load(const nlohmann::json& object)
	{
		return true;
	}

private:

	std::uint32_t _buffer_view;
	std::uint32_t _byte_offset;
	std::string _type;
	std::uint32_t _component_type;
	std::uint32_t _count;
	glm::vec2 _min;
	glm::vec2 _max;

};

#endif