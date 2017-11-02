#ifndef SDHCALLcioWriter_h
#define SDHCALLcioWriter_h

#include <lcio.h>

#include <G4Event.hh>
#include <G4Run.hh>
#include <G4RunManager.hh>

#include <IO/LCWriter.h>
#include <IOIMPL/LCFactory.h>
#include <IMPL/LCEventImpl.h>
#include <IMPL/SimCalorimeterHitImpl.h>
#include <IMPL/CalorimeterHitImpl.h>
#include <IMPL/LCGenericObjectImpl.h>
#include <IMPL/MCParticleImpl.h>
#include <IMPL/LCCollectionVec.h>
#include <IMPL/LCTOOLS.h>
#include <IMPL/LCFlagImpl.h>
#include <UTIL/CellIDEncoder.h>

#include <string>

#include <SDHCALHit.h>


class G4Event ;

class SDHCALLcioWriter
{
	public :
		SDHCALLcioWriter(std::string fileName) ;
		~SDHCALLcioWriter() ;

		void createLCEvent(const G4Event* event) ;
		void writeLCEvent() ;

		void createPrimaryParticles(const G4Event* event) ;
		void createSimCalorimeterHits(std::vector<SDHCALHit*> hits) ;

		void setValue(std::string key , int value) ;
		void setValue(std::string key , float value) ;
		void setValue(std::string key , double value) ;
		void setValue(std::string key , std::vector<int> values) ;
		void setValue(std::string key , std::vector<float> values) ;
		void setValue(std::string key , std::vector<double> values) ;
		void setValue(std::string key , G4ThreeVector values) ;

		void clear() ;


	protected :
		lcio::LCWriter* writer = nullptr ;

		IMPL::LCEventImpl* lcEvent = nullptr ;
		IMPL::LCCollectionVec* particleCol = nullptr ;
		IMPL::LCCollectionVec* simVec = nullptr ;
		IMPL::LCCollectionVec* mcVec = nullptr ;
		std::map<G4int,IMPL::MCParticleImpl*> primaryParticleMap = {} ;

		std::string detectorName ;
} ;

#endif //SDHCALLcioWriter_h
