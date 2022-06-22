#ifndef GAME_H
#define GAME_H

// =====================================================================
// Project: Sonic Mania Modding API
// By: Rubberduckycooly & RMGRich
// =====================================================================

// -------------------------
// ENGINE VERSIONS
// -------------------------

#ifndef RETRO_REVISION
#define RETRO_REVISION (2)
#endif

#define RETRO_REV01 (RETRO_REVISION == 1)

// RSDKv5 was revised & updated for plus onwards
// this is basically the same functionality as "MANIA_USE_PLUS"
// but I split this one to be more specific about engine changes vs game changes
#define RETRO_REV02 (RETRO_REVISION == 2)

// Controls whether EditorLoad & EditorDraw should be included in the final product or not
// This is a copy of what the original game likely had, as the original game does not include EditorLoad or EditorDraw funcs for any objects
#ifndef RETRO_INCLUDE_EDITOR
#define RETRO_INCLUDE_EDITOR (1)
#endif

#ifndef RETRO_USE_MOD_LOADER
#define RETRO_USE_MOD_LOADER (1)
#endif

#define RETRO_MOD_LOADER_VER (1)

// -------------------------
// GAME VERSIONS
// -------------------------

#define VER_100 (0) // 1.00 (initial console release)
#define VER_103 (3) // 1.03 (PC release/console patch)
#define VER_105 (5) // 1.04/1.05
#define VER_106 (6) // 1.06 (steam denuvo removal update)
#define VER_107 (7) // 1.07 (EGS/Origin releases)

#ifndef GAME_VERSION
#define GAME_VERSION VER_106
#endif

#define MANIA_USE_PLUS (GAME_VERSION >= VER_105)
#define MANIA_USE_EGS  (GAME_VERSION == VER_107)

// -------------------------
// GAME LOGIC
// -------------------------

#include "GameLink.h"
#ifndef GAME_NO_VARIABLES
#include "GameVariables.h"
#endif
#include "GameObjects.h"

#endif //! GAME_H
