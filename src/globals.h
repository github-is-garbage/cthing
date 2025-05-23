#ifndef ogt_globals
#define ogt_globals

#include "ents.h"
#include "physics.h"

#define VEC3_ONE ((vec3){ 1.f, 1.f, 1.f })
#define VEC3_FORWARD ((vec3){ 1.f, 0.f, 0.f })
#define VEC3_RIGHT ((vec3){ 0.f, 0.f, -1.f })
#define VEC3_UP ((vec3){ 0.f, 1.f, 0.f })

typedef struct
{
	int WindowWidth;
	int WindowHeight;

	EntityManager_t* EntityManager;
	PhysicsWorld_t* PhysicsManager;
} GlobalVars_t;

extern GlobalVars_t* GlobalVars;

void ogt_init_globals();

#endif
