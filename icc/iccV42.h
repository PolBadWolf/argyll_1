#pragma once

#ifndef ICCV42__H
#ifdef __cplusplus 
extern "C" {
#endif // __cplusplus 


	#define icMaxTagVal -1
	// =================================
	// определение используемых спецификаций
#define icMagicNuber				0x61637370L // acsp
#define icVersionNumber				0x02200000L // 2.2.0, BCD
#define icVersionNumberV41			0x04100000L // 4.1.0, BCD
	// экранизация кодировки
#define icPrtrDefaultScreensFalse	0x00000000L // Bit pos 0
#define icPrtrDefaultScreensTrue	0x00000001L	// Bit pos 0
#define icLinesPerInch				0x00000002L // Bit pos 1
#define icLinesPerCm				0x00000000L // Bit pos 1

	// атрибуты устройства
#define icReflective				0x00000000L // Bit pos 0
#define icTransparency				0x00000001L // Bit pos 0
#define icGlossy					0x00000000L // Bit pos 1
#define icMatte						0x00000002L // 




#ifdef __cplusplus 
}
#endif // __cplusplus 
#endif // !ICCV42__H
