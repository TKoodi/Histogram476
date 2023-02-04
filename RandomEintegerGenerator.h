#pragma once
#include "HistogramBase.h"

namespace Hist
{
	class RandomEintegerGenerator : public RandomEintegerGeneratorBase
	{
		int operator()(int i) {
			if (i)
			{
				srand(i);
			}
			return getRandomValue();
		};
		EInteger getRandomValue();
	};
}

