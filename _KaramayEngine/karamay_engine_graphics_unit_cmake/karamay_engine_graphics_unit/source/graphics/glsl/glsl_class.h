#ifndef H_GLSL_CLASS
#define H_GLSL_CLASS

#include "public/stl.h"
#include "public/glm.h"
#include "public/_glew.h"

enum class glsl_type_enum
{
    FLOAT = GL_FLOAT,
    FLOAT_VEC2 = GL_FLOAT_VEC2,
    FLOAT_VEC3 = GL_FLOAT_VEC3,
    FLOAT_VEC4 = GL_FLOAT_VEC4,
    DOUBLE = GL_DOUBLE,
    DOUBLE_VEC2 = GL_DOUBLE_VEC2,
    DOUBLE_VEC3 = GL_DOUBLE_VEC3,
    DOUBLE_VEC4 = GL_DOUBLE_VEC4,
    INT = GL_INT,
    INT_VEC2 = GL_INT_VEC2,
    INT_VEC3 = GL_INT_VEC3,
    INT_VEC4 = GL_INT_VEC4,
    UNSIGNED_INT = GL_UNSIGNED_INT,
    UNSIGNED_INT_VEC2 = GL_UNSIGNED_INT_VEC2,
    UNSIGNED_INT_VEC3 = GL_UNSIGNED_INT_VEC3,
    UNSIGNED_INT_VEC4 = GL_UNSIGNED_INT_VEC4,
    BOOL = GL_BOOL,
    BOOL_VEC2 = GL_BOOL_VEC2,
    BOOL_VEC3 = GL_BOOL_VEC3,
    BOOL_VEC4 = GL_BOOL_VEC4,
    FLOAT_MAT2 = GL_FLOAT_MAT2,
    FLOAT_MAT3 = GL_FLOAT_MAT3,
    FLOAT_MAT4 = GL_FLOAT_MAT4,
    FLOAT_MAT2x3 = GL_FLOAT_MAT2x3,
    FLOAT_MAT2x4 = GL_FLOAT_MAT2x4,
    FLOAT_MAT3x2 = GL_FLOAT_MAT3x2,
    FLOAT_MAT3x4 = GL_FLOAT_MAT3x4,
    FLOAT_MAT4x2 = GL_FLOAT_MAT4x2,
    FLOAT_MAT4x3 = GL_FLOAT_MAT4x3,
    DOUBLE_MAT2 = GL_DOUBLE_MAT2,
    DOUBLE_MAT3 = GL_DOUBLE_MAT3,
    DOUBLE_MAT4 = GL_DOUBLE_MAT4,
    DOUBLE_MAT2x3 = GL_DOUBLE_MAT2x3,
    DOUBLE_MAT2x4 = GL_DOUBLE_MAT2x4,
    DOUBLE_MAT3x2 = GL_DOUBLE_MAT3x2,
    DOUBLE_MAT3x4 = GL_DOUBLE_MAT3x4,
    DOUBLE_MAT4x2 = GL_DOUBLE_MAT4x2,
    DOUBLE_MAT4x3 = GL_DOUBLE_MAT4x3,
    SAMPLER_1D = GL_SAMPLER_1D,
    SAMPLER_2D = GL_SAMPLER_2D,
    SAMPLER_3D = GL_SAMPLER_3D,
    SAMPLER_CUBE = GL_SAMPLER_CUBE,
    SAMPLER_1D_SHADOW = GL_SAMPLER_1D_SHADOW,
    SAMPLER_2D_SHADOW = GL_SAMPLER_2D_SHADOW,
    SAMPLER_1D_ARRAY = GL_SAMPLER_1D_ARRAY,
    SAMPLER_2D_ARRAY = GL_SAMPLER_2D_ARRAY,
    SAMPLER_CUBE_MAP_ARRAY = GL_SAMPLER_CUBE_MAP_ARRAY,
    SAMPLER_1D_ARRAY_SHADOW = GL_SAMPLER_1D_ARRAY_SHADOW,
    SAMPLER_2D_ARRAY_SHADOW = GL_SAMPLER_2D_ARRAY_SHADOW,
    SAMPLER_2D_MULTISAMPLE = GL_SAMPLER_2D_MULTISAMPLE,
    SAMPLER_2D_MULTISAMPLE_ARRAY = GL_SAMPLER_2D_MULTISAMPLE_ARRAY,
    SAMPLER_CUBE_SHADOW = GL_SAMPLER_CUBE_SHADOW,
    SAMPLER_CUBE_MAP_ARRAY_SHADOW = GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW,
    SAMPLER_BUFFER = GL_SAMPLER_BUFFER,
    SAMPLER_2D_RECT = GL_SAMPLER_2D_RECT,
    SAMPLER_2D_RECT_SHADOW = GL_SAMPLER_2D_RECT_SHADOW,
    INT_SAMPLER_1D = GL_INT_SAMPLER_1D,
    INT_SAMPLER_2D = GL_INT_SAMPLER_2D,
    INT_SAMPLER_3D = GL_INT_SAMPLER_3D,
    INT_SAMPLER_CUBE = GL_INT_SAMPLER_CUBE,
    INT_SAMPLER_1D_ARRAY = GL_INT_SAMPLER_1D_ARRAY,
    INT_SAMPLER_2D_ARRAY = GL_INT_SAMPLER_2D_ARRAY,
    INT_SAMPLER_CUBE_MAP_ARRAY = GL_INT_SAMPLER_CUBE_MAP_ARRAY,
    INT_SAMPLER_2D_MULTISAMPLE = GL_INT_SAMPLER_2D_MULTISAMPLE,
    INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    INT_SAMPLER_BUFFER = GL_INT_SAMPLER_BUFFER,
    INT_SAMPLER_2D_RECT = GL_INT_SAMPLER_2D_RECT,
    UNSIGNED_INT_SAMPLER_1D = GL_UNSIGNED_INT_SAMPLER_1D,
    UNSIGNED_INT_SAMPLER_2D = GL_UNSIGNED_INT_SAMPLER_2D,
    UNSIGNED_INT_SAMPLER_3D = GL_UNSIGNED_INT_SAMPLER_3D,
    UNSIGNED_INT_SAMPLER_CUBE = GL_UNSIGNED_INT_SAMPLER_CUBE,
    UNSIGNED_INT_SAMPLER_1D_ARRAY = GL_UNSIGNED_INT_SAMPLER_1D_ARRAY,
    UNSIGNED_INT_SAMPLER_2D_ARRAY = GL_UNSIGNED_INT_SAMPLER_2D_ARRAY,
    UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
    UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
    UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
    UNSIGNED_INT_SAMPLER_BUFFER = GL_UNSIGNED_INT_SAMPLER_BUFFER,
    UNSIGNED_INT_SAMPLER_2D_RECT = GL_UNSIGNED_INT_SAMPLER_2D_RECT,
    IMAGE_1D = GL_IMAGE_1D,
    IMAGE_2D = GL_IMAGE_2D,
    IMAGE_3D = GL_IMAGE_3D,
    IMAGE_2D_RECT = GL_IMAGE_2D_RECT,
    IMAGE_CUBE = GL_IMAGE_CUBE,
    IMAGE_BUFFER = GL_IMAGE_BUFFER,
    IMAGE_1D_ARRAY = GL_IMAGE_1D_ARRAY,
    IMAGE_2D_ARRAY = GL_IMAGE_2D_ARRAY,
    IMAGE_CUBE_MAP_ARRAY = GL_IMAGE_CUBE_MAP_ARRAY,
    IMAGE_2D_MULTISAMPLE = GL_IMAGE_2D_MULTISAMPLE,
    IMAGE_2D_MULTISAMPLE_ARRAY = GL_IMAGE_2D_MULTISAMPLE_ARRAY,
    INT_IMAGE_1D = GL_INT_IMAGE_1D,
    INT_IMAGE_2D = GL_INT_IMAGE_2D,
    INT_IMAGE_3D = GL_INT_IMAGE_3D,
    INT_IMAGE_2D_RECT = GL_INT_IMAGE_2D_RECT,
    INT_IMAGE_CUBE = GL_INT_IMAGE_CUBE,
    INT_IMAGE_BUFFER = GL_INT_IMAGE_BUFFER,
    INT_IMAGE_1D_ARRAY = GL_INT_IMAGE_1D_ARRAY,
    INT_IMAGE_2D_ARRAY = GL_INT_IMAGE_2D_ARRAY,
    INT_IMAGE_CUBE_MAP_ARRAY = GL_INT_IMAGE_CUBE_MAP_ARRAY,
    INT_IMAGE_2D_MULTISAMPLE = GL_INT_IMAGE_2D_MULTISAMPLE,
    INT_IMAGE_2D_MULTISAMPLE_ARRAY = GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
    UNSIGNED_INT_IMAGE_1D = GL_UNSIGNED_INT_IMAGE_1D,
    UNSIGNED_INT_IMAGE_2D = GL_UNSIGNED_INT_IMAGE_2D,
    UNSIGNED_INT_IMAGE_3D = GL_UNSIGNED_INT_IMAGE_3D,
    UNSIGNED_INT_IMAGE_2D_RECT = GL_UNSIGNED_INT_IMAGE_2D_RECT,
    UNSIGNED_INT_IMAGE_CUBE = GL_UNSIGNED_INT_IMAGE_CUBE,
    UNSIGNED_INT_IMAGE_BUFFER = GL_UNSIGNED_INT_IMAGE_BUFFER,
    UNSIGNED_INT_IMAGE_1D_ARRAY = GL_UNSIGNED_INT_IMAGE_1D_ARRAY,
    UNSIGNED_INT_IMAGE_2D_ARRAY = GL_UNSIGNED_INT_IMAGE_2D_ARRAY,
    UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY,
    UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE,
    UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
    UNSIGNED_INT_ATOMIC_COUNTER = GL_UNSIGNED_INT_ATOMIC_COUNTER
};


/*
 * glsl type
 *
 * */
class glsl_t {
public:
    [[nodiscard]] virtual const std::string& token() const {};
};

struct glsl_transparent_t_meta
{
    std::uint32_t components_count;
    std::uint32_t component_type_size;
    std::string component_type_name;
    std::uint32_t component_type_gl_enum;
    std::uint32_t type_size;
    std::string semantic_name;

    glsl_transparent_t_meta(
            std::uint32_t _components_count,
            std::uint32_t _component_type_size,
            std::uint32_t _component_type_gl_enum,
            std::uint32_t _type_size,
            std::string _semantic_name) :
            components_count(_components_count),
            component_type_size(_component_type_size),
            component_type_gl_enum(_component_type_gl_enum),
            type_size(_type_size),
            semantic_name(_semantic_name)
    {}
};

/*
 * glsl transparent type
 *
 * */
class glsl_transparent_t : public glsl_t{
public:
    virtual std::uint8_t* data();
	[[nodiscard]] virtual const std::uint8_t* data() const;
	[[nodiscard]] virtual const std::int64_t size() const;
};

/*
 * glsl opaque type
 * sampler/image/atomic_counter
 * */
class glsl_opaque_t : public glsl_t{

};


/*
 * sampler/image
 * */
class glsl_texture_handler_t : glsl_opaque_t{
public:
    virtual void bind() = 0;
    virtual void unbind() = 0;
};

enum class glsl_storage_qualifier
{
    _const,
    _in,
    _out,
    _uniform,
    _buffer,
    _shared
};

enum class glsl_auxiliary_storage_qualifier
{
    _centroid,
    _sampler,
    _patch,
};

/*
 *
 * */
class glsl_interface_block_t : public glsl_t{
public:
    glsl_interface_block_t() = default;
    glsl_interface_block_t(const glsl_interface_block_t&) = delete;

    ~glsl_interface_block_t() = default;

public:
    virtual std::uint8_t* data() = 0;
    [[nodiscard]] virtual const std::uint8_t* data() const = 0;
    [[nodiscard]] virtual std::int64_t size() const = 0;
    const std::string& token() const = 0;
};

enum class glsl_interface_block_matrix_layout
{
    ROW_MAJOR,
    COLUMN_MAJOR
};


#define TOKEN_STR(__TOKEN__) #__TOKEN__

#define DEFINE_GLSL_TRANSPARENT_T(GLSL_T_NAME, GLSL_T_SEMANTIC_NAME)\
class glsl_##GLSL_T_NAME final : public glsl_transparent_t{\
public:\
	glsl_##GLSL_T_NAME() = default;\
	explicit glsl_##GLSL_T_NAME(const glm::GLSL_T_SEMANTIC_NAME& value){}\
	~glsl_##GLSL_T_NAME() = default;\
public:\
	glm::GLSL_T_SEMANTIC_NAME client_value;\
};\



// float scalar && vectors && matrices
DEFINE_GLSL_TRANSPARENT_T(float, vec1)
DEFINE_GLSL_TRANSPARENT_T(vec2, vec2)
DEFINE_GLSL_TRANSPARENT_T(vec3, vec3)
DEFINE_GLSL_TRANSPARENT_T(vec4, vec4)
DEFINE_GLSL_TRANSPARENT_T(mat2, mat2)
DEFINE_GLSL_TRANSPARENT_T(mat2x3, mat2x3)
DEFINE_GLSL_TRANSPARENT_T(mat2x4, mat2x4)
DEFINE_GLSL_TRANSPARENT_T(mat3, mat3)
DEFINE_GLSL_TRANSPARENT_T(mat3x2, mat3x2)
DEFINE_GLSL_TRANSPARENT_T(mat3x4, mat3x4)
DEFINE_GLSL_TRANSPARENT_T(mat4, mat4)
DEFINE_GLSL_TRANSPARENT_T(mat4x2, mat4x2)
DEFINE_GLSL_TRANSPARENT_T(mat4x3, mat4x3)
// double scalar && vectors && matrices
DEFINE_GLSL_TRANSPARENT_T(double, dvec1)
DEFINE_GLSL_TRANSPARENT_T(dvec2, dvec2)
DEFINE_GLSL_TRANSPARENT_T(dvec3, dvec3)
DEFINE_GLSL_TRANSPARENT_T(dvec4, dvec4)
DEFINE_GLSL_TRANSPARENT_T(dmat2, dmat2)
DEFINE_GLSL_TRANSPARENT_T(dmat2x3, dmat2x3)
DEFINE_GLSL_TRANSPARENT_T(dmat2x4, dmat2x4)
DEFINE_GLSL_TRANSPARENT_T(dmat3, dmat3)
DEFINE_GLSL_TRANSPARENT_T(dmat3x2, dmat3x2)
DEFINE_GLSL_TRANSPARENT_T(dmat3x4, dmat3x4)
DEFINE_GLSL_TRANSPARENT_T(dmat4, dmat4)
DEFINE_GLSL_TRANSPARENT_T(dmat4x2, dmat4x2)
DEFINE_GLSL_TRANSPARENT_T(dmat4x3, dmat4x3)
// int scalar && vectors
DEFINE_GLSL_TRANSPARENT_T(int, ivec1)
DEFINE_GLSL_TRANSPARENT_T(ivec2, ivec2)
DEFINE_GLSL_TRANSPARENT_T(ivec3, ivec3)
DEFINE_GLSL_TRANSPARENT_T(ivec4, ivec4)
// uint scalar && vectors
DEFINE_GLSL_TRANSPARENT_T(uint, uvec1)
DEFINE_GLSL_TRANSPARENT_T(uvec2, uvec2)
DEFINE_GLSL_TRANSPARENT_T(uvec3, uvec3)
DEFINE_GLSL_TRANSPARENT_T(uvec4, uvec4)


#endif
