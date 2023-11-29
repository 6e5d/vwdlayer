#ifndef INCLUDEGUARD_VWDLAYER_LAYERH
#define INCLUDEGUARD_VWDLAYER_LAYERH

#include <stdint.h>
#include <vulkan/vulkan.h>

#include "../../vkhelper2/include/vkhelper2.h"

typedef struct {
	int32_t offset[2];
	Vkhelper2Image image;
} Vwdlayer;

#endif
