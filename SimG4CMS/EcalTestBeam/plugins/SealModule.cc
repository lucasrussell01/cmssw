#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "SimG4CMS/EcalTestBeam/interface/EcalTBH4Trigger.h"
#include "SimG4Core/Watcher/interface/SimWatcherFactory.h"

#include "SimG4CMS/EcalTestBeam/interface/EcalTBMCInfoProducer.h"
DEFINE_FWK_MODULE(EcalTBMCInfoProducer);

#include "SimG4CMS/EcalTestBeam/interface/FakeTBHodoscopeRawInfoProducer.h"
DEFINE_FWK_MODULE(FakeTBHodoscopeRawInfoProducer);

#include "SimG4CMS/EcalTestBeam/interface/TBHodoActiveVolumeRawInfoProducer.h"
DEFINE_FWK_MODULE(TBHodoActiveVolumeRawInfoProducer);

#include "SimG4CMS/EcalTestBeam/interface/FakeTBEventHeaderProducer.h"
DEFINE_FWK_MODULE(FakeTBEventHeaderProducer);

DEFINE_SIMWATCHER(EcalTBH4Trigger);
