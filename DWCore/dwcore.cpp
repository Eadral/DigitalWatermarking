// DigitalWatermarking.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "dwcore.h"

namespace DWCore {
	std::string DW::Version() {
		return "0.0.0002";
	}

	Image DW::OpenImage(std::string imagePath) {
		return Image();
	}

}

