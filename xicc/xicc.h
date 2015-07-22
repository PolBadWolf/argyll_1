#pragma once

#ifndef XICC_H
#define XICC_H

// include
#include <icc.h>


// define
#define XICC_USE_HK 1						// установить использование
#define XICC_NETRAL_CMYK_BLACK
#define XICC_BLACK_POINT_TOLL 0.5			// толерантность cmyk для локализации точки черного
#define XICC_BLACK_FIND_ABERR_WEIGHT 10.0	// кака-то ошибка

//---------------
// базавое цветовое пространство в абсолютной
#define icxAppearance 


#endif
