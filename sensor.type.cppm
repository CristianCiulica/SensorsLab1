export module sensor.type;

import std;

namespace sensors
{
	export enum class SensorType : std::uint8_t
	{
		TEMP,
		ACCM,
	};

	export SensorType toSensorType(std::string_view str);

	export std::string to_string(SensorType type);
}
