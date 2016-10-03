#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuController
struct  MenuController_t848154101  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button MenuController::startButton
	Button_t2872111280 * ___startButton_2;

public:
	inline static int32_t get_offset_of_startButton_2() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___startButton_2)); }
	inline Button_t2872111280 * get_startButton_2() const { return ___startButton_2; }
	inline Button_t2872111280 ** get_address_of_startButton_2() { return &___startButton_2; }
	inline void set_startButton_2(Button_t2872111280 * value)
	{
		___startButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___startButton_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
