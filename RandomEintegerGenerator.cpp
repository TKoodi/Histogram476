/// \file
/// \brief Generate random EInteger numbers.
#include "RandomEintegerGenerator.h"

/**
 * @brief Generate random EInteger enum type.
 *
 * @details
 * Generate random EInteger value between 0-max
 * max is last define in Einteger enum.
 * After adding items EInteger you need update static_assert.
 *
 * @note You need initialize random number generator first.
 */
Hist::EInteger Hist::RandomEintegerGenerator::getRandomValue()
{
	EInteger e;

	static_assert(sizeof(EInteger) == 4, "sizeof(EInteger) should be 4");

	e = static_cast<EInteger> (rand() % sizeof(EInteger));
	return e;
}
