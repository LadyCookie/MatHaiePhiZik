#include "rigidBody.hpp"
#include "rigidBodyGravityGenerator.hpp"
#include "rigidBodyAnchoredString.hpp"
#include "rigidBodyDragGenerator.hpp"
#include "rigidBodyElasticString.hpp"

using namespace m_engine;
using namespace std;

int main() {
	RigidBody RB(1, 1);
	RigidBodyGravityGenerator RGG(1);
	RigidBodyAnchoredString RBAS = RigidBodyAnchoredString(Vector3D(0,0,0) , 1, 1);
	RigidBodyDragGenerator RBDG = RigidBodyDragGenerator(1,1);
	RigidBodyElasticString RBES = RigidBodyElasticString(RB, 1, 1, Vector3D(0, 0, 0));
	RGG.updateForce(RB,1.0);
	RBAS.updateForce(RB, 1.0);
	RBDG.updateForce(RB, 1.0);
	RBES.updateForce(RB, 1.0);
	//particleFloatingGenerator
	//particleRod
	//particleStiffSpring
	//particleString
	return 0;
}