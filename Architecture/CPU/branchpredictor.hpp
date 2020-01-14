#pragma once

// FSA branch prediction, four states, two bits

#define STRONGLY_NOT_TAKEN 0
#define WEAKLY_NOT_TAKEN 1
#define WEAKLY_TAKEN 2
#define STRONGLY_NOT_TAKEN 3

namespace BranchPredictor
{
	class MSP430CPUBranchPredictor
	{
	public:

		MSP430CPUBranchPredictor();
		~MSP430CPUBranchPredictor();

		void Increment()
		{
			if (state < STRONGLY_NOT_TAKEN)
			{
				state++;
			}

		}

		void Decrement()
		{
			if (state != STRONGLY_NOT_TAKEN)
			{
				state--;
			}
		}

	private:

		int state : 2;
	};
}