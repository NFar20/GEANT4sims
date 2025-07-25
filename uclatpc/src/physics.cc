#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
	RegisterPhysics (new G4EmStandardPhysics());
	RegisterPhysics (new G4OpticalPhysics());
	RegisterPhysics (new G4DecayPhysics());
	RegisterPhysics (new G4RadioactiveDecayPhysics());
	RegisterPhysics (new G4HadronElasticPhysicsHP());
	RegisterPhysics (new G4HadronPhysicsQGSP_BIC_HP());
	RegisterPhysics (new G4IonElasticPhysics());
	RegisterPhysics (new G4IonPhysics());
	RegisterPhysics (new G4StoppingPhysics());
	//RegisterPhysics (new DarkMatterPhysics());
}

MyPhysicsList::~MyPhysicsList()
{}

/*void ConstructParticle()
{
	ConstructWIMP();
	G4DecayPhysics::ConstructParticle();
}

void ConstructProcess()
{
	AddTransportation();
	G4EmStandardPhysics::ConstructProcess();
	
	auto WIMP = new G4ParticleTable()->FindParticle("WIMP");
	if(WIMP)
	{
		auto proc = new WIMPElasticProcess();
		WIMP->GetProcessManager()->AddDiscreteProcess(proc);
	}
}*/
