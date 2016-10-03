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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StephanieController
struct  StephanieController_t526555839  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 StephanieController::_speed
	int32_t ____speed_2;
	// UnityEngine.Transform StephanieController::_transform
	Transform_t3275118058 * ____transform_3;
	// System.Int32 StephanieController::_livesValue
	int32_t ____livesValue_4;
	// UnityEngine.AudioSource StephanieController::yikes
	AudioSource_t1135106623 * ___yikes_5;
	// UnityEngine.AudioSource StephanieController::coins
	AudioSource_t1135106623 * ___coins_6;
	// UnityEngine.AudioSource StephanieController::backgroundMusic
	AudioSource_t1135106623 * ___backgroundMusic_7;
	// UnityEngine.AudioSource StephanieController::bossMusic
	AudioSource_t1135106623 * ___bossMusic_8;
	// GameController StephanieController::gameController
	GameController_t3607102586 * ___gameController_9;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ____speed_2)); }
	inline int32_t get__speed_2() const { return ____speed_2; }
	inline int32_t* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(int32_t value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ____transform_3)); }
	inline Transform_t3275118058 * get__transform_3() const { return ____transform_3; }
	inline Transform_t3275118058 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t3275118058 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}

	inline static int32_t get_offset_of__livesValue_4() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ____livesValue_4)); }
	inline int32_t get__livesValue_4() const { return ____livesValue_4; }
	inline int32_t* get_address_of__livesValue_4() { return &____livesValue_4; }
	inline void set__livesValue_4(int32_t value)
	{
		____livesValue_4 = value;
	}

	inline static int32_t get_offset_of_yikes_5() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ___yikes_5)); }
	inline AudioSource_t1135106623 * get_yikes_5() const { return ___yikes_5; }
	inline AudioSource_t1135106623 ** get_address_of_yikes_5() { return &___yikes_5; }
	inline void set_yikes_5(AudioSource_t1135106623 * value)
	{
		___yikes_5 = value;
		Il2CppCodeGenWriteBarrier(&___yikes_5, value);
	}

	inline static int32_t get_offset_of_coins_6() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ___coins_6)); }
	inline AudioSource_t1135106623 * get_coins_6() const { return ___coins_6; }
	inline AudioSource_t1135106623 ** get_address_of_coins_6() { return &___coins_6; }
	inline void set_coins_6(AudioSource_t1135106623 * value)
	{
		___coins_6 = value;
		Il2CppCodeGenWriteBarrier(&___coins_6, value);
	}

	inline static int32_t get_offset_of_backgroundMusic_7() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ___backgroundMusic_7)); }
	inline AudioSource_t1135106623 * get_backgroundMusic_7() const { return ___backgroundMusic_7; }
	inline AudioSource_t1135106623 ** get_address_of_backgroundMusic_7() { return &___backgroundMusic_7; }
	inline void set_backgroundMusic_7(AudioSource_t1135106623 * value)
	{
		___backgroundMusic_7 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundMusic_7, value);
	}

	inline static int32_t get_offset_of_bossMusic_8() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ___bossMusic_8)); }
	inline AudioSource_t1135106623 * get_bossMusic_8() const { return ___bossMusic_8; }
	inline AudioSource_t1135106623 ** get_address_of_bossMusic_8() { return &___bossMusic_8; }
	inline void set_bossMusic_8(AudioSource_t1135106623 * value)
	{
		___bossMusic_8 = value;
		Il2CppCodeGenWriteBarrier(&___bossMusic_8, value);
	}

	inline static int32_t get_offset_of_gameController_9() { return static_cast<int32_t>(offsetof(StephanieController_t526555839, ___gameController_9)); }
	inline GameController_t3607102586 * get_gameController_9() const { return ___gameController_9; }
	inline GameController_t3607102586 ** get_address_of_gameController_9() { return &___gameController_9; }
	inline void set_gameController_9(GameController_t3607102586 * value)
	{
		___gameController_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
