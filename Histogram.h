#include <vector>
#include "HistogramBase.h"

namespace Hist
{
	class Histogram : public HistogramBase
	{
		std::vector <EInteger> data;
	public:
		// Inherited via HistogramBase
		virtual void add(EInteger) override;
		virtual EInteger getMode() const override;
		virtual EInteger getMinValue() const override;
		virtual EInteger getMaxValue() const override;
	};
}