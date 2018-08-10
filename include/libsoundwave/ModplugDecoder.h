#ifndef MODPLUG_DECODER_H
#define MODPLUG_DECODER_H

#include "AudioDecoder.h"

namespace soundwave
{
	struct ModplugDecoder : public soundwave::BaseDecoder
	{
		ModplugDecoder() {};
		virtual ~ModplugDecoder() {};
		virtual void LoadFromPath(soundwave::AudioData* data, const std::string& path) override;
		virtual void LoadFromBuffer(soundwave::AudioData* data, const std::vector<uint8_t>& memory) override;
		virtual std::vector<std::string> GetSupportedFileExtensions() override;
	};

} // end namespace soundwave

#endif