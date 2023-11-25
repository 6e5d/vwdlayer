#pragma once

#include <stdint.h>
#include <vulkan/vulkan.h>

#include "../../vkhelper/include/image.h"

typedef struct {
	int32_t offset[2];
	VkhelperImage image;
} Vwdlayer;
