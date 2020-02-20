#!/usr/bin/env python

import os
import sys
import SDHCALSim as sim

import math


if __name__ == '__main__' :

        #os.environ["SIMEXE"] = '/path/to/SDHCALSim/bin/SDHCALSim'
	os.environ["SIMEXE"] = '/Users/libo/workplace/SDHCALSim/bin/SDHCALSim'

	particle = 'pi-'
	energy = 10


	params = sim.Params()
	params.physicsList = 'QGSP_BERT'
	params.nEvent = 3
	params.seed = 0
	params.outputFileName = 'SDHCALSim'
	
	params.oldConfig = False
	params.killNeutrons = False


	charged = sim.Particle()
	charged.particleName = particle
	charged.energy = energy


	charged.momentumOption = 'gaus'
	#charged.sigmaMomentum = 0.15
	charged.sigmaMomentum = 0.

	charged.positionOption = 'gaus'
	#charged.sigmaPos = 33
	charged.sigmaPos = 0


	params.particleList.append(charged)

	sim.launch( params )


