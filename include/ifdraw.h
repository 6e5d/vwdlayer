#pragma once

typedef struct {
	void (*end)(void *data);
	void (*motion)(void *data, float pos[3], float pps[3]);
} VwdlayerIfdraw;
