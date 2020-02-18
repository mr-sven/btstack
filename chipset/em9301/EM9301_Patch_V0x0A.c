/*
 * EM9301_Patch_V0x0A.c
 *
 *  Created on: 14.02.2020
 *      Author: sven
 */

#define BTSTACK_FILE__ "EM9301_Patch_V0x0A.c"

#include <stdint.h>

//EM9301 patch version pram_2kx22_v0x0A_patch
const uint8_t EMPatchArray[] = {
0xef, 0xff, 0xfe, 0xf7, 0x3b, 0xff, 0xfc, 0xf7, 0xd9, 0xf8, 0xd8, 0xf8, 0xc8, 0xf8, 0xc7, 0xf8, 0x5a, 0xf8, 0x59, 0xf8, 0x58, 0xf8, 0x57, 0xf8, 0x56, 0xf8, 0x55, 0xf8, 0x54, 0xf8, 0x53, 0xf8, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
0xf3, 0xa7, 0xff, 0xa6, 0xe9, 0xff, 0xff, 0xdf, 0x1f, 0xaa, 0xec, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xfe, 0xaf, 0xff, 0xaf, 0x00, 0xff, 0xff, 0xaf, 0x01, 0xff, 0xf3, 0xab, 0x0e, 0x0e, 0x33, 0x0b, 0x0e, 0x33, 0x03, 0x03, 0x03, 0x03, 0x16, 0x0e, 0x02, 0x0e, 0x02, 0x04,
0xbf, 0x2b, 0xff, 0x1b, 0xe0, 0xff, 0x29, 0xf3, 0xc4, 0xaf, 0xf7, 0xab, 0xef, 0xbb, 0xf7, 0xbb, 0x03, 0x2a, 0x97, 0xab, 0xbf, 0x2b, 0xff, 0x1b, 0xcb, 0xff, 0xff, 0xdf, 0xfc, 0xef, 0x03, 0x2a, 0x0e, 0x0e, 0x32, 0x3a, 0x0c, 0x04, 0x0e, 0x01, 0x0e, 0x04, 0x0e, 0x0e, 0x32, 0x0b, 0x00, 0x0e,
0x97, 0xab, 0xbf, 0x2b, 0xff, 0x1b, 0xd2, 0xff, 0xf7, 0xab, 0x10, 0x2b, 0xf7, 0xbb, 0x98, 0xab, 0xfb, 0x1b, 0xb0, 0xff, 0x98, 0xab, 0xc0, 0xff, 0x99, 0x7f, 0x98, 0xab, 0xc3, 0xff, 0xfe, 0xaf, 0x04, 0x0e, 0x0e, 0x36, 0x04, 0x0e, 0x01, 0x04, 0x0e, 0x36, 0x04, 0x36, 0x00, 0x04, 0x32, 0x0e,
0x01, 0xff, 0xff, 0xab, 0xff, 0xac, 0x1f, 0xf0, 0x97, 0xff, 0xfe, 0xab, 0xff, 0xac, 0x1f, 0xf0, 0x97, 0xfe, 0xff, 0x14, 0xb0, 0xff, 0xfd, 0xab, 0xff, 0xac, 0x1f, 0xf0, 0x97, 0xfd, 0xff, 0x14, 0x02, 0x0e, 0x0e, 0x3a, 0x00, 0x0e, 0x0e, 0x3a, 0x00, 0x0e, 0x32, 0x0e, 0x0e, 0x3a, 0x00, 0x0e,
0xa0, 0xff, 0xfd, 0xa5, 0x01, 0xaf, 0xfe, 0x1f, 0xa8, 0xff, 0x2e, 0xf0, 0xc5, 0xaf, 0xfe, 0xab, 0x5c, 0xaf, 0xef, 0xad, 0xd4, 0xef, 0xc0, 0xaf, 0xb1, 0xaf, 0x03, 0xc4, 0x97, 0xb5, 0xfc, 0xa5, 0x36, 0x0e, 0x1e, 0x0e, 0x36, 0x3a, 0x0c, 0x0e, 0x0c, 0x0e, 0x3a, 0x0c, 0x0c, 0x02, 0x01, 0x0e,
0x01, 0xaf, 0xfe, 0x1f, 0x9a, 0xff, 0x2e, 0xf0, 0xc5, 0xaf, 0xf4, 0xab, 0xfb, 0x2b, 0xff, 0x1b, 0x82, 0xff, 0xf4, 0xfb, 0xff, 0x14, 0x91, 0xff, 0xfc, 0xaf, 0x00, 0xff, 0xfb, 0xab, 0x5c, 0xaf, 0x1e, 0x0e, 0x36, 0x3a, 0x0c, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x0e, 0x36, 0x0e, 0x02, 0x0e, 0x0c,
0xf1, 0xad, 0xd4, 0xef, 0xc0, 0xaf, 0xb1, 0xaf, 0xfc, 0xaf, 0x04, 0xcf, 0xf3, 0xaf, 0x05, 0xcf, 0x00, 0xaf, 0x06, 0xcf, 0xfd, 0xaf, 0x03, 0xcf, 0x62, 0xff, 0xf4, 0xab, 0xf7, 0x2b, 0xff, 0x1b, 0x0e, 0x3a, 0x0c, 0x0c, 0x0e, 0x02, 0x0e, 0x02, 0x1e, 0x02, 0x0e, 0x02, 0x33, 0x04, 0x0e, 0x0e,
0x7a, 0xff, 0xf4, 0xab, 0xfe, 0x2b, 0xff, 0x1b, 0x6b, 0xff, 0xf4, 0xab, 0xf7, 0x2b, 0xfb, 0xa4, 0xff, 0x1b, 0x74, 0xff, 0xfa, 0xa4, 0xf4, 0xf6, 0xfe, 0xab, 0x5c, 0xaf, 0xef, 0xad, 0xd4, 0xef, 0x32, 0x04, 0x0e, 0x0e, 0x36, 0x04, 0x0e, 0x0e, 0x0e, 0x32, 0x0e, 0x00, 0x0e, 0x0c, 0x0e, 0x3a,
0xc0, 0xaf, 0xb1, 0xaf, 0x03, 0xc4, 0x62, 0xff, 0xf4, 0xef, 0xfe, 0xab, 0x5c, 0xaf, 0x00, 0xad, 0xd4, 0xef, 0xc0, 0xaf, 0xb1, 0xaf, 0xfe, 0xaf, 0x03, 0xcf, 0x97, 0xb5, 0xff, 0xdf, 0x01, 0x2a, 0x0c, 0x0c, 0x02, 0x33, 0x00, 0x0e, 0x0c, 0x0e, 0x3a, 0x0c, 0x0c, 0x0e, 0x02, 0x01, 0x0b, 0x0e,
0x02, 0x2a, 0xfb, 0xab, 0xdf, 0x2b, 0xff, 0x1b, 0x57, 0xff, 0xfb, 0xdf, 0x02, 0x2a, 0x70, 0xf4, 0xfc, 0xab, 0xfb, 0x2b, 0xff, 0x1b, 0x50, 0xff, 0xfc, 0xfb, 0x01, 0x2a, 0xd1, 0xfe, 0xfc, 0xab, 0x0e, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x0e, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x0e, 0x3a, 0x04,
0xf7, 0x2b, 0xff, 0x1b, 0x49, 0xff, 0xfc, 0xf7, 0x01, 0x2a, 0x67, 0xf3, 0xfc, 0xab, 0xef, 0x2b, 0xff, 0x1b, 0x61, 0xff, 0xfc, 0xef, 0x01, 0x2a, 0x68, 0xf3, 0x61, 0xff, 0x02, 0xaf, 0x01, 0xa9, 0x0e, 0x0e, 0x36, 0x00, 0x0e, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x0e, 0x3a, 0x33, 0x16, 0x16,
0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x78, 0xff, 0x79, 0xff, 0x70, 0xff, 0x71, 0xff, 0x72, 0xff, 0x73, 0xff, 0x74, 0xff, 0x75, 0xff, 0x7e, 0x16, 0x16, 0x16, 0x23, 0x03, 0x0b, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
0xff, 0x7d, 0xff, 0x7c, 0xff, 0x7b, 0x80, 0x2a, 0x40, 0x2a, 0xdf, 0xba, 0xfd, 0xab, 0xfe, 0x2b, 0xff, 0x1b, 0x23, 0xff, 0xfd, 0xfe, 0x70, 0xf5, 0xfd, 0xab, 0xfd, 0x2b, 0xff, 0x1b, 0x1d, 0xff, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x0e, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36,
0xfd, 0xfd, 0x56, 0xf5, 0xfd, 0xab, 0xef, 0x2b, 0xff, 0x1b, 0x17, 0xff, 0xfd, 0xeb, 0x03, 0xf5, 0xfd, 0xab, 0xfb, 0x2b, 0xff, 0x1b, 0xfb, 0xfe, 0x74, 0xab, 0xfe, 0x1b, 0xfd, 0xfe, 0xaf, 0xab, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x04, 0x0e, 0x32, 0x04,
0xbf, 0x2b, 0xff, 0x1b, 0xfd, 0xfe, 0xf9, 0xa1, 0x87, 0xa0, 0x00, 0xaf, 0xfe, 0x1f, 0xfd, 0xfe, 0x2e, 0xf0, 0xc4, 0xaf, 0xfe, 0xab, 0xef, 0xad, 0xd4, 0xef, 0xc0, 0xaf, 0xb1, 0xaf, 0xfc, 0xaf, 0x0e, 0x0e, 0x32, 0x0e, 0x0e, 0x18, 0x0e, 0x32, 0x3a, 0x0c, 0x0e, 0x0e, 0x3a, 0x0c, 0x0c, 0x0e,
0x03, 0xcf, 0x97, 0xb4, 0xfd, 0xfb, 0x3c, 0xf5, 0xfd, 0xab, 0xf7, 0x2b, 0xff, 0x1b, 0xf5, 0xfe, 0xfd, 0xf7, 0x22, 0xf5, 0xfd, 0xab, 0xdf, 0x2b, 0xff, 0x1b, 0xef, 0xfe, 0xfd, 0xdf, 0x9a, 0xf4, 0x02, 0x01, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a,
0xfd, 0xab, 0xbf, 0x2b, 0xff, 0x1b, 0xe9, 0xfe, 0xfd, 0xbf, 0x87, 0xf4, 0xfd, 0xab, 0x7f, 0x2b, 0xff, 0x1b, 0xe3, 0xfe, 0xfd, 0x7f, 0x86, 0xf4, 0x10, 0x2a, 0xbf, 0xba, 0x7f, 0xba, 0x01, 0xab, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a, 0x04, 0x0e, 0x0e, 0x36, 0x00, 0x3a, 0x0e, 0x0e, 0x0e, 0x16,
0x01, 0xac, 0x01, 0xad, 0x01, 0xae, 0x01, 0xa5, 0x01, 0xa4, 0x01, 0xa3, 0x01, 0xa2, 0x01, 0xa1, 0x01, 0xa0, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xaf, 0x01, 0xaf, 0xff, 0x1f, 0xff, 0x78, 0xff, 0x79, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x17, 0x16, 0x3f, 0x03, 0x03,
0x9d, 0xab, 0xbc, 0xaf, 0xff, 0xab, 0x9c, 0xad, 0xde, 0xaf, 0xff, 0xad, 0xcc, 0x4e, 0xbb, 0x5d, 0xfc, 0x2c, 0xff, 0xab, 0x7f, 0xfb, 0xd5, 0xfd, 0xbf, 0xbc, 0xd5, 0xfd, 0x9c, 0xab, 0xfe, 0x2b, 0x04, 0x0c, 0x0e, 0x04, 0x0c, 0x0e, 0x0c, 0x0c, 0x0e, 0x0e, 0x0e, 0x32, 0x0c, 0x36, 0x04, 0x0e,
0xbe, 0xaf, 0xff, 0xad, 0xbf, 0xee, 0xff, 0x7f, 0xbf, 0xed, 0xed, 0xbf, 0x01, 0xae, 0xe0, 0xaf, 0x7f, 0xc0, 0xd1, 0xaf, 0xf3, 0xd1, 0x77, 0xb1, 0x76, 0xb0, 0x01, 0xac, 0x02, 0xab, 0xfb, 0x1b, 0x0c, 0x0e, 0x0e, 0x03, 0x0e, 0x0c, 0x16, 0x0c, 0x0e, 0x0c, 0x0e, 0x01, 0x01, 0x18, 0x18, 0x0e,
0xa6, 0xfe, 0xf9, 0x1c, 0xaa, 0xfe, 0x3e, 0xe4, 0xe3, 0xfd, 0xe2, 0x1c, 0xe4, 0xfd, 0x11, 0xe4, 0xe3, 0xfd, 0xf3, 0x1b, 0x9c, 0xfe, 0xfe, 0x1c, 0xa0, 0xfe, 0xc5, 0xec, 0xe3, 0xfd, 0xd2, 0x1c, 0x32, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x0e, 0x32, 0x3a, 0x33, 0x0e,
0xe4, 0xfd, 0xc3, 0xe3, 0xe3, 0xfd, 0xef, 0x1b, 0x8a, 0xfe, 0xfe, 0x1c, 0x96, 0xfe, 0xa9, 0xec, 0xe3, 0xfd, 0xfd, 0x1c, 0x92, 0xfe, 0xfb, 0xec, 0xe3, 0xfd, 0xfc, 0x1c, 0x8e, 0xfe, 0x16, 0xed, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xf6, 0x1c, 0xe4, 0xfd, 0xe0, 0xec, 0xe3, 0xfd, 0xeb, 0x1b, 0x84, 0xfe, 0xfa, 0x1c, 0xe4, 0xfd, 0x85, 0xe3, 0xe3, 0xfd, 0xdf, 0x1b, 0x0a, 0xfe, 0xfe, 0x1c, 0x7e, 0xfe, 0x7d, 0xec, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xfd, 0x1c, 0x7a, 0xfe, 0x61, 0xec, 0xe3, 0xfd, 0xfc, 0x1c, 0x76, 0xfe, 0x49, 0xec, 0xe3, 0xfd, 0xfa, 0x1c, 0x72, 0xfe, 0x2e, 0xec, 0xe3, 0xfd, 0xf9, 0x1c, 0x6e, 0xfe, 0xd3, 0xea, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xf8, 0x1c, 0x6a, 0xfe, 0x16, 0xea, 0xe3, 0xfd, 0xf7, 0x1c, 0x66, 0xfe, 0xfc, 0xe9, 0xe3, 0xfd, 0xf6, 0x1c, 0x62, 0xfe, 0xc0, 0xe9, 0xe3, 0xfd, 0xf5, 0x1c, 0x5e, 0xfe, 0x09, 0xfd, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xf4, 0x1c, 0x5a, 0xfe, 0x13, 0xe9, 0xe3, 0xfd, 0xf3, 0x1c, 0x56, 0xfe, 0x97, 0xfc, 0xe3, 0xfd, 0xf2, 0x1c, 0x52, 0xfe, 0x0f, 0xfc, 0xe3, 0xfd, 0xf1, 0x1c, 0x4e, 0xfe, 0x0d, 0xfa, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xf0, 0x1c, 0x4a, 0xfe, 0x12, 0xec, 0xe3, 0xfd, 0xef, 0x1c, 0x46, 0xfe, 0xd2, 0xfd, 0xe3, 0xfd, 0xee, 0x1c, 0x42, 0xfe, 0xd2, 0xeb, 0xe3, 0xfd, 0xed, 0x1c, 0x3e, 0xfe, 0x9e, 0xfd, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xec, 0x1c, 0x3a, 0xfe, 0x96, 0xf9, 0xe3, 0xfd, 0xeb, 0x1c, 0x36, 0xfe, 0xfa, 0xe4, 0xe3, 0xfd, 0xea, 0x1c, 0x32, 0xfe, 0xa0, 0xe4, 0xe3, 0xfd, 0xe9, 0x1c, 0x2e, 0xfe, 0x6c, 0xe4, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xe8, 0x1c, 0x2a, 0xfe, 0x53, 0xe3, 0xe3, 0xfd, 0xe7, 0x1c, 0x26, 0xfe, 0x19, 0xe3, 0xe3, 0xfd, 0xe6, 0x1c, 0x22, 0xfe, 0xfa, 0xe2, 0xe3, 0xfd, 0xe5, 0x1c, 0x1e, 0xfe, 0x98, 0xe2, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xe4, 0x1c, 0x1a, 0xfe, 0x1e, 0xe2, 0xe3, 0xfd, 0xe3, 0x1c, 0x16, 0xfe, 0xee, 0xea, 0xe3, 0xfd, 0xe2, 0x1c, 0x12, 0xfe, 0xdd, 0xe1, 0xe3, 0xfd, 0xe1, 0x1c, 0x0e, 0xfe, 0x9f, 0xe1, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a,
0xe3, 0xfd, 0xe0, 0x1c, 0xe4, 0xfd, 0x53, 0xe1, 0xe3, 0xfd, 0x03, 0x1b, 0xe4, 0xfd, 0xff, 0x1c, 0x04, 0xfe, 0x73, 0xef, 0xe3, 0xfd, 0xfe, 0x1c, 0x00, 0xfe, 0x3b, 0xef, 0xe3, 0xfd, 0xfd, 0x1c, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e,
0xfc, 0xfd, 0x17, 0xef, 0xe3, 0xfd, 0xfc, 0x1c, 0xf8, 0xfd, 0xfb, 0xee, 0xe3, 0xfd, 0xfb, 0x1c, 0xf4, 0xfd, 0x4b, 0xee, 0xe3, 0xfd, 0xfa, 0x1c, 0xf0, 0xfd, 0xf5, 0xed, 0xe3, 0xfd, 0xf9, 0x1c, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e,
0xec, 0xfd, 0xd5, 0xed, 0xe3, 0xfd, 0xf8, 0x1c, 0xe8, 0xfd, 0x9f, 0xed, 0xe3, 0xfd, 0xf7, 0x1c, 0xe4, 0xfd, 0x50, 0xed, 0xe3, 0xfd, 0x31, 0xed, 0x9d, 0xab, 0xbc, 0xaf, 0xff, 0xab, 0x9c, 0xad, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x0e, 0x32, 0x3a, 0x33, 0x3a, 0x04, 0x0c, 0x0e, 0x04,
0xde, 0xaf, 0xff, 0xad, 0xcc, 0x4e, 0xbb, 0x5d, 0xfc, 0x2c, 0xff, 0xab, 0x7f, 0xfb, 0xd5, 0xfd, 0xbf, 0xbc, 0xc1, 0xfe, 0x01, 0xa9, 0x01, 0xa8, 0xff, 0xff, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0x0c, 0x0e, 0x0c, 0x0c, 0x0e, 0x0e, 0x0e, 0x32, 0x0c, 0x32, 0x16, 0x16, 0x23, 0x03, 0x03, 0x03,
0x2e, 0xf0, 0xc5, 0xaf, 0xfb, 0xab, 0xef, 0xae, 0xdf, 0xad, 0x0a, 0xf0, 0xc2, 0xaf, 0xb3, 0xaf, 0x6f, 0xaf, 0xfe, 0x1f, 0xc2, 0xfd, 0x67, 0xaf, 0xb1, 0xfd, 0x63, 0xaf, 0xfe, 0x1f, 0xba, 0xfd, 0x3a, 0x0c, 0x0e, 0x0e, 0x0e, 0x3a, 0x0c, 0x0c, 0x04, 0x0e, 0x32, 0x04, 0x32, 0x04, 0x0e, 0x32,
0x62, 0xaf, 0x0f, 0x1f, 0xba, 0xfd, 0x60, 0xaf, 0xb1, 0xfd, 0x63, 0xaf, 0xfe, 0x1f, 0xae, 0xfd, 0x62, 0xaf, 0x0f, 0x1f, 0xae, 0xfd, 0x52, 0xaf, 0xfe, 0x1f, 0xae, 0xfd, 0xf3, 0xaf, 0x06, 0xdf, 0x04, 0x0e, 0x36, 0x04, 0x32, 0x04, 0x0e, 0x32, 0x04, 0x0e, 0x32, 0x04, 0x0e, 0x32, 0x0e, 0x02,
0xa3, 0xfd, 0x73, 0xff, 0xfb, 0xa1, 0x5e, 0xa0, 0xff, 0xab, 0xff, 0xaf, 0x01, 0x4f, 0xbb, 0x1f, 0xe4, 0x1b, 0xaa, 0xfd, 0xff, 0xaf, 0x06, 0xdf, 0x97, 0xb5, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x33, 0x00, 0x0e, 0x0e, 0x0e, 0x0e, 0x03, 0x0d, 0x0e, 0x34, 0x0e, 0x02, 0x01, 0x16, 0x16, 0x16,
0xff, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xf4, 0xaf, 0x76, 0xa4, 0x77, 0xa5, 0x04, 0xaf, 0x08, 0xff, 0x2e, 0xf0, 0x09, 0xfc, 0xfb, 0xab, 0xed, 0xae, 0xdf, 0xad, 0x0a, 0xf0, 0x23, 0x03, 0x03, 0x03, 0x03, 0x16, 0x04, 0x04, 0x1c, 0x02, 0x3a, 0x02, 0x0e, 0x0e, 0x0e, 0x3a,
0x0a, 0xfb, 0x0b, 0xfc, 0x6f, 0xaf, 0xfe, 0x1f, 0x88, 0xfd, 0x67, 0xaf, 0x77, 0xfd, 0x63, 0xaf, 0xfe, 0x1f, 0x80, 0xfd, 0x62, 0xaf, 0x0f, 0x1f, 0x80, 0xfd, 0x60, 0xaf, 0x77, 0xfd, 0x63, 0xaf, 0x02, 0x02, 0x04, 0x0e, 0x32, 0x04, 0x32, 0x04, 0x0e, 0x32, 0x04, 0x0e, 0x36, 0x04, 0x32, 0x04,
0xfe, 0x1f, 0x72, 0xfd, 0x62, 0xaf, 0x0f, 0x1f, 0x72, 0xfd, 0x52, 0xaf, 0xfe, 0x1f, 0x72, 0xfd, 0x0b, 0xa0, 0x0a, 0xa1, 0xf3, 0xaf, 0x06, 0xcf, 0x11, 0xfd, 0x08, 0xaf, 0xfe, 0x1f, 0x67, 0xfd, 0x0e, 0x32, 0x04, 0x0e, 0x32, 0x04, 0x0e, 0x32, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x1e, 0x0e, 0x34,
0x0b, 0xa0, 0x0a, 0xa1, 0xcf, 0xaf, 0x06, 0xcf, 0x11, 0xfd, 0xfe, 0xa8, 0xc9, 0xaf, 0x40, 0xfd, 0x08, 0xaf, 0x07, 0xff, 0x4e, 0xaf, 0xfa, 0xce, 0x5d, 0x5f, 0xf9, 0xaf, 0x00, 0xff, 0x6c, 0x1f, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x0e, 0x0c, 0x33, 0x1e, 0x02, 0x0c, 0x0e, 0x0d, 0x0e, 0x02, 0x0d,
0x7b, 0x5f, 0x12, 0xf1, 0xff, 0xa8, 0xff, 0xa9, 0xfb, 0xad, 0x5e, 0xae, 0x6c, 0x1f, 0x7b, 0x5f, 0xb6, 0xbc, 0xb7, 0xbb, 0xb3, 0xf8, 0xff, 0xac, 0x73, 0xaf, 0xff, 0x1f, 0x40, 0xfd, 0xb4, 0xbe, 0x0d, 0x3a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0d, 0x0d, 0x01, 0x01, 0x00, 0x0e, 0x04, 0x0e, 0x34, 0x01,
0xb5, 0xbd, 0xb8, 0xfd, 0xf8, 0xce, 0xdd, 0x5f, 0xb8, 0xab, 0xfd, 0x2b, 0xff, 0x1b, 0x4b, 0xfd, 0xb8, 0xab, 0xfb, 0x2b, 0xff, 0x1b, 0x6a, 0xfd, 0xcc, 0x1f, 0x73, 0x1c, 0x50, 0xfd, 0xfe, 0x18, 0x01, 0x00, 0x0e, 0x0d, 0x04, 0x0e, 0x0e, 0x32, 0x04, 0x0e, 0x0e, 0x32, 0x0d, 0x04, 0x35, 0x0e,
0x15, 0xfd, 0x9e, 0xaf, 0xff, 0xad, 0x73, 0xac, 0xff, 0xab, 0xcc, 0xbf, 0xbb, 0xff, 0xbf, 0x1d, 0x34, 0xfd, 0xcf, 0x1e, 0x27, 0xfd, 0x9b, 0xaf, 0xf8, 0xeb, 0xfc, 0xaf, 0x5e, 0xcc, 0xfb, 0xdb, 0x32, 0x0c, 0x0e, 0x04, 0x0e, 0x0d, 0x0d, 0x0c, 0x32, 0x0c, 0x36, 0x0c, 0x0e, 0x0c, 0x0e, 0x0e,
0xf8, 0xad, 0x73, 0xed, 0xfe, 0xaf, 0x65, 0xce, 0xfb, 0xdd, 0xf8, 0xaf, 0x00, 0xff, 0x12, 0xf1, 0xf8, 0xa1, 0x73, 0xe1, 0xf0, 0xaf, 0x65, 0xc0, 0xfb, 0xd1, 0xff, 0xab, 0xff, 0xaf, 0x01, 0x4f, 0x0e, 0x04, 0x0c, 0x0e, 0x0e, 0x0e, 0x02, 0x3a, 0x0e, 0x04, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x03,
0xbb, 0x1f, 0xf9, 0x1b, 0x21, 0xfd, 0x73, 0xbf, 0x73, 0xbf, 0x0b, 0xa0, 0x0a, 0xa1, 0xff, 0xaf, 0x06, 0xcf, 0x11, 0xfd, 0x0b, 0xa0, 0x0a, 0xa1, 0xed, 0xaf, 0x06, 0xcf, 0x09, 0xaf, 0x97, 0xbf, 0x0d, 0x0e, 0x34, 0x05, 0x01, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x1e, 0x1e, 0x0e, 0x02, 0x1e, 0x01,
0x0c, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xfe, 0xaf, 0x76, 0xa0, 0x77, 0xa1, 0x04, 0xa5, 0x2e, 0xf0, 0xc4, 0xaf, 0x16, 0x16, 0x16, 0x16, 0x16, 0x23, 0x03, 0x03, 0x03, 0x03, 0x16, 0x04, 0x04, 0x18, 0x3a, 0x0c,
0xfb, 0xab, 0xf5, 0xae, 0xdf, 0xad, 0x0a, 0xf0, 0x00, 0xfb, 0x01, 0xfc, 0xfe, 0x15, 0xf2, 0xfc, 0xc0, 0xaf, 0xb1, 0xaf, 0xcf, 0xaf, 0x06, 0xcf, 0x9e, 0xfc, 0xff, 0x15, 0xee, 0xfc, 0x6f, 0xaf, 0x0e, 0x0e, 0x0e, 0x3a, 0x02, 0x02, 0x0e, 0x34, 0x0c, 0x0c, 0x0e, 0x02, 0x33, 0x0e, 0x32, 0x04,
0xdc, 0xfc, 0xfe, 0x15, 0xe9, 0xfc, 0x6f, 0xaf, 0xfe, 0x1f, 0xdc, 0xfc, 0x63, 0xaf, 0xfe, 0x1f, 0xdc, 0xfc, 0x54, 0xaf, 0xdc, 0xfc, 0x04, 0xaf, 0xdc, 0xfc, 0x6f, 0xaf, 0xd7, 0xfc, 0xf3, 0xab, 0x36, 0x0e, 0x32, 0x04, 0x0e, 0x36, 0x04, 0x0e, 0x36, 0x04, 0x32, 0x04, 0x32, 0x04, 0x32, 0x04,
0xbf, 0x2b, 0xff, 0x1b, 0xd7, 0xfc, 0x01, 0xa0, 0x00, 0xa1, 0xf3, 0xaf, 0x06, 0xcf, 0x9e, 0xfc, 0xfb, 0xa1, 0x15, 0xa0, 0x00, 0xaf, 0x04, 0xcf, 0x01, 0xaf, 0x05, 0xcf, 0xfe, 0x15, 0xb9, 0xfc, 0x0e, 0x0e, 0x36, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x0e, 0x0e, 0x18, 0x02, 0x18, 0x02, 0x0e, 0x32,
0x72, 0xfe, 0x98, 0xac, 0x72, 0xab, 0xbf, 0x1c, 0xce, 0xfc, 0x6f, 0xfe, 0xfb, 0xa1, 0x1e, 0xa0, 0xfe, 0xaf, 0x01, 0xcf, 0xff, 0xaf, 0x04, 0xcf, 0xd5, 0x59, 0xd6, 0xf1, 0xd7, 0xff, 0xd9, 0xfa, 0x00, 0x04, 0x04, 0x0c, 0x35, 0x00, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x02, 0x00, 0x00, 0x00, 0x00,
0xfb, 0xa1, 0x15, 0xa0, 0xff, 0xaf, 0x4d, 0xcf, 0x4e, 0xcf, 0xa2, 0xfc, 0x72, 0xff, 0x6f, 0xff, 0xd9, 0xff, 0xc0, 0xff, 0xd5, 0x17, 0xd6, 0xfc, 0xd7, 0xff, 0xd9, 0xfa, 0x71, 0xa5, 0x71, 0xff, 0x0e, 0x0e, 0x0e, 0x02, 0x02, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
0x75, 0xab, 0xfe, 0x1b, 0xaa, 0xfc, 0xff, 0xdf, 0xaf, 0xfc, 0xfe, 0xab, 0x16, 0xc6, 0x05, 0xab, 0xa4, 0xfc, 0xff, 0xdf, 0xa8, 0xfc, 0xd9, 0xff, 0x71, 0xb5, 0x01, 0xa0, 0x00, 0xa1, 0xff, 0xaf, 0x04, 0x0e, 0x32, 0x0b, 0x33, 0x0e, 0x3a, 0x04, 0x36, 0x0b, 0x33, 0x00, 0x01, 0x1e, 0x1e, 0x0e,
0x06, 0xcf, 0x97, 0xb4, 0x02, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xfd, 0xaf, 0x76, 0xa0, 0x77, 0xa1, 0x04, 0xa5, 0x02, 0x01, 0x16, 0x16, 0x16, 0x16, 0x16, 0x23, 0x03, 0x03, 0x03, 0x03, 0x16, 0x04, 0x04, 0x18,
0x05, 0xa4, 0x2e, 0xf0, 0x00, 0xfc, 0xfb, 0xab, 0xf3, 0xae, 0xdf, 0xad, 0x0a, 0xf0, 0x01, 0xfb, 0x02, 0xfc, 0xfe, 0x15, 0x82, 0xfc, 0xfe, 0x14, 0x7d, 0xfc, 0x02, 0xa0, 0x01, 0xa1, 0xcf, 0xaf, 0x18, 0x3a, 0x02, 0x0e, 0x0e, 0x0e, 0x3a, 0x02, 0x02, 0x0e, 0x30, 0x0e, 0x34, 0x1e, 0x1e, 0x0e,
0x06, 0xcf, 0x17, 0xfc, 0xff, 0x15, 0x79, 0xfc, 0x63, 0xaf, 0x67, 0xfc, 0xfe, 0x15, 0x74, 0xfc, 0x63, 0xaf, 0xfe, 0x1f, 0x67, 0xfc, 0x6f, 0xaf, 0xfe, 0x1f, 0x67, 0xfc, 0x54, 0xaf, 0x67, 0xfc, 0x02, 0x33, 0x0e, 0x32, 0x04, 0x36, 0x0e, 0x32, 0x04, 0x0e, 0x36, 0x04, 0x0e, 0x36, 0x04, 0x32,
0x04, 0xaf, 0x67, 0xfc, 0x63, 0xaf, 0x62, 0xfc, 0xf3, 0xab, 0xbf, 0x2b, 0xff, 0x1b, 0x62, 0xfc, 0x02, 0xa0, 0x01, 0xa1, 0xf3, 0xaf, 0x06, 0xcf, 0x17, 0xfc, 0xfe, 0x15, 0x2e, 0xfc, 0xfa, 0xa3, 0x04, 0x32, 0x04, 0x32, 0x04, 0x0e, 0x0e, 0x36, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x0e, 0x32, 0x0e,
0xc6, 0xa2, 0x00, 0xaf, 0x62, 0xbf, 0x63, 0xfe, 0x5f, 0xb4, 0xfb, 0xa1, 0x1e, 0xa0, 0xfe, 0xaf, 0x01, 0xcf, 0xff, 0xaf, 0x04, 0xcf, 0x02, 0xac, 0x01, 0xab, 0x8e, 0xae, 0xfd, 0xad, 0xf5, 0xc4, 0x0e, 0x1a, 0x01, 0x00, 0x01, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x02, 0x1a, 0x1a, 0x0e, 0x0e, 0x3a,
0xd5, 0xbe, 0xd6, 0xbd, 0xd7, 0xbc, 0x04, 0xac, 0x03, 0xab, 0x8e, 0xae, 0xfd, 0xad, 0xf5, 0xc4, 0x04, 0xa0, 0x03, 0xa1, 0x01, 0x11, 0x3d, 0xfc, 0x02, 0x10, 0x3d, 0xfc, 0x63, 0xce, 0xdd, 0xff, 0x01, 0x01, 0x01, 0x1a, 0x1a, 0x0e, 0x0e, 0x3a, 0x1a, 0x1a, 0x1a, 0x32, 0x1a, 0x32, 0x0e, 0x0d,
0xcc, 0xff, 0xbb, 0xff, 0xcf, 0xbe, 0xd0, 0xbd, 0xd1, 0xbc, 0xd9, 0xf2, 0x5e, 0xd8, 0x5b, 0xff, 0x5a, 0xfe, 0x5d, 0xff, 0x5c, 0xff, 0x59, 0xff, 0x57, 0xff, 0x56, 0xff, 0xff, 0xab, 0x76, 0xdd, 0x0d, 0x0d, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x3a,
0x1b, 0xfc, 0x63, 0xff, 0xd9, 0xff, 0xc0, 0xff, 0xd5, 0x17, 0xd6, 0xfc, 0xd7, 0xff, 0xd9, 0xfa, 0x71, 0xa5, 0x71, 0xff, 0xfe, 0xab, 0x76, 0xdd, 0xfe, 0xab, 0x16, 0xc6, 0x05, 0xab, 0x1d, 0xfc, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0e, 0x3a, 0x0e, 0x3a, 0x04, 0x36,
0xff, 0xdf, 0x21, 0xfc, 0xd9, 0xff, 0x71, 0xb5, 0x02, 0xa0, 0x01, 0xa1, 0xff, 0xaf, 0x06, 0xcf, 0x00, 0xaf, 0x97, 0xbf, 0x03, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0x0b, 0x33, 0x00, 0x01, 0x1e, 0x1e, 0x0e, 0x02, 0x1e, 0x01, 0x16, 0x16, 0x16, 0x16, 0x16, 0x23,
0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xe1, 0xaf, 0xff, 0xaf, 0x17, 0xff, 0x18, 0xff, 0x19, 0xff, 0x1a, 0xff, 0xff, 0xaf, 0x1b, 0xff, 0x1c, 0xff, 0x1d, 0xff, 0x1e, 0xff, 0x76, 0xa4, 0x03, 0x03, 0x03, 0x03, 0x16, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x04,
0x77, 0xa5, 0x05, 0xaf, 0x01, 0xff, 0x04, 0xaf, 0x02, 0xff, 0x07, 0xaf, 0x03, 0xff, 0x06, 0xaf, 0x04, 0xff, 0x08, 0xaf, 0x11, 0xff, 0x09, 0xaf, 0x12, 0xff, 0x10, 0xaf, 0x13, 0xff, 0x12, 0xaf, 0x04, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c,
0x05, 0xff, 0x11, 0xaf, 0x06, 0xff, 0x14, 0xaf, 0x07, 0xff, 0x13, 0xaf, 0x08, 0xff, 0x16, 0xaf, 0x09, 0xff, 0x15, 0xaf, 0x0a, 0xff, 0x18, 0xaf, 0x0b, 0xff, 0x17, 0xaf, 0x0c, 0xff, 0x1a, 0xaf, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c,
0x0d, 0xff, 0x19, 0xaf, 0x0e, 0xff, 0x1c, 0xaf, 0x0f, 0xff, 0x1b, 0xaf, 0x10, 0xff, 0x2e, 0xf0, 0x14, 0xfc, 0xfb, 0xab, 0xf2, 0xae, 0xdf, 0xad, 0xef, 0xef, 0x15, 0xfb, 0x16, 0xfc, 0x63, 0xaf, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x1c, 0x02, 0x3a, 0x02, 0x0e, 0x0e, 0x0e, 0x3a, 0x02, 0x02, 0x04,
0xfe, 0x1f, 0xbf, 0xfb, 0x6f, 0xaf, 0xfe, 0x1f, 0xbf, 0xfb, 0x04, 0xaf, 0xbf, 0xfb, 0x54, 0xaf, 0xfd, 0x1f, 0xbf, 0xfb, 0x54, 0xaf, 0xba, 0xfb, 0xf3, 0xab, 0xbf, 0x2b, 0xff, 0x1b, 0xba, 0xfb, 0x0e, 0x36, 0x04, 0x0e, 0x36, 0x04, 0x32, 0x04, 0x0e, 0x36, 0x04, 0x32, 0x04, 0x0e, 0x0e, 0x36,
0x16, 0xa0, 0x15, 0xa1, 0xf3, 0xaf, 0x03, 0xcf, 0x15, 0xfa, 0x54, 0xaf, 0xb3, 0xfb, 0x16, 0xa0, 0x15, 0xa1, 0xf6, 0xaf, 0x03, 0xcf, 0x15, 0xfa, 0x02, 0xac, 0x03, 0xcc, 0x01, 0xfb, 0xc0, 0x1b, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x04, 0x36, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x1e, 0x0e, 0x1f, 0x0e,
0xad, 0xfb, 0x03, 0x1c, 0x75, 0xfb, 0x04, 0xac, 0x03, 0xab, 0xff, 0x1b, 0xa7, 0xfb, 0xfc, 0x1c, 0x75, 0xfb, 0xbf, 0x1b, 0xa3, 0xfb, 0xff, 0x1c, 0x75, 0xfb, 0x11, 0xaf, 0xfe, 0x1f, 0x75, 0xfb, 0x32, 0x0e, 0x30, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x30, 0x1e, 0x0e, 0x30,
0x12, 0xaf, 0xfe, 0x1f, 0x75, 0xfb, 0x13, 0xaf, 0xfe, 0x1f, 0x75, 0xfb, 0x06, 0xa0, 0x05, 0xa1, 0xff, 0x11, 0x94, 0xfb, 0xfa, 0x10, 0x75, 0xfb, 0xf3, 0x11, 0x90, 0xfb, 0x7f, 0x10, 0x75, 0xfb, 0x1e, 0x0e, 0x30, 0x1e, 0x0e, 0x30, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x30,
0x08, 0xac, 0x07, 0xab, 0xff, 0x1b, 0x8a, 0xfb, 0xfa, 0x1c, 0x75, 0xfb, 0xf3, 0x1b, 0x86, 0xfb, 0x7f, 0x1c, 0x75, 0xfb, 0x0a, 0xa0, 0x09, 0xa1, 0xfe, 0x11, 0x80, 0xfb, 0x0c, 0x10, 0x75, 0xfb, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x30, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x30,
0x0c, 0xac, 0x0b, 0xab, 0xff, 0x1b, 0x7a, 0xfb, 0xf6, 0x1c, 0x75, 0xfb, 0xf3, 0x1b, 0x76, 0xfb, 0x7f, 0x1c, 0x70, 0xfb, 0x16, 0xa0, 0x15, 0xa1, 0xcf, 0xaf, 0x03, 0xcf, 0x15, 0xfa, 0x04, 0xac, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x34, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x1e,
0x03, 0xab, 0x01, 0x1b, 0x6b, 0xfb, 0x02, 0x1c, 0x4c, 0xfb, 0x06, 0xa0, 0x05, 0xa1, 0x07, 0x11, 0x65, 0xfb, 0x08, 0x10, 0x4c, 0xfb, 0x0e, 0xac, 0x0d, 0xab, 0x0f, 0x1b, 0x5f, 0xfb, 0x10, 0x1c, 0x1e, 0x1e, 0x32, 0x1e, 0x30, 0x1e, 0x1e, 0x1e, 0x32, 0x1e, 0x30, 0x1e, 0x1e, 0x1e, 0x32, 0x1e,
0x4c, 0xfb, 0x0a, 0x1e, 0x09, 0x5d, 0x08, 0xac, 0x07, 0xab, 0x32, 0xc5, 0xe0, 0xaf, 0xd1, 0xaf, 0x0c, 0xae, 0x0b, 0xad, 0xf7, 0xee, 0xff, 0x7f, 0xf7, 0xed, 0xed, 0xbf, 0x01, 0xae, 0xdf, 0x11, 0x30, 0x1f, 0x1f, 0x1e, 0x1e, 0x3a, 0x0c, 0x0c, 0x1e, 0x1e, 0x0e, 0x03, 0x0e, 0x0c, 0x16, 0x0c,
0x4d, 0xfb, 0xef, 0x10, 0x47, 0xfb, 0x16, 0xa0, 0x15, 0xa1, 0xed, 0xaf, 0x03, 0xcf, 0x15, 0xfa, 0x72, 0xfe, 0x98, 0xac, 0x72, 0xab, 0xbf, 0x1c, 0x46, 0xfb, 0x54, 0xfe, 0x53, 0xff, 0x11, 0xaf, 0x32, 0x0c, 0x34, 0x1e, 0x1e, 0x0e, 0x02, 0x33, 0x00, 0x04, 0x04, 0x0c, 0x35, 0x00, 0x00, 0x1e,
0x52, 0xbf, 0xfa, 0xa1, 0x97, 0xa0, 0x01, 0xaf, 0x00, 0xcf, 0x02, 0xaf, 0x01, 0xcf, 0x03, 0xaf, 0x02, 0xcf, 0x04, 0xaf, 0x03, 0xcf, 0x0d, 0xaf, 0x0c, 0xcf, 0x0e, 0xaf, 0x0d, 0xcf, 0x0f, 0xaf, 0x01, 0x0e, 0x0e, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e,
0x0e, 0xcf, 0x10, 0xaf, 0x0f, 0xcf, 0x05, 0xaf, 0x10, 0xcf, 0x06, 0xaf, 0x11, 0xcf, 0x07, 0xaf, 0x12, 0xcf, 0x08, 0xaf, 0x13, 0xcf, 0xf9, 0xa1, 0xfa, 0xa0, 0x24, 0xaf, 0x4f, 0xbf, 0x25, 0xaf, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x0e, 0x0e, 0x18, 0x01, 0x18,
0x4e, 0xbf, 0x12, 0xaf, 0x51, 0xbf, 0x4e, 0xaf, 0xf5, 0xce, 0x5d, 0x5f, 0xf9, 0xaf, 0x00, 0xff, 0xfa, 0xab, 0x93, 0xac, 0x12, 0xf1, 0x13, 0xaf, 0x50, 0xbf, 0x05, 0xaf, 0x4d, 0xbf, 0x06, 0xaf, 0x01, 0x1e, 0x01, 0x0c, 0x0e, 0x0d, 0x0e, 0x02, 0x0e, 0x0e, 0x3a, 0x1e, 0x01, 0x1e, 0x01, 0x1e,
0x4c, 0xbf, 0x09, 0xaf, 0x4b, 0xbf, 0x0a, 0xaf, 0x4a, 0xbf, 0x0b, 0xaf, 0x49, 0xbf, 0x0c, 0xaf, 0x48, 0xbf, 0xf9, 0xa1, 0xfa, 0xa0, 0x10, 0xaf, 0xff, 0xfa, 0x10, 0xaf, 0x47, 0xbf, 0xf7, 0xfa, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x0e, 0x0e, 0x18, 0x36, 0x18, 0x01, 0x33,
0xb9, 0xab, 0xf3, 0xeb, 0xfc, 0xaf, 0xbc, 0xaf, 0xff, 0xab, 0xfa, 0xcc, 0x47, 0xbc, 0xc2, 0xef, 0xf9, 0xa3, 0xfa, 0xa2, 0x11, 0xaf, 0xfe, 0x1f, 0xe7, 0xfa, 0xfa, 0xa1, 0x97, 0xa0, 0x12, 0xaf, 0x04, 0x0e, 0x0c, 0x0c, 0x0e, 0x0e, 0x01, 0x3a, 0x0e, 0x0e, 0x1a, 0x0e, 0x32, 0x0e, 0x0e, 0x1a,
0x19, 0xcf, 0x13, 0xaf, 0x1a, 0xcf, 0x14, 0xaf, 0x1b, 0xcf, 0x15, 0xaf, 0x1c, 0xcf, 0xaa, 0xfa, 0x09, 0xad, 0xa7, 0xae, 0xb9, 0xab, 0xe0, 0x2b, 0xbc, 0xaf, 0xff, 0xab, 0xc0, 0xce, 0xb1, 0xdd, 0x02, 0x1a, 0x02, 0x1a, 0x02, 0x1a, 0x02, 0x33, 0x0e, 0x0e, 0x04, 0x0e, 0x0c, 0x0e, 0x0c, 0x0c,
0x00, 0xaf, 0x17, 0xff, 0xba, 0xab, 0xe0, 0x2b, 0xbc, 0xaf, 0xff, 0xab, 0xc0, 0xce, 0xb1, 0xdd, 0x00, 0xaf, 0x18, 0xff, 0xbb, 0xab, 0xe0, 0x2b, 0xbc, 0xaf, 0xff, 0xab, 0xc0, 0xce, 0xb1, 0xdd, 0x18, 0x02, 0x04, 0x0e, 0x0c, 0x0e, 0x0c, 0x0c, 0x18, 0x02, 0x04, 0x0e, 0x0c, 0x0e, 0x0c, 0x0c,
0x00, 0xaf, 0x19, 0xff, 0xbb, 0xac, 0xe0, 0x2c, 0xbc, 0xab, 0xe0, 0x2b, 0xbf, 0x1c, 0xc0, 0xfa, 0xbc, 0xab, 0xe0, 0x2b, 0xbc, 0xaf, 0xff, 0xab, 0xc0, 0xce, 0xb1, 0xdd, 0xb7, 0xfa, 0xbc, 0xab, 0x18, 0x02, 0x04, 0x0e, 0x04, 0x0e, 0x0c, 0x36, 0x04, 0x0e, 0x0c, 0x0e, 0x0c, 0x0c, 0x33, 0x04,
0xaa, 0x8b, 0xe0, 0x2b, 0xbc, 0xaf, 0xff, 0xab, 0xc0, 0xaf, 0xa7, 0xc0, 0xb1, 0xaf, 0x09, 0xd1, 0x00, 0xaf, 0x1a, 0xff, 0xfa, 0xa1, 0x97, 0xa0, 0x17, 0xaf, 0x19, 0xcf, 0x18, 0xaf, 0x1a, 0xcf, 0x0e, 0x0e, 0x0c, 0x0e, 0x0c, 0x0e, 0x0c, 0x0e, 0x18, 0x02, 0x0e, 0x0e, 0x1e, 0x02, 0x1e, 0x02,
0x19, 0xaf, 0x1b, 0xcf, 0x1a, 0xaf, 0x1c, 0xcf, 0xc2, 0xef, 0xf9, 0xa3, 0xfa, 0xa2, 0x19, 0xaf, 0x1a, 0xbf, 0x1b, 0xbf, 0x1c, 0xbf, 0x98, 0xfa, 0xfa, 0xa1, 0x97, 0xa0, 0x19, 0xaf, 0x1d, 0xcf, 0x1e, 0x02, 0x1e, 0x02, 0x3a, 0x0e, 0x0e, 0x1a, 0x1a, 0x1a, 0x1a, 0x36, 0x0e, 0x0e, 0x1a, 0x02,
0x1a, 0xaf, 0x1e, 0xcf, 0x1b, 0xaf, 0x1f, 0xcf, 0x1c, 0xaf, 0x20, 0xcf, 0x85, 0xfa, 0xba, 0xaf, 0x1e, 0xff, 0xbb, 0xaf, 0x1d, 0xff, 0xbc, 0xaf, 0x1c, 0xff, 0xff, 0xaf, 0x1b, 0xff, 0xfa, 0xa1, 0x1a, 0x02, 0x1a, 0x02, 0x1a, 0x02, 0x33, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x0e, 0x02, 0x0e,
0x97, 0xa0, 0x1b, 0xaf, 0x1d, 0xcf, 0x1c, 0xaf, 0x1e, 0xcf, 0x1d, 0xaf, 0x1f, 0xcf, 0x1e, 0xaf, 0x20, 0xcf, 0xc2, 0xef, 0xf9, 0xa1, 0xfa, 0xa0, 0x1e, 0xac, 0x1d, 0xab, 0x00, 0x1b, 0x7d, 0xfa, 0x0e, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x3a, 0x0e, 0x0e, 0x18, 0x18, 0x0e, 0x32,
0x00, 0x1c, 0x7a, 0xfa, 0x46, 0xbb, 0x45, 0xbc, 0x76, 0xfa, 0x05, 0xaf, 0x46, 0xbf, 0x06, 0xaf, 0x45, 0xbf, 0xf9, 0xa1, 0xfa, 0xa0, 0x1f, 0xaf, 0x44, 0xbf, 0x71, 0xab, 0xfe, 0x1b, 0x6c, 0xfa, 0x0e, 0x36, 0x01, 0x01, 0x33, 0x1e, 0x01, 0x1e, 0x01, 0x0e, 0x0e, 0x18, 0x01, 0x04, 0x0e, 0x36,
0x21, 0xaf, 0xfe, 0x1f, 0x69, 0xfa, 0x70, 0xa1, 0x10, 0xa0, 0x67, 0xfa, 0x70, 0xa1, 0x0f, 0xa0, 0x00, 0xaf, 0x43, 0xbf, 0x40, 0x00, 0x3f, 0x00, 0x3c, 0xff, 0x3a, 0xff, 0x3b, 0xff, 0x39, 0xff, 0x18, 0x0e, 0x32, 0x0e, 0x0e, 0x33, 0x0e, 0x0e, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0xff, 0x35, 0xff, 0x31, 0xff, 0x30, 0xff, 0x15, 0xff, 0x14, 0xff, 0x13, 0xff, 0x12, 0xff, 0x11, 0xff, 0x10, 0xff, 0x0f, 0xff, 0x0c, 0xff, 0x0e, 0xff, 0x0d, 0xff, 0x63, 0xfe, 0x62, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x50, 0xaf, 0x46, 0xfa, 0xfa, 0xa1, 0x97, 0xa0, 0xfb, 0xaf, 0x0a, 0xcf, 0x6a, 0xaf, 0x0b, 0xcf, 0x3d, 0xfa, 0x50, 0xaf, 0xfe, 0x1f, 0x3d, 0xfa, 0xfa, 0xa1, 0x97, 0xa0, 0xfb, 0xaf, 0x0a, 0xcf, 0x04, 0x32, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x02, 0x33, 0x04, 0x0e, 0x32, 0x0e, 0x0e, 0x0e, 0x02,
0x64, 0xaf, 0x0b, 0xcf, 0x02, 0xac, 0x01, 0xab, 0x8e, 0xae, 0xfd, 0xad, 0xf5, 0xc4, 0xd5, 0xbe, 0xd6, 0xbd, 0xd7, 0xbc, 0x04, 0xac, 0x03, 0xab, 0x8e, 0xae, 0xfd, 0xad, 0xf5, 0xc4, 0x04, 0xa0, 0x0e, 0x02, 0x1e, 0x1e, 0x0e, 0x0e, 0x3a, 0x01, 0x01, 0x01, 0x1e, 0x1e, 0x0e, 0x0e, 0x3a, 0x1e,
0x03, 0xa1, 0x01, 0x11, 0x26, 0xfa, 0x02, 0x10, 0x26, 0xfa, 0x63, 0xce, 0xdd, 0xff, 0xcc, 0xff, 0xbb, 0xff, 0xcf, 0xbe, 0xd0, 0xbd, 0xd1, 0xbc, 0xd9, 0xf2, 0x5e, 0xd8, 0xfb, 0xa1, 0x1e, 0xa0, 0x1e, 0x1e, 0x32, 0x1e, 0x32, 0x0e, 0x0d, 0x0d, 0x0d, 0x01, 0x01, 0x01, 0x00, 0x00, 0x0e, 0x0e,
0xfe, 0xaf, 0x01, 0xcf, 0xff, 0xaf, 0x04, 0xcf, 0xff, 0xab, 0x76, 0xdd, 0x16, 0xa0, 0x15, 0xa1, 0xff, 0xaf, 0x03, 0xcf, 0x14, 0xaf, 0x97, 0xbf, 0x1f, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x3a, 0x1e, 0x1e, 0x0e, 0x02, 0x1e, 0x01, 0x16, 0x16, 0x16, 0x16,
0x01, 0xa4, 0xff, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xfa, 0xaf, 0x2e, 0xf0, 0x01, 0xfc, 0xfb, 0xab, 0xf1, 0xae, 0xdf, 0xad, 0x0a, 0xf0, 0xc4, 0xaf, 0xb5, 0xaf, 0xff, 0xaf, 0x16, 0x23, 0x03, 0x03, 0x03, 0x03, 0x16, 0x3a, 0x02, 0x0e, 0x0e, 0x0e, 0x3a, 0x0c, 0x0c, 0x0e,
0x02, 0xff, 0x63, 0xaf, 0xfe, 0x1f, 0xf8, 0xf9, 0x62, 0xaf, 0x0f, 0x1f, 0xf5, 0xf9, 0xf3, 0xaf, 0x06, 0xef, 0xd8, 0xf9, 0x72, 0xff, 0x63, 0xff, 0x54, 0xff, 0xfe, 0xaf, 0x02, 0xff, 0xd9, 0xff, 0x02, 0x04, 0x0e, 0x32, 0x04, 0x0e, 0x36, 0x0e, 0x02, 0x33, 0x00, 0x00, 0x00, 0x0e, 0x02, 0x00,
0xc0, 0xff, 0xd5, 0x17, 0xd6, 0xfc, 0xd7, 0xff, 0xd9, 0xfa, 0x71, 0xaf, 0x03, 0xff, 0x71, 0xff, 0xfe, 0xab, 0x76, 0xdd, 0x75, 0xab, 0xe5, 0xf9, 0xfe, 0xab, 0x16, 0xc6, 0x05, 0xab, 0xdd, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, 0x0e, 0x3a, 0x04, 0x32, 0x0e, 0x3a, 0x04, 0x36,
0xff, 0xdf, 0xe1, 0xf9, 0xd9, 0xff, 0x03, 0xaf, 0x71, 0xbf, 0xff, 0xaf, 0x06, 0xef, 0x01, 0xaf, 0x97, 0xbf, 0x02, 0xaf, 0xfe, 0x1f, 0x9c, 0xf9, 0x78, 0xab, 0xdf, 0x2b, 0xff, 0x1b, 0x9c, 0xf9, 0x0b, 0x33, 0x00, 0x1e, 0x01, 0x0e, 0x02, 0x1e, 0x01, 0x1e, 0x0e, 0x32, 0x04, 0x0e, 0x0e, 0x36,
0xfb, 0xa1, 0x7a, 0xa0, 0x00, 0xab, 0xfe, 0x2b, 0xff, 0x1b, 0x9c, 0xf9, 0x2e, 0xf0, 0xc4, 0xaf, 0xec, 0xab, 0xc1, 0xad, 0xd4, 0xef, 0x04, 0xfb, 0x05, 0xfc, 0xc0, 0xaf, 0xb1, 0xaf, 0xfe, 0xaf, 0x0e, 0x0e, 0x18, 0x0e, 0x0e, 0x36, 0x3a, 0x0c, 0x0e, 0x0e, 0x3a, 0x02, 0x02, 0x0c, 0x0c, 0x0e,
0x03, 0xcf, 0xfd, 0xaf, 0x04, 0xcf, 0xff, 0xaf, 0x05, 0xcf, 0xff, 0xaf, 0x06, 0xcf, 0xff, 0xaf, 0x07, 0xcf, 0xff, 0xaf, 0x08, 0xcf, 0xf6, 0xcc, 0xbb, 0x5f, 0xf9, 0xaf, 0x00, 0xff, 0x6a, 0xae, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x0d, 0x0e, 0x02, 0x04,
0x6b, 0xad, 0x12, 0xf1, 0x05, 0xa0, 0x04, 0xa1, 0xff, 0xaf, 0x0f, 0xcf, 0xff, 0xaf, 0x10, 0xcf, 0xff, 0xaf, 0x11, 0xcf, 0xff, 0xaf, 0x12, 0xcf, 0xff, 0xaf, 0x13, 0xcf, 0xff, 0xaf, 0x14, 0xcf, 0x04, 0x3a, 0x1e, 0x1e, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02,
0xff, 0xaf, 0x15, 0xcf, 0x97, 0xb4, 0x06, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xf2, 0xaf, 0x76, 0xa0, 0x77, 0xa1, 0x05, 0xaf, 0x0e, 0x02, 0x01, 0x16, 0x16, 0x16, 0x16, 0x16, 0x23, 0x03, 0x03, 0x03, 0x16, 0x04, 0x04, 0x18,
0x00, 0xff, 0x04, 0xaf, 0x01, 0xff, 0x07, 0xaf, 0x02, 0xff, 0x06, 0xaf, 0x03, 0xff, 0x09, 0xaf, 0x04, 0xff, 0x08, 0xaf, 0x05, 0xff, 0x0b, 0xaf, 0x06, 0xff, 0x0a, 0xaf, 0x07, 0xff, 0x0d, 0xaf, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18,
0x08, 0xff, 0x0c, 0xaf, 0x09, 0xff, 0x0f, 0xaf, 0x0a, 0xff, 0x0e, 0xaf, 0x0b, 0xff, 0x11, 0xaf, 0x0c, 0xff, 0x10, 0xaf, 0x0d, 0xff, 0x2e, 0xf0, 0xc5, 0xaf, 0xfb, 0xab, 0xec, 0xae, 0xdf, 0xad, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x18, 0x02, 0x3a, 0x0c, 0x0e, 0x0e, 0x0e,
0xef, 0xef, 0xc2, 0xaf, 0xb3, 0xaf, 0x54, 0xaf, 0x64, 0xf9, 0x4e, 0xac, 0x4f, 0xab, 0x00, 0x1b, 0x64, 0xf9, 0x01, 0x1c, 0x61, 0xf9, 0xfd, 0xaf, 0x03, 0xdf, 0xdf, 0xf8, 0x54, 0xaf, 0xfe, 0x1f, 0x3a, 0x0c, 0x0c, 0x04, 0x36, 0x04, 0x04, 0x1e, 0x32, 0x1e, 0x36, 0x0e, 0x02, 0x33, 0x04, 0x0e,
0x5c, 0xf9, 0x12, 0xaf, 0x59, 0xf9, 0xf3, 0xaf, 0x03, 0xdf, 0xdf, 0xf8, 0x03, 0xac, 0x05, 0xcc, 0x02, 0xfb, 0xf3, 0x1b, 0x53, 0xf9, 0x85, 0x1c, 0x38, 0xf9, 0x05, 0xac, 0x04, 0xab, 0xff, 0x1b, 0x32, 0x04, 0x36, 0x0e, 0x02, 0x33, 0x1e, 0x0e, 0x1f, 0x0e, 0x32, 0x0e, 0x30, 0x1e, 0x1e, 0x0e,
0x4d, 0xf9, 0xfa, 0x1c, 0x38, 0xf9, 0xf3, 0x1b, 0x49, 0xf9, 0x7f, 0x1c, 0x38, 0xf9, 0x07, 0xac, 0x06, 0xab, 0xfe, 0x1b, 0x43, 0xf9, 0x0c, 0x1c, 0x38, 0xf9, 0x09, 0xac, 0x08, 0xab, 0xff, 0x1b, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x30, 0x1e, 0x1e, 0x0e, 0x32, 0x0e, 0x30, 0x1e, 0x1e, 0x0e,
0x3d, 0xf9, 0xf6, 0x1c, 0x38, 0xf9, 0xf3, 0x1b, 0x39, 0xf9, 0x7f, 0x1c, 0x35, 0xf9, 0xcf, 0xaf, 0x03, 0xdf, 0xdf, 0xf8, 0x03, 0xac, 0x02, 0xab, 0x04, 0x1b, 0x30, 0xf9, 0x05, 0x1c, 0x17, 0xf9, 0x32, 0x0e, 0x34, 0x0e, 0x32, 0x0e, 0x34, 0x0e, 0x02, 0x33, 0x1e, 0x1e, 0x1e, 0x32, 0x1e, 0x30,
0x0b, 0xac, 0x0a, 0xab, 0x0c, 0x1b, 0x2a, 0xf9, 0x0d, 0x1c, 0x17, 0xf9, 0x07, 0x1e, 0x06, 0x5d, 0x05, 0xac, 0x04, 0xab, 0x32, 0xc5, 0xe0, 0xaf, 0xd1, 0xaf, 0x09, 0xae, 0x08, 0xad, 0xf7, 0xee, 0x1e, 0x1e, 0x1e, 0x32, 0x1e, 0x30, 0x1f, 0x1f, 0x1e, 0x1e, 0x3a, 0x0c, 0x0c, 0x1e, 0x1e, 0x0e,
0xff, 0x7f, 0xf7, 0xed, 0xed, 0xbf, 0x01, 0xae, 0xdf, 0x11, 0x18, 0xf9, 0xef, 0x10, 0x14, 0xf9, 0xed, 0xaf, 0x03, 0xdf, 0xdf, 0xf8, 0x1b, 0xfe, 0xfa, 0xa1, 0x97, 0xa0, 0x0a, 0xaf, 0x3d, 0xcf, 0x03, 0x0e, 0x0c, 0x16, 0x0c, 0x32, 0x0c, 0x34, 0x0e, 0x02, 0x33, 0x00, 0x0e, 0x0e, 0x1e, 0x02,
0x0b, 0xaf, 0x3e, 0xcf, 0x0c, 0xaf, 0x3f, 0xcf, 0x0d, 0xaf, 0x40, 0xcf, 0x02, 0xaf, 0x41, 0xcf, 0x03, 0xaf, 0x42, 0xcf, 0x04, 0xaf, 0x43, 0xcf, 0x05, 0xaf, 0x44, 0xcf, 0xf9, 0xa1, 0xfa, 0xa0, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x1e, 0x02, 0x0e, 0x0e,
0x1e, 0xac, 0x1d, 0xab, 0x00, 0x1b, 0xf9, 0xf8, 0x00, 0x1c, 0xf6, 0xf8, 0x1e, 0xbb, 0x1d, 0xbc, 0xf2, 0xf8, 0x02, 0xaf, 0x1e, 0xbf, 0x03, 0xaf, 0x1d, 0xbf, 0xf9, 0xa1, 0xfa, 0xa0, 0x1f, 0xaf, 0x18, 0x18, 0x0e, 0x32, 0x0e, 0x36, 0x01, 0x01, 0x33, 0x1e, 0x01, 0x1e, 0x01, 0x0e, 0x0e, 0x18,
0x1c, 0xbf, 0x02, 0xaf, 0x24, 0xbf, 0x03, 0xaf, 0x23, 0xbf, 0x06, 0xaf, 0x22, 0xbf, 0x07, 0xaf, 0x21, 0xbf, 0x08, 0xaf, 0x20, 0xbf, 0x09, 0xaf, 0x1f, 0xbf, 0x12, 0xfe, 0xff, 0xaf, 0x03, 0xdf, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x1e, 0x01, 0x00, 0x0e, 0x02,
0x97, 0xb5, 0x0e, 0xaf, 0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xa1, 0x87, 0xa0, 0xff, 0xaf, 0x00, 0xcf, 0xfb, 0xaf, 0x6b, 0xbf, 0x6a, 0xaf, 0x6a, 0xbf, 0xfa, 0xa1, 0x01, 0x16, 0x16, 0x16, 0x16, 0x23, 0x23, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x01, 0x0e, 0x01, 0x0e,
0xc6, 0xa0, 0xfb, 0xaf, 0x05, 0xcf, 0x6a, 0xaf, 0x06, 0xcf, 0x25, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x74, 0xff, 0x75, 0xff, 0x78, 0xff, 0x79, 0xfe, 0xa1, 0xed, 0xa0, 0xe5, 0xaf, 0x00, 0xcf, 0x0e, 0x0e, 0x02, 0x0e, 0x02, 0x00, 0x23, 0x23, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x0e, 0x0e, 0x02,
0xfe, 0xa1, 0xeb, 0xa0, 0x68, 0xaf, 0x00, 0xcf, 0xfe, 0xa1, 0x55, 0xa0, 0x8a, 0xaf, 0x00, 0xcf, 0xfe, 0xa9, 0x34, 0xa8, 0x80, 0xaf, 0x91, 0xaf, 0x00, 0xab, 0xfd, 0xbb, 0x00, 0xcb, 0xfe, 0xa1, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x0e, 0x0e, 0x02, 0x0e, 0x0e, 0x0c, 0x0c, 0x18, 0x0e, 0x02, 0x0e,
0x61, 0xa0, 0xf3, 0xaf, 0x00, 0xcf, 0xfe, 0xab, 0x5f, 0xac, 0xc2, 0xaf, 0xb3, 0xaf, 0xcc, 0xaf, 0x00, 0xdf, 0xfe, 0xad, 0x60, 0xae, 0xe4, 0xaf, 0xd5, 0xaf, 0xcc, 0xaf, 0x00, 0xef, 0xfe, 0xa3, 0x0e, 0x0e, 0x02, 0x0e, 0x0e, 0x0c, 0x0c, 0x0e, 0x02, 0x0e, 0x0e, 0x0c, 0x0c, 0x0e, 0x02, 0x0e,
0x62, 0xa2, 0xfd, 0xaf, 0x00, 0xdf, 0xf2, 0xaf, 0x00, 0xcf, 0xc4, 0xaf, 0xb5, 0xaf, 0xdd, 0xaf, 0x00, 0xef, 0xe4, 0xaf, 0xd5, 0xaf, 0xfe, 0xaf, 0x00, 0xef, 0xfd, 0xaf, 0x00, 0xdf, 0xf1, 0xaf, 0x0e, 0x0e, 0x02, 0x0e, 0x02, 0x0c, 0x0c, 0x0e, 0x02, 0x0c, 0x0c, 0x0e, 0x02, 0x0e, 0x02, 0x0e,
0x00, 0xcf, 0xc4, 0xaf, 0xb5, 0xaf, 0x8f, 0xaf, 0x00, 0xef, 0xe4, 0xaf, 0xd5, 0xaf, 0x99, 0xaf, 0x00, 0xef, 0xfd, 0xaf, 0x00, 0xdf, 0xf0, 0xaf, 0x00, 0xcf, 0xc4, 0xaf, 0xb5, 0xaf, 0xba, 0xaf, 0x02, 0x0c, 0x0c, 0x0e, 0x02, 0x0c, 0x0c, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0c, 0x0c, 0x0e,
0x00, 0xef, 0xe4, 0xaf, 0xd5, 0xaf, 0xbb, 0xaf, 0x00, 0xef, 0xfd, 0xaf, 0x00, 0xdf, 0xff, 0xaf, 0x00, 0xcf, 0xfe, 0xaf, 0x00, 0xdf, 0xfe, 0xa1, 0x5d, 0xa0, 0xc4, 0xaf, 0xb5, 0xaf, 0x00, 0xaf, 0x02, 0x0c, 0x0c, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x02, 0x0e, 0x0e, 0x0c, 0x0c, 0x18,
0x00, 0xef, 0xfe, 0xa1, 0x5e, 0xa0, 0x00, 0xab, 0x78, 0x2b, 0xcf, 0xbb, 0xe0, 0xaf, 0xd1, 0xaf, 0x00, 0xcb, 0xfd, 0xaf, 0x00, 0xdf, 0x82, 0xaf, 0x93, 0xaf, 0x00, 0xab, 0x02, 0x2b, 0x00, 0xdb, 0x02, 0x0e, 0x0e, 0x18, 0x0e, 0x0e, 0x0c, 0x0c, 0x02, 0x0e, 0x02, 0x0c, 0x0c, 0x1a, 0x0e, 0x02,
0x01, 0xa9, 0x01, 0xa8, 0x01, 0xa5, 0x01, 0xa4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x16, 0x16, 0x16, 0x16, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00
};

const uint32_t EMPatchArray_size = sizeof(EMPatchArray);