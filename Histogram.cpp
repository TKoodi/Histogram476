/// \file
/// \brief Generate random EInteger numbers.
#include "Histogram.h"
#include <algorithm>
#include <map>
#include <iostream>
#include "RandomEintegerGenerator.h"

using namespace Hist;

int main()
{
	auto log =
		auto h = new Histogram(log);

	for (int x = 0; x < 20; x++)
	{
		EInteger e;


		his->add(e);
	}
}

/**
 * @brief Add number to histogram.
 * *
 * @param[in] e Number to add.
 */
void Hist::Histogram::add(EInteger e)
{
	data.push_back(e);
}

/**
 * @brief Generate random EInteger enum type.
 *
 * @details
 * Generate random EInteger value between 0-max
 * max is last define in Einteger enum.
 * After adding items EInteger you need update static_assert.
 *
 * @warning If two numbers in same mode return first one.
 */
EInteger Hist::Histogram::getMode() const
{
	int max = 0;
	int most_common = -1;
	std::map<int, int> m;
	for (auto vi = data.begin(); vi != data.end(); vi++) {
		m[*vi]++;
		if (m[*vi] > max) {
			max = m[*vi];
			most_common = *vi;
		}
	}
	return static_cast<EInteger>(most_common);
}

/**
 * @brief Return minumum EInteger enum type.
 */
EInteger Hist::Histogram::getMinValue() const
{
	return *min_element(data.begin(), data.end());
}

/**
 * @brief Return maximum EInteger enum type.
 */
EInteger Hist::Histogram::getMaxValue() const
{
	return *max_element(data.begin(), data.end());
}
