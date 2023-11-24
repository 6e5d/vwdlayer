#pragma once

#include <stdint.h>
#include <vulkan/vulkan.h>

#include "../../vkhelper/include/image.h"

typedef struct {
	int32_t offset[2];
	uint32_t size[2];
	VkhelperImage image;
	VkSampler sampler;
} Vwdlayer;
