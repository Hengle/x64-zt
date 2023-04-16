#pragma once

#include "../utils/utils.hpp"
#include "../shared/interfaces/zonebuffer.hpp"
#include "../shared/interfaces/zone.hpp"
#include "../shared/interfaces/asset.hpp"

#define ASSET_TEMPLATE typename S, std::int32_t Type, typename H, typename E

#define REGISTER_TEMPLATED_ASSET_CLASS(__name__, __class__, __struct__, __type__, ...) \
	using __name__ = zonetool::__class__<__struct__, __type__, XAssetHeader, XAssetEntry, __VA_ARGS__> \

#define REGISTER_TEMPLATED_ASSET(__name__, __struct__, __type__, ...) \
	using __name__ = zonetool::__name__<__struct__, __type__, XAssetHeader, XAssetEntry, __VA_ARGS__> \

#include "../shared/assets/rawfile.hpp"
#include "../shared/assets/shader.hpp"
#include "../shared/assets/vertexdecl.hpp"
