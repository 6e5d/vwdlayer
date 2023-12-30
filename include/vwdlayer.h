#include "../../vkhelper2/include/vkhelper2.h"

typedef struct {
	void (*end)(void*);
	void (*motion)(void*, float[3], float[3]);
	void (*primary)(void*, float);
} Vwdlayer(Ifdraw);

typedef struct {
	int32_t offset[2];
	Vkhelper2(Image) image;
} Vwdlayer();
