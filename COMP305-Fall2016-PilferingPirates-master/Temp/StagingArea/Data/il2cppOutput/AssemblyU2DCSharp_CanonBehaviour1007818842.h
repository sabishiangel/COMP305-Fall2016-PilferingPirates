#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CanonBehaviour
struct  CanonBehaviour_t1007818842  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CanonBehaviour::player
	Transform_t3275118058 * ___player_2;
	// UnityEngine.GameObject CanonBehaviour::canonball
	GameObject_t1756533147 * ___canonball_3;
	// System.Single CanonBehaviour::canonDistance
	float ___canonDistance_4;
	// System.Single CanonBehaviour::timeBetweenFires
	float ___timeBetweenFires_5;
	// System.Single CanonBehaviour::lastFired
	float ___lastFired_6;
	// System.Single CanonBehaviour::timeTilNextFire
	float ___timeTilNextFire_7;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_canonball_3() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___canonball_3)); }
	inline GameObject_t1756533147 * get_canonball_3() const { return ___canonball_3; }
	inline GameObject_t1756533147 ** get_address_of_canonball_3() { return &___canonball_3; }
	inline void set_canonball_3(GameObject_t1756533147 * value)
	{
		___canonball_3 = value;
		Il2CppCodeGenWriteBarrier(&___canonball_3, value);
	}

	inline static int32_t get_offset_of_canonDistance_4() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___canonDistance_4)); }
	inline float get_canonDistance_4() const { return ___canonDistance_4; }
	inline float* get_address_of_canonDistance_4() { return &___canonDistance_4; }
	inline void set_canonDistance_4(float value)
	{
		___canonDistance_4 = value;
	}

	inline static int32_t get_offset_of_timeBetweenFires_5() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___timeBetweenFires_5)); }
	inline float get_timeBetweenFires_5() const { return ___timeBetweenFires_5; }
	inline float* get_address_of_timeBetweenFires_5() { return &___timeBetweenFires_5; }
	inline void set_timeBetweenFires_5(float value)
	{
		___timeBetweenFires_5 = value;
	}

	inline static int32_t get_offset_of_lastFired_6() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___lastFired_6)); }
	inline float get_lastFired_6() const { return ___lastFired_6; }
	inline float* get_address_of_lastFired_6() { return &___lastFired_6; }
	inline void set_lastFired_6(float value)
	{
		___lastFired_6 = value;
	}

	inline static int32_t get_offset_of_timeTilNextFire_7() { return static_cast<int32_t>(offsetof(CanonBehaviour_t1007818842, ___timeTilNextFire_7)); }
	inline float get_timeTilNextFire_7() const { return ___timeTilNextFire_7; }
	inline float* get_address_of_timeTilNextFire_7() { return &___timeTilNextFire_7; }
	inline void set_timeTilNextFire_7(float value)
	{
		___timeTilNextFire_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
