/*****************************************************************************
 * Project: BaBar detector at the SLAC PEP-II B-factory
 * Package: RooFitCore
 *    File: $Id: RooRandom.rdl,v 1.2 2001/10/01 23:55:00 verkerke Exp $
 * Authors:
 *   DK, David Kirkby, Stanford University, kirkby@hep.stanford.edu
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu
 * History:
 *   20-Aug-2001 DK Created initial version
 *
 * Copyright (C) 2001 Stanford University
 *****************************************************************************/
#ifndef ROO_RANDOM
#define ROO_RANDOM

#include "Rtypes.h"
#include "TRandom.h"

class RooQuasiRandomGenerator;

class RooRandom {
public:

  static TRandom *randomGenerator();
  static Double_t uniform(TRandom *generator= randomGenerator());
  static void uniform(UInt_t dimension, Double_t vector[], TRandom *generator= randomGenerator());
  static UInt_t integer(UInt_t max, TRandom *generator= randomGenerator());
  static Double_t gaussian(TRandom *generator= randomGenerator());

  static RooQuasiRandomGenerator *quasiGenerator();
  static Bool_t quasi(UInt_t dimension, Double_t vector[],
		      RooQuasiRandomGenerator *generator= quasiGenerator());

private:
  RooRandom();
  ClassDef(RooRandom,0) // random number generator interface
};

#endif
