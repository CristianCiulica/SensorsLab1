export module sensor;

import std;
export import sensor.type;

namespace sensors
{
	export class SensorData
	{
	private:
		std::uint16_t m_id;
		SensorType m_type;
		std::string m_timestamp;
		std::vector<float> m_values;
		bool m_status;

	public:
		SensorData(std::uint16_t id, SensorType type, std::string_view timestamp, const std::vector<float>& values, bool status);

		// SensorData(const SensorData& other) = default;
		// SensorData& operator= (const SensorData& other) = default;
		// ~SensorData() = default;

		std::uint16_t GetId() const;
		SensorType GetType() const;
		const std::string& GetTimestamp() const;
		const std::vector<float>& GetValues() const;
		bool GetStatus() const;

		std::uint16_t GetMonth() const;

		auto operator<=> (const SensorData& other) const = default;
	};

	export std::ostream& operator<< (std::ostream& out, const SensorData& data);

	//export bool operator< (const SensorData& s1, const SensorData& s2);
}
