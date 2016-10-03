#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CanonballBehavior
struct  CanonballBehavior_t2205918284  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CanonballBehavior::speed
	float ___speed_2;
	// UnityEngine.Vector2 CanonballBehavior::_direction
	Vector2_t2243707579  ____direction_3;
	// System.Boolean CanonballBehavior::isReady
	bool ___isReady_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CanonballBehavior_t2205918284, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of__direction_3() { return static_cast<int32_t>(offsetof(CanonballBehavior_t2205918284, ____direction_3)); }
	inline Vector2_t2243707579  get__direction_3() const { return ____direction_3; }
	inline Vector2_t2243707579 * get_address_of__direction_3() { return &____direction_3; }
	inline void set__direction_3(Vector2_t2243707579  value)
	{
		____direction_3 = value;
	}

	inline static int32_t get_offset_of_isReady_4() { return static_cast<int32_t>(offsetof(CanonballBehavior_t2205918284, ___isReady_4)); }
	inline bool get_isReady_4() const { return ___isReady_4; }
	inline bool* get_address_of_isReady_4() { return &___isReady_4; }
	inline void set_isReady_4(bool value)
	{
		___isReady_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
