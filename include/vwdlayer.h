#ifndef INCLUDEGUARD_VWDLAYER
#define INCLUDEGUARD_VWDLAYER

#include <vulkan/vulkan.h>

#include "../../vkhelper2/include/vkhelper2.h"

typedef struct {
	void (*end)(void *data);
	void (*motion)(void *data, float pos[3], float pps[3]);
} VwdlayerIfdraw;

typedef struct {
	int32_t offset[2];
	Vkhelper2Image image;
} Vwdlayer;

#endif
