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
// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TreasureController
struct  TreasureController_t4286407081  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TreasureController::_speed
	int32_t ____speed_2;
	// UnityEngine.Transform TreasureController::_transform
	Transform_t3275118058 * ____transform_3;
	// GameController TreasureController::gameController
	GameController_t3607102586 * ___gameController_4;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(TreasureController_t4286407081, ____speed_2)); }
	inline int32_t get__speed_2() const { return ____speed_2; }
	inline int32_t* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(int32_t value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(TreasureController_t4286407081, ____transform_3)); }
	inline Transform_t3275118058 * get__transform_3() const { return ____transform_3; }
	inline Transform_t3275118058 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t3275118058 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(TreasureController_t4286407081, ___gameController_4)); }
	inline GameController_t3607102586 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t3607102586 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t3607102586 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
