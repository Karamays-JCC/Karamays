#include "gl_vertex_array.h"

gl_vertex_array::~gl_vertex_array()
{
	glDeleteVertexArrays(1, &_handle);
}

void gl_vertex_array::tick(std::float_t delta_time)
{
	if (_descriptor && _descriptor->is_dirty())
	{
		_fill();
	}
}

void gl_vertex_array::bind()
{
	glBindVertexArray(_handle);
}

void gl_vertex_array::unbind()
{
	glBindVertexArray(0);
}

void gl_vertex_array::enable_pointers()
{
	if (_descriptor)
	{
		const std::size_t _size = _descriptor->get_layouts().size();

		for (std::uint32_t i = 0; i < _size; ++i)
		{
			glEnableVertexAttribArray(i);
		}
	}
}

void gl_vertex_array::disable_pointers()
{
	if (_descriptor)
	{
		const std::size_t _size = _descriptor->get_layouts().size();

		for (std::uint32_t i = 0; i < _size; ++i)
		{
			glDisableVertexAttribArray(i);
		}
	}
}

const void* gl_vertex_array_descriptor::get_stream() const
{
	return _stream.data();
}

const std::size_t gl_vertex_array_descriptor::get_stream_size() const
{
	return _stream.size();
}

const std::vector<gl_vertex_attribute_layout> gl_vertex_array_descriptor::get_layouts() const
{
	return _layouts;
}
