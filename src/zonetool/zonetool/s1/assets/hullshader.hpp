#pragma once
#include "../zonetool.hpp"

namespace zonetool::s1
{
	REGISTER_TEMPLATED_ASSET_CLASS(hull_shader, shader, MaterialHullShader, ASSET_TYPE_HULLSHADER, shader_type::hullshader);
}