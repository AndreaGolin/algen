#include "algolim.h"

Algolim::Algolim(){}
Algolim::Algolim(int genesNumber, int fit){
	genesNumber = genesNumber;
	fit = fit;
}
Algolim::~Algolim(){}

void Algolim::setGenesNumber(int genesNumber){
	genesNumber = genesNumber;
}
void Algolim::setFit(int fit){
	fit = fit;
}
int Algolim::getGenesNumber(){
	return genesNumber;
}
int Algolim::getFit(){
	return fit;
}