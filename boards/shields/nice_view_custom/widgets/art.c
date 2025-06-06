/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xfe, 0xaa, 0x0a, 0x2a, 0x9f, 0xff, 0xff, 0xff, 0xfa, 0xea, 0xaa, 0xae, 0xba, 0xff, 0xff,
        0xfb, 0xff, 0xf0, 0xf1, 0x55, 0x05, 0x15, 0x47, 0xff, 0xff, 0xff, 0xf5, 0xd5, 0x55, 0x5f,
        0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xa4, 0xaa, 0x8a, 0x8a, 0xa1, 0xff, 0xff, 0xfb, 0xea,
        0xaa, 0xaa, 0xbe, 0xbf, 0xef, 0xfb, 0xfb, 0xff, 0xf0, 0x54, 0x55, 0x05, 0x45, 0x54, 0xff,
        0xff, 0x7d, 0x55, 0xd5, 0x75, 0x7f, 0x7f, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xae, 0x2a, 0x82,
        0xa0, 0xaa, 0x3f, 0xff, 0xfe, 0xaa, 0xea, 0xbb, 0xfe, 0xbf, 0xff, 0xfb, 0xfb, 0xfe, 0xf0,
        0x5f, 0x55, 0x01, 0x50, 0x54, 0x1f, 0xff, 0x7f, 0x55, 0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xff,
        0xfd, 0xfd, 0xf0, 0x2f, 0xff, 0x20, 0x28, 0x00, 0x0f, 0xff, 0xae, 0xaa, 0xaa, 0xbf, 0xff,
        0xff, 0xeb, 0xfb, 0xff, 0xff, 0xf0, 0x0e, 0x01, 0x50, 0x14, 0x00, 0x3f, 0xff, 0x57, 0x55,
        0xd5, 0x7f, 0xff, 0x7f, 0xd7, 0xfd, 0xff, 0xfd, 0xf0, 0x1e, 0x01, 0xa8, 0x0a, 0x00, 0xff,
        0xff, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xaf, 0xfb, 0xff, 0xff, 0xf0, 0x1f, 0xf9, 0x50,
        0x01, 0x03, 0xff, 0xff, 0x57, 0x55, 0xd5, 0x7d, 0xff, 0x7f, 0xdf, 0xfd, 0xff, 0xfd, 0xf0,
        0x9f, 0xf9, 0xa8, 0x00, 0x8f, 0xff, 0xfe, 0xaf, 0xaa, 0xaa, 0xff, 0xff, 0xfd, 0xbf, 0xfb,
        0xff, 0xfb, 0xf0, 0x5a, 0x01, 0x54, 0x00, 0x3f, 0xff, 0xff, 0x7f, 0x5d, 0xd5, 0xfd, 0xff,
        0xfd, 0xdf, 0xfd, 0xff, 0xfd, 0xf0, 0x8e, 0x01, 0xaa, 0x00, 0x7f, 0xff, 0xfe, 0xbf, 0xae,
        0xef, 0xff, 0xff, 0xfb, 0xef, 0xfb, 0xff, 0xfa, 0xf0, 0xcf, 0xff, 0xf4, 0x00, 0xf7, 0xff,
        0xff, 0x7f, 0x5d, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xff, 0xff, 0xfd, 0xf0, 0xae, 0x01, 0x2a,
        0x00, 0xfb, 0xff, 0xff, 0xbf, 0xae, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfb, 0xff, 0xfa, 0xf0,
        0xde, 0x01, 0x35, 0x01, 0xfb, 0xff, 0xff, 0x7f, 0x5d, 0xfd, 0xbf, 0xff, 0xff, 0xdf, 0xfd,
        0xff, 0xdd, 0xf0, 0xa7, 0xff, 0xea, 0x81, 0xfc, 0xff, 0x7f, 0xbe, 0xbe, 0xff, 0xe3, 0xff,
        0xff, 0xef, 0xff, 0xf9, 0x3e, 0xf0, 0x56, 0x01, 0x55, 0x41, 0xff, 0x7f, 0xff, 0xff, 0xfd,
        0xfd, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x7d, 0xf0, 0xa6, 0x01, 0x2a, 0x88, 0xfe, 0xff,
        0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xfc, 0xfe, 0xf0, 0x52, 0x79, 0x15,
        0x44, 0x7d, 0xff, 0xff, 0xfd, 0x7f, 0xbd, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xf8, 0xfd, 0xf0,
        0x22, 0x69, 0x2a, 0xa0, 0x3d, 0xff, 0xff, 0xfa, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xe2, 0x48,
        0xfa, 0xff, 0xf0, 0x42, 0x59, 0x15, 0x54, 0x1b, 0xff, 0xff, 0xf7, 0xff, 0xbd, 0xf7, 0xff,
        0xff, 0x95, 0x55, 0x37, 0x7d, 0xf0, 0x02, 0x69, 0x0a, 0xa2, 0x1f, 0xfe, 0xff, 0xee, 0xff,
        0xff, 0xfc, 0xff, 0xff, 0x2a, 0x4a, 0x9f, 0xff, 0xf0, 0x03, 0xff, 0x55, 0x11, 0x4f, 0xff,
        0xff, 0x55, 0x7f, 0xfd, 0xff, 0x00, 0xfc, 0x55, 0x55, 0x4f, 0xff, 0xf0, 0x02, 0x01, 0xaa,
        0x88, 0x8f, 0xde, 0xff, 0xaa, 0xbf, 0xfe, 0xff, 0xff, 0x00, 0xa8, 0x02, 0xa7, 0xff, 0xf0,
        0x02, 0x01, 0x55, 0x55, 0x47, 0xff, 0x7f, 0xd5, 0x5f, 0xff, 0xff, 0xff, 0xc8, 0x47, 0x5c,
        0x53, 0xff, 0xf0, 0x82, 0x49, 0xaa, 0x8a, 0xa7, 0xfe, 0xff, 0xea, 0xbf, 0xff, 0xff, 0xff,
        0xb0, 0x3f, 0x5f, 0x89, 0xff, 0xf0, 0xc2, 0x49, 0x55, 0x45, 0x53, 0xff, 0xff, 0xf5, 0x5f,
        0xff, 0xff, 0xfe, 0x70, 0x7f, 0x5f, 0xe5, 0xff, 0xf0, 0xe2, 0x41, 0xa2, 0xa2, 0xab, 0xfe,
        0xfb, 0xfa, 0xaf, 0xef, 0xff, 0xf9, 0xe2, 0xbf, 0x5f, 0xfa, 0xff, 0xf0, 0xe2, 0x41, 0x51,
        0x51, 0x51, 0xff, 0x77, 0xfd, 0x57, 0xf9, 0xff, 0xe7, 0x85, 0x7f, 0x5f, 0xfc, 0xff, 0xf0,
        0xe3, 0xff, 0xf2, 0xa0, 0xa8, 0xff, 0xfb, 0xbe, 0xaf, 0xfe, 0x1e, 0x80, 0x6a, 0x80, 0x00,
        0x7e, 0xff, 0xb0, 0xe2, 0x60, 0x11, 0x50, 0x54, 0x7f, 0xff, 0xfd, 0x57, 0xff, 0xe0, 0x1f,
        0xc4, 0x15, 0x55, 0x06, 0x7f, 0x70, 0xee, 0x60, 0x18, 0xa8, 0x2a, 0x1f, 0xff, 0xfe, 0xaf,
        0xff, 0xe8, 0xf0, 0x00, 0x0a, 0x4a, 0xa8, 0x7f, 0xf0, 0xdf, 0xff, 0xf1, 0x54, 0x15, 0x43,
        0xff, 0xff, 0x5f, 0xff, 0xe8, 0x7b, 0xc0, 0x05, 0x55, 0x55, 0x7f, 0x70, 0xff, 0x81, 0x28,
        0xaa, 0x0a, 0xa1, 0xff, 0xfe, 0xbf, 0xf7, 0xea, 0x09, 0xe0, 0x0a, 0x4a, 0xaa, 0x7f, 0xf0,
        0xff, 0x81, 0x50, 0x54, 0x05, 0x54, 0x7f, 0xff, 0x7f, 0xfc, 0xe8, 0x4b, 0xc0, 0x05, 0x55,
        0x55, 0x7f, 0x70, 0xfe, 0x7f, 0x28, 0xaa, 0x00, 0xa8, 0xff, 0xfe, 0xbf, 0xff, 0x0a, 0xf0,
        0x00, 0x02, 0x4a, 0xa8, 0x7e, 0xb0, 0xfe, 0x7f, 0x14, 0x55, 0x00, 0x03, 0xff, 0xf7, 0x5f,
        0x7f, 0xe0, 0x1f, 0xc4, 0x01, 0x55, 0x06, 0x7f, 0x70, 0xff, 0x81, 0x08, 0x2a, 0x80, 0x07,
        0xff, 0xf6, 0xaf, 0xff, 0xfe, 0x80, 0x6a, 0x80, 0x00, 0x7e, 0xff, 0xb0, 0x7f, 0x81, 0x14,
        0x55, 0x40, 0x0f, 0xff, 0xed, 0x57, 0x7f, 0xff, 0xe7, 0x85, 0x55, 0x5f, 0xfc, 0xff, 0x70,
        0xbf, 0xff, 0xe8, 0x2a, 0xa8, 0x1f, 0xff, 0xf6, 0xae, 0xff, 0xff, 0xf9, 0xea, 0xaa, 0x5f,
        0xfa, 0xff, 0xf0, 0x5e, 0x01, 0x24, 0x15, 0x54, 0x3f, 0xff, 0xf5, 0x57, 0x7f, 0xfb, 0xfe,
        0xf0, 0x55, 0x5f, 0xe5, 0xff, 0x70, 0xbe, 0x01, 0x22, 0x2a, 0xa0, 0xff, 0xff, 0xba, 0xae,
        0xff, 0xfe, 0x1f, 0x30, 0x2a, 0x0f, 0x89, 0xbf, 0xf0, 0x5f, 0xff, 0xe5, 0x15, 0x41, 0xff,
        0xff, 0xd5, 0x57, 0x7f, 0xff, 0xe0, 0x48, 0x05, 0x54, 0x53, 0xff, 0xf0, 0xbe, 0x01, 0xa2,
        0x02, 0x03, 0xff, 0xff, 0xea, 0xaa, 0xbf, 0xff, 0xff, 0x80, 0x00, 0x02, 0xa7, 0xbf, 0xf0,
        0x5e, 0x01, 0x41, 0x00, 0x06, 0xfd, 0xff, 0xd5, 0x55, 0x5f, 0xff, 0xff, 0xfc, 0x00, 0x40,
        0x4f, 0xff, 0xf0, 0xbe, 0x49, 0x20, 0x80, 0x0f, 0x7f, 0xfe, 0xea, 0xaa, 0xbe, 0xff, 0xff,
        0xff, 0x00, 0x00, 0x1f, 0xbf, 0xf0, 0x7e, 0x49, 0x50, 0x00, 0x0f, 0x7f, 0xff, 0xd5, 0x55,
        0x5f, 0x83, 0xff, 0xff, 0x80, 0x40, 0x3f, 0xff, 0xf0, 0xfe, 0x41, 0x28, 0x00, 0x0f, 0xbf,
        0xff, 0xeb, 0xaa, 0xbf, 0xfc, 0x00, 0x03, 0xe0, 0x00, 0xff, 0xbf, 0xf0, 0xfe, 0x41, 0x14,
        0x00, 0x1f, 0xdf, 0xff, 0xd5, 0xd5, 0x57, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xdf, 0xf0,
        0xff, 0xff, 0x08, 0x00, 0x1f, 0x3f, 0xdf, 0xeb, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xbf, 0xf0, 0xfe, 0x01, 0x14, 0x40, 0x3e, 0xff, 0xbf, 0xf5, 0x55, 0x57, 0xdf, 0xff,
        0xf9, 0xff, 0xff, 0xff, 0xdf, 0xf0, 0xfe, 0x01, 0x0a, 0x20, 0x3f, 0xff, 0xdf, 0xfa, 0xaa,
        0xab, 0xbf, 0xff, 0xf3, 0xff, 0xff, 0xdf, 0xbf, 0xf0, 0xde, 0x7f, 0x05, 0x10, 0x7f, 0xff,
        0xff, 0xfd, 0x55, 0x55, 0xdf, 0xff, 0xe4, 0xff, 0xff, 0xbf, 0x7f, 0xf0, 0xee, 0x7e, 0x02,
        0x88, 0x7f, 0xff, 0xff, 0xfa, 0xaa, 0xab, 0xbf, 0xff, 0xe3, 0xff, 0xbf, 0xbf, 0xbf, 0xf0,
        0xde, 0x05, 0x41, 0x54, 0x3f, 0xff, 0xff, 0xdd, 0x55, 0x55, 0xff, 0xff, 0xd7, 0xff, 0xdf,
        0x7f, 0x7f, 0xf0, 0xee, 0x06, 0xa2, 0xaa, 0x3f, 0xff, 0xff, 0xbe, 0xaa, 0xab, 0xbf, 0xff,
        0xf7, 0xff, 0xbf, 0x3f, 0xbf, 0xf0, 0xde, 0x7d, 0x55, 0x55, 0x1f, 0xfb, 0xff, 0xff, 0x55,
        0x55, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xbf, 0xff, 0xf0, 0xfe, 0x7f, 0xaa, 0xaa, 0x8f, 0xff,
        0xff, 0xba, 0xaa, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0xbf, 0xf0, 0xfe, 0x01, 0x55,
        0x55, 0x47, 0xff, 0xff, 0xf7, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
        0xfe, 0x01, 0xaa, 0xaa, 0xa1, 0xff, 0xff, 0xbf, 0xea, 0xab, 0xff, 0xff, 0xff, 0xff, 0xbf,
        0xff, 0xff, 0xf0, 0xff, 0xff, 0x55, 0x55, 0x54, 0xff, 0xff, 0x5f, 0xf5, 0x57, 0xff, 0xfd,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xda, 0xaa, 0xaa, 0xaa, 0x7f, 0xff, 0xbf, 0xfa,
        0xab, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x9d, 0x55, 0x55, 0x00, 0xff,
        0xff, 0x7f, 0xfd, 0x57, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xbf, 0xa2,
        0xa8, 0x03, 0xff, 0xfb, 0xbf, 0xfa, 0xaa, 0xbf, 0xfb, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0,
        0xff, 0x3f, 0xc0, 0x00, 0x07, 0xff, 0xff, 0x5f, 0xfd, 0x57, 0x57, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf0, 0xff, 0x3f, 0x80, 0x00, 0x0f, 0xff, 0xfb, 0xaf, 0xfe, 0xae, 0xaa, 0xfb,
        0xff, 0xbf, 0xff, 0xff, 0xff, 0xf0, 0xf6, 0x7f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0x57, 0xfd,
        0x55, 0x55, 0x77, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf0,
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_JELLLYFISH
#define LV_ATTRIBUTE_IMG_JELLLYFISH
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_JELLLYFISH uint8_t jelllyfish_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x91, 0x40, 0x05, 0x00, 0x00, 0x45, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x40, 0x01, 0x10, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x29, 0x00, 0x00, 0x18, 0x02, 0x20, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x01, 0x41, 0x65, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00, 0x05, 0x82, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x02, 0x80, 0x00, 0x00, 0x70, 0x18, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x2a, 0x00, 0x03, 0x60, 0x80, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x12, 0x1a, 0x04, 0x60, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x42, 0x20, 0x9c, 0x0b, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x02, 0x90, 0x00, 0x05, 0x3e, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x22, 0x08, 0x21, 0x7e, 0x04, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x40, 0x02, 0x5b, 0x10, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x54, 0x9f, 0x21, 0x58, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x3f, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x92, 0x7d, 0x80, 0x50, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xa5, 0xfb, 0xe4, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x3f, 0xf5, 0xf0, 0x90, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xff, 0xef, 0xe3, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xa0, 0x00, 0x00, 0x41, 0xdd, 0x9c, 0x18, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x87, 0xf8, 0x48, 0x9d, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc0, 0x01, 0x1f, 0xe5, 0x93, 0x9a, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x43, 0xbc, 0x34, 0x37, 0x12, 0x20, 0x44, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x0c, 0x13, 0xc0, 0xaf, 0x44, 0x04, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xb8, 0x00, 0x17, 0xff, 0x18, 0x90, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x25, 0xcc, 0x32, 0x02, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x82, 0x43, 0x88, 0xb9, 0xa0, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0d, 0xf4, 0x5e, 0x40, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x50, 0x60, 0xbc, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x04, 0xfb, 0x10, 0x80, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x38, 0x39, 0x38, 0x25, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x16, 0xc1, 0x20, 0x41, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x16, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xd1, 0x00, 0x39, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0xc2, 0x02, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0xc4, 0x10, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x87, 0xb0, 0x21, 0x34, 0x04, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0x06, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x3b, 0x00, 0x00, 0x10, 0xfc, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x46, 0x00, 0x03, 0x31, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xfe, 0xcf, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x95, 0x70, 0xa0, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x30, 0x08, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x43, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0xc0, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x80, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x80, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t jelllyfish = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = jelllyfish_map,
};

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SEAHORSE
#define LV_ATTRIBUTE_IMG_SEAHORSE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SEAHORSE uint8_t seahorse_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x1d, 0x54, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x9f, 0x85, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x30, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x68, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x34, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x7c, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x10, 0x00, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x34, 0x30, 0x38, 0x01, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0xd7, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x17, 0x00, 0x00, 
  0x00, 0x03, 0x10, 0x00, 0x00, 0x00, 0x73, 0x15, 0xa2, 0x00, 0x00, 0x00, 0x48, 0x00, 0x27, 0xfe, 0x00, 0x00, 
  0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0xc3, 0x8e, 0x2f, 0x00, 0x00, 0x00, 0x14, 0x21, 0x4f, 0x50, 0x00, 0x00, 
  0x00, 0x3b, 0xfe, 0x00, 0x00, 0x00, 0xf7, 0xda, 0x1c, 0xa4, 0x00, 0x00, 0x30, 0x20, 0x9c, 0x40, 0x00, 0x00, 
  0x00, 0x7f, 0xef, 0x80, 0x00, 0x00, 0xbf, 0xff, 0x7e, 0x1e, 0x00, 0x00, 0x38, 0x21, 0x78, 0x80, 0x00, 0x00, 
  0x00, 0x3f, 0x99, 0x80, 0x00, 0x01, 0xff, 0xff, 0xff, 0x9e, 0x00, 0x00, 0x3c, 0x04, 0x63, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xaf, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xfd, 0x80, 0x00, 0x0a, 0x85, 0x6f, 0x00, 0x00, 0x00, 
  0x01, 0xf9, 0xbf, 0x40, 0x00, 0x0f, 0xfe, 0xff, 0x7f, 0xfe, 0x52, 0x00, 0x0e, 0xd7, 0xbb, 0x00, 0x00, 0x00, 
  0x03, 0xf6, 0x07, 0xa0, 0x00, 0x1f, 0xdf, 0xfa, 0xff, 0xff, 0x0f, 0x00, 0x07, 0xbf, 0xf9, 0x00, 0x00, 0x00, 
  0x03, 0xa6, 0x07, 0xf0, 0x00, 0x3f, 0x5e, 0xba, 0xff, 0xff, 0xef, 0x00, 0x03, 0xfd, 0xf9, 0x80, 0x00, 0x00, 
  0x03, 0xd8, 0x03, 0xb0, 0x00, 0x3f, 0x9e, 0x38, 0x7d, 0xf7, 0xff, 0x40, 0x01, 0xff, 0xf9, 0x80, 0x00, 0x00, 
  0x03, 0xd0, 0x01, 0xc0, 0x00, 0x7f, 0x8e, 0x18, 0x58, 0xe5, 0xff, 0x20, 0x03, 0xfb, 0xff, 0xc0, 0x0f, 0x00, 
  0x07, 0x80, 0x01, 0xc0, 0x01, 0x73, 0x0e, 0x38, 0x70, 0x75, 0xff, 0xa8, 0x00, 0xc5, 0xfe, 0xbc, 0x3a, 0x00, 
  0x0f, 0xb0, 0x41, 0xc0, 0x03, 0x71, 0x8e, 0x78, 0xf0, 0x65, 0x7f, 0xff, 0x00, 0xf7, 0xf8, 0x0a, 0xe0, 0x00, 
  0x0e, 0x50, 0x63, 0xa0, 0x06, 0x73, 0x5e, 0xf8, 0x70, 0x30, 0x7b, 0xff, 0x00, 0xfd, 0x7f, 0xf0, 0x00, 0x00, 
  0x07, 0x80, 0x7f, 0xe0, 0x0c, 0xef, 0xfd, 0xfa, 0xe0, 0x70, 0x3f, 0xff, 0x00, 0x67, 0xff, 0xc0, 0x00, 0x00, 
  0x03, 0xd0, 0x7f, 0x80, 0x57, 0xef, 0x7f, 0xf7, 0xe0, 0xe0, 0x1a, 0xff, 0x80, 0x73, 0xfc, 0xc0, 0x00, 0x00, 
  0x03, 0xf8, 0x1f, 0x00, 0x6f, 0xff, 0xef, 0xff, 0xdc, 0xf0, 0x35, 0x3f, 0xc0, 0x69, 0xdc, 0xc0, 0x00, 0x00, 
  0x03, 0xf0, 0x08, 0x00, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x18, 0xbf, 0xf4, 0x3e, 0xfc, 0xc0, 0x00, 0x00, 
  0x03, 0x44, 0x00, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x14, 0x1f, 0xfc, 0x3f, 0xff, 0x40, 0x00, 0x00, 
  0x01, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0x86, 0x7f, 0xff, 0xe8, 0x18, 0x1d, 0x7e, 0x77, 0xdf, 0xe0, 0x00, 0x00, 
  0x00, 0xfd, 0x44, 0xdf, 0xfe, 0x71, 0x86, 0x18, 0xff, 0xee, 0x34, 0x1a, 0x7f, 0xf1, 0xfe, 0x50, 0x00, 0x00, 
  0x00, 0x78, 0xf7, 0xff, 0xf6, 0x3b, 0xd7, 0xfe, 0x77, 0xff, 0x54, 0x38, 0xbf, 0xfb, 0xff, 0xd4, 0x00, 0x00, 
  0x00, 0x2e, 0xff, 0xff, 0xc7, 0x48, 0x47, 0xff, 0xe1, 0xff, 0xf0, 0x38, 0x3d, 0xff, 0x79, 0xee, 0x00, 0x00, 
  0x00, 0x3f, 0xbf, 0xfe, 0xcb, 0x00, 0x03, 0xff, 0xe0, 0xff, 0xf6, 0x58, 0x18, 0xcf, 0xf1, 0x87, 0x80, 0x00, 
  0x00, 0x17, 0x9b, 0x9c, 0x70, 0x00, 0x07, 0xe7, 0xe0, 0x6f, 0xfa, 0xf8, 0x38, 0xce, 0xe3, 0x00, 0xc0, 0x00, 
  0x00, 0x03, 0xf9, 0xc6, 0xc0, 0x00, 0x07, 0xea, 0x58, 0xe1, 0xf7, 0xf8, 0x18, 0x7f, 0xf2, 0x00, 0x60, 0x00, 
  0x00, 0x01, 0xf8, 0xd6, 0x00, 0x00, 0x0e, 0x57, 0x3f, 0x60, 0x7f, 0xf1, 0x58, 0xff, 0xe6, 0x00, 0x10, 0x00, 
  0x00, 0x00, 0x3d, 0xc0, 0x00, 0x00, 0x1e, 0xa9, 0x03, 0xe0, 0x7f, 0xfa, 0xaf, 0xff, 0xce, 0x00, 0x28, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xa5, 0x00, 0xe0, 0x7f, 0xf7, 0xff, 0xfe, 0xec, 0x00, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0xa5, 0x80, 0x78, 0x3d, 0xff, 0xfb, 0xfe, 0x3a, 0x00, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x8c, 0xb5, 0x80, 0x3d, 0x78, 0x7f, 0xff, 0xfc, 0x7f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1b, 0xac, 0x80, 0x1f, 0xf8, 0x7f, 0xff, 0xfc, 0xc3, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x51, 0xb6, 0xc0, 0x01, 0xf0, 0x3f, 0xff, 0x79, 0x81, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x26, 0x60, 0x00, 0x70, 0x7e, 0xbf, 0x1f, 0x01, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x36, 0x20, 0x00, 0x37, 0xfe, 0x1e, 0x3f, 0x00, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x62, 0x30, 0x00, 0x1f, 0xfc, 0x0e, 0x7e, 0x00, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x19, 0x18, 0x00, 0x0c, 0x7d, 0xff, 0xf7, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x73, 0xac, 0x00, 0x00, 0x1f, 0x5f, 0xc3, 0x80, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x80, 0x00, 0x00, 0x0e, 0x03, 0x81, 0xc0, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xc0, 0xe0, 0x1c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x40, 0x3a, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x60, 0x0a, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t seahorse = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = seahorse_map,
};

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif



