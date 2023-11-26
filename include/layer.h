#ifndef INCLUDEGUARD_VWDLAYER_LAYERH
#define INCLUDEGUARD_VWDLAYER_LAYERH

#include <stdint.h>
#include <vulkan/vulkan.h>

#include "../../vkhelper/include/image.h"

typedef struct {
int32_t offset[2];
VkhelperImage image;
} Vwdlayer;

#endif
