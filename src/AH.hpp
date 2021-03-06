#pragma once

#include "rack.hpp"

using namespace rack;

extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct ScaleQuantizerWidget : ModuleWidget {
	ScaleQuantizerWidget();
};

struct ScaleQuantizer2Widget : ModuleWidget {
        ScaleQuantizer2Widget();
};

struct ArpeggiatorWidget : ModuleWidget {
	ArpeggiatorWidget();
};

struct ProgressWidget : ModuleWidget {
		ProgressWidget();
		Menu *createContextMenu() override;
};

struct CircleWidget : ModuleWidget {
	CircleWidget();
};

