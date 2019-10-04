#ifndef PARTICLE_CONTACT
#define PARTICLE_CONTACT

#include "particle.hpp"


namespace m_engine {

	class ParticleContact {
	public:
		ParticleContact(Particle* p1, Particle* p2, double c);
		~ParticleContact() {};

		void resolve(double time);
		void resolveVelocity(double time);
		double calculVs() const;

	private:
		Particle* particles[2];
		double restitutionCoeff;
		Vector3D n;

	};

}

#endif