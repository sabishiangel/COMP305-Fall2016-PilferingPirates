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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundController
struct  BackgroundController_t3717954812  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 BackgroundController::_speed
	int32_t ____speed_2;
	// UnityEngine.Transform BackgroundController::_transform
	Transform_t3275118058 * ____transform_3;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(BackgroundController_t3717954812, ____speed_2)); }
	inline int32_t get__speed_2() const { return ____speed_2; }
	inline int32_t* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(int32_t value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(BackgroundController_t3717954812, ____transform_3)); }
	inline Transform_t3275118058 * get__transform_3() const { return ____transform_3; }
	inline Transform_t3275118058 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t3275118058 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
