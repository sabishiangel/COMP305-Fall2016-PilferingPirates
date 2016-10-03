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

// CodrinController
struct  CodrinController_t2372257747  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CodrinController::_speed
	int32_t ____speed_2;
	// UnityEngine.Transform CodrinController::_transform
	Transform_t3275118058 * ____transform_3;
	// GameController CodrinController::gameController
	GameController_t3607102586 * ___gameController_4;
	// UnityEngine.Transform CodrinController::player
	Transform_t3275118058 * ___player_5;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(CodrinController_t2372257747, ____speed_2)); }
	inline int32_t get__speed_2() const { return ____speed_2; }
	inline int32_t* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(int32_t value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(CodrinController_t2372257747, ____transform_3)); }
	inline Transform_t3275118058 * get__transform_3() const { return ____transform_3; }
	inline Transform_t3275118058 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t3275118058 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(CodrinController_t2372257747, ___gameController_4)); }
	inline GameController_t3607102586 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t3607102586 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t3607102586 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(CodrinController_t2372257747, ___player_5)); }
	inline Transform_t3275118058 * get_player_5() const { return ___player_5; }
	inline Transform_t3275118058 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Transform_t3275118058 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
