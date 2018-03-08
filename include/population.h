#include "algolim.h"

class Population
{
	int size;
public:
	Population();
	Population(int size);
	~Population();
	Algolim pops [10];

	int getPopSize(){
		return size;
	}
};