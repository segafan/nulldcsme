// standard controller (sdhwr)
#pragma once

namespace EmulatedDevices
{

class StdController : public FT0
{
public:
	StdController(maple_device_instance* instance);

	u32 DMA(u32 Command,
		u32* buffer_in, u32 buffer_in_len,
		u32* buffer_out, u32& buffer_out_len);
};

} //namespace
