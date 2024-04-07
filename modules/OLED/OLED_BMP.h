/**
  ****************************(C) COPYRIGHT 2023 Daud-117****************************
  * @file       OLED_BMP.h
  * @brief      This file contain the BMP data for OLED_showBMP function
  *             本文件包含OLED_showBMP函数图片数据
  * @note       
  * @history
  *  Version    Date            Author          Modification
  *  V1.0.0     July-23-223     RM              1. done
  *
  @verbatim
  ==============================================================================

  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2023 Daud-117****************************
  */
 
#ifndef __OLED__BMP__H
#define __OLED__BMP__H

//一维数组 UNSC 标志 精确
extern unsigned char BMP_UNSC[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x60,0x10,0x28,0x44,0xD0,0x30,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x80,0xE0,0xE0,0xC0,0xC0,0xC0,0xE0,
0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF8,0xF8,0xF8,0xF8,0xF0,0xF0,0xF0,0xF8,0xD0,0xE0,
0xF0,0xF0,0xF0,0xD0,0xE8,0xF0,0xE0,0xF0,0xF0,0xE8,0x70,0x38,0x18,0x0C,0x04,0x02,
0x80,0x80,0xC0,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x38,0x06,0x02,0xC2,0xB4,0x8C,0x82,0x01,
0x00,0xE0,0x1C,0x43,0xC0,0x00,0x80,0x00,0x80,0x00,0x00,0xF8,0xF8,0x38,0x38,0x38,
0x38,0x38,0x38,0x38,0x00,0xFE,0xFE,0xBE,0xDF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,
0xF7,0xFF,0xFF,0xEF,0xF7,0xFB,0xFD,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFC,0xFC,0xFE,0xFE,0xFF,0xFB,
0xFD,0xFC,0xFC,0xFE,0xBE,0xBA,0xF2,0xFA,0xD9,0xD9,0xD1,0x90,0x90,0x80,0x80,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xC0,0xC0,0xE0,0x18,0x07,0x00,0x00,0xE0,0xFE,0xF9,0xF8,0xF8,0xF0,0xF1,
0xF1,0xE0,0xC0,0xC3,0xE6,0xED,0x3F,0xBF,0xBF,0x9F,0x00,0xDF,0xDF,0xDC,0xDC,0xDC,
0xDC,0xDC,0x9C,0xDC,0x40,0x4F,0x6F,0xEF,0xDF,0x1F,0x0F,0x01,0x01,0x01,0x01,0x41,
0xC3,0xC3,0x83,0x07,0x0F,0x0F,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xDF,0x5F,0x1F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x1F,
0x3B,0x3B,0x2B,0x2A,0x2E,0x2E,0x0E,0x16,0x14,0x14,0x14,0x24,0x28,0x28,0x08,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,
0xFE,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x3F,0x9F,0xCF,0x67,0x33,0x19,0x0E,0x07,0x00,0x00,0x00,0xE1,0xF1,0xF9,0xBD,0x9D,
0x8F,0x87,0x87,0x83,0x00,0x00,0x38,0xC4,0x1F,0xF0,0x0E,0xFC,0xFC,0xFC,0xFC,0xFE,
0xFF,0xE7,0xFF,0x7C,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3F,
0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0xF9,0xF3,0xE6,0xCC,0x98,0x70,0xE0,0x00,0x00,0x00,0xFD,0xFD,0x81,0xC1,0xF1,
0x79,0xFD,0xFD,0xF9,0x00,0x00,0x0E,0x11,0xEC,0x07,0x38,0x1F,0xDF,0x7F,0xFF,0x7F,
0x3F,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x03,0x07,0x07,0x18,0xE0,0x00,0x00,0x0F,0x7F,0x9F,0x1F,0x1F,0x0F,0x8F,
0x8F,0x07,0x83,0xC3,0x67,0xB7,0xFC,0xFD,0xFD,0xF9,0x00,0xF7,0xF7,0x77,0x73,0x71,
0x70,0x77,0xF7,0xF7,0x02,0xF2,0xF6,0xF7,0xF3,0xF8,0xF0,0x80,0x80,0x80,0x80,0x80,
0x80,0xC0,0xC0,0xE0,0xF0,0xF0,0xF8,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFB,0xFA,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF8,0xF8,0xF8,
0xD8,0xDC,0xDC,0x54,0x74,0x74,0x70,0x68,0x68,0x28,0x28,0x24,0x34,0x14,0x10,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1C,0x60,0x40,0x43,0x2D,0x31,0x41,0x80,
0x00,0x07,0x38,0xC2,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,
0x00,0x00,0x1F,0x1F,0x00,0x7F,0x7F,0x7D,0xFB,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,
0xEF,0xFF,0xFF,0xF7,0xEF,0xDF,0xBF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0xFF,0xFF,0xDF,
0xBF,0x3F,0x3F,0x7F,0x7D,0x7D,0x4F,0x5B,0x9B,0x9B,0x8B,0x09,0x09,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x06,0x08,0x14,0x22,0x03,0x0C,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x01,0x07,0x07,0x03,0x03,0x07,0x07,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x1F,0x1F,0x0F,0x1F,0x1F,0x0F,0x0B,0x07,
0x0F,0x0F,0x0F,0x0B,0x17,0x0F,0x07,0x0F,0x0F,0x17,0x0E,0x1C,0x18,0x30,0x20,0x40,
0x01,0x03,0x03,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

//一维数组 RM 标志
extern unsigned char BMP_Robo[] =
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0C,0x3C,0x7C,0xFC,0xFC,0xFC,
0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xF8,0xF8,
0xF8,0xF0,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x0F,
0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xCF,
0x8F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x3F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF0,
0xF0,0xF0,0xF0,0xF0,0xF1,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0xFC,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF8,0xF8,0xFC,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xF8,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x3F,
0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0x9F,0x1F,
0x0F,0x0F,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0x00,0x80,0x80,0x80,
0x80,0x80,0x81,0x83,0x87,0x8F,0x9F,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFC,0xF8,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x1E,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,
0x1F,0x1F,0x1F,0x1F,0x1F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x03,0x03,0x07,0x07,0x0F,0x0F,0x1F,0x1F,0x1F,0x3F,0x7F,0x7F,0xFF,0xFF,0xFF,
0xF7,0xE7,0xC7,0x87,0x07,0x07,0x07,0x07,0x06,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x80,
0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,
0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,
0x81,0x03,0x83,0x87,0x87,0x8E,0x8C,0x88,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,
0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3C,0x3D,0x0D,0x0D,0x0D,
0x1D,0x3D,0x3F,0x27,0x00,0x1E,0x3F,0x33,0x31,0x31,0x31,0x3F,0x1F,0x04,0x3D,0x3D,
0x35,0x35,0x35,0x35,0x3D,0x1F,0x03,0x0C,0x1F,0x3B,0x31,0x31,0x31,0x3B,0x1F,0x2E,
0x38,0x3E,0x07,0x07,0x3F,0x38,0x1C,0x0E,0x07,0x3F,0x3F,0x00,0x20,0x30,0x38,0x1C,
0x3E,0x37,0x33,0x3F,0x3E,0x38,0x20,0x00,0x20,0x37,0x37,0x35,0x35,0x35,0x35,0x3D,
0x1D,0x01,0x01,0x3D,0x3F,0x07,0x01,0x01,0x21,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
0x15,0x00,0x3C,0x3D,0x0D,0x0D,0x0D,0x1D,0x3D,0x3F,0x27,0x00,0x22,0x37,0x37,0x35,
0x35,0x35,0x35,0x3D,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};

//一维数组 小鸭子
extern unsigned char BMP_example[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xF8,
0xF8,0xFE,0xFF,0xFF,0xFF,0x3F,0x3F,0x0F,0xCF,0xCF,0x0F,0xCF,0xCF,0x0F,0xCF,0xFF,
0xF8,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0x80,0x80,0x00,0x83,0xC7,0xEF,0xDF,0x7F,0xFF,0x71,0xC1,0x88,0x88,0xB8,
0xB9,0xB9,0xB8,0x99,0x99,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
0x00,0x00,0x03,0x0F,0x1F,0x1E,0xFE,0xFE,0xEE,0x36,0x9B,0x4F,0xF7,0xE2,0x71,0xBF,
0x5D,0xFC,0xFB,0xE2,0x63,0x7F,0x61,0x61,0x61,0x7F,0x61,0xFF,0xFF,0x6F,0x63,0x77,
0x73,0x1F,0x1F,0x1,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0xC5,0xEA,0xBD,0xAA,0xBD,0xAE,0xAB,0xBB,0xE7,0xC4,0x07,0x04,
0xE7,0xE4,0xBF,0xAB,0xBB,0xAC,0xA8,0xB8,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
};

//二维数组 UNSC 标志 GRAM
extern unsigned char BMP_UNSC_GRAM[128][8] =
{
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0xE0,0x07,0x00,0x00,0x00},
{0x00,0x00,0x00,0xFC,0x3F,0x00,0x00,0x00},
{0x00,0x00,0x00,0xFE,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0xFF,0x01,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0xFF,0x03,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0xFF,0x07,0x00,0x00},
{0x00,0x00,0xE0,0x03,0xC0,0x07,0x00,0x00},
{0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00},
{0x00,0x00,0x07,0x00,0x00,0xE0,0x00,0x00},
{0x00,0xC0,0x00,0x00,0x00,0x00,0x03,0x00},
{0x00,0x38,0x00,0xFE,0x7F,0x00,0x1C,0x00},
{0x00,0x06,0xE0,0xFF,0xFF,0x0F,0x60,0x00},
{0x00,0x02,0xFE,0xFF,0xFF,0x7F,0x40,0x00},
{0x00,0xC2,0xF9,0xFF,0xFF,0x9F,0x43,0x00},
{0x00,0xB4,0xF8,0xFF,0xFF,0x1F,0x2D,0x00},
{0x00,0x8C,0xF8,0xFF,0xFF,0x1F,0x31,0x00},
{0x00,0x82,0xF0,0xFF,0xFF,0x0F,0x41,0x00},
{0x80,0x01,0xF1,0xFF,0xFF,0x8F,0x80,0x01},
{0x60,0x00,0xF1,0x3F,0xFC,0x8F,0x00,0x06},
{0x10,0xE0,0xE0,0x9F,0xF9,0x07,0x07,0x08},
{0x28,0x1C,0xC0,0xCF,0xF3,0x83,0x38,0x14},
{0x44,0x43,0xC3,0x67,0xE6,0xC3,0xC2,0x22},
{0xD0,0xC0,0xE6,0x33,0xCC,0x67,0x01,0x03},
{0x30,0x00,0xED,0x19,0x98,0xB7,0x00,0x0C},
{0x08,0x80,0x3F,0x0E,0x70,0xFC,0x01,0x10},
{0x04,0x00,0xBF,0x07,0xE0,0xFD,0x00,0x20},
{0x00,0x80,0xBF,0x00,0x00,0xFD,0x01,0x00},
{0x00,0x00,0x9F,0x00,0x00,0xF9,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0xF8,0xDF,0xE1,0xFD,0xF7,0x1F,0x00},
{0x00,0xF8,0xDF,0xF1,0xFD,0xF7,0x1F,0x00},
{0x00,0x38,0xDC,0xF9,0x81,0x77,0x00,0x00},
{0x00,0x38,0xDC,0xBD,0xC1,0x73,0x00,0x00},
{0x00,0x38,0xDC,0x9D,0xF1,0x71,0x00,0x00},
{0x00,0x38,0xDC,0x8F,0x79,0x70,0x00,0x00},
{0x00,0x38,0xDC,0x87,0xFD,0x77,0x00,0x00},
{0x00,0x38,0x9C,0x87,0xFD,0xF7,0x1F,0x00},
{0x00,0x38,0xDC,0x83,0xF9,0xF7,0x1F,0x00},
{0x00,0x00,0x40,0x00,0x00,0x02,0x00,0x00},
{0x00,0xFE,0x4F,0x00,0x00,0xF2,0x7F,0x00},
{0x00,0xFE,0x6F,0x38,0x0E,0xF6,0x7F,0x00},
{0x00,0xBE,0xEF,0xC4,0x11,0xF7,0x7D,0x00},
{0xC0,0xDF,0xDF,0x1F,0xEC,0xF3,0xFB,0x03},
{0x80,0xEF,0x1F,0xF0,0x07,0xF8,0xF7,0x01},
{0xE0,0xFF,0x0F,0x0E,0x38,0xF0,0xFF,0x07},
{0xE0,0xFF,0x01,0xFC,0x1F,0x80,0xFF,0x07},
{0xC0,0xFF,0x01,0xFC,0xDF,0x80,0xFF,0x03},
{0xC0,0xFF,0x01,0xFC,0x7F,0x80,0xFF,0x03},
{0xC0,0xFF,0x01,0xFC,0xFF,0x80,0xFF,0x07},
{0xE0,0xEF,0x41,0xFE,0x7F,0x80,0xF7,0x07},
{0xF0,0xF7,0xC3,0xFF,0x3F,0x80,0xEF,0x0F},
{0xF0,0xFF,0xC3,0xE7,0x1F,0xC0,0xFF,0x0F},
{0xF0,0xFF,0x83,0xFF,0x03,0xC0,0xFF,0x0F},
{0xF0,0xEF,0x07,0x7C,0x00,0xE0,0xF7,0x0F},
{0xF0,0xF7,0x0F,0x00,0x00,0xF0,0xEF,0x0F},
{0xF0,0xFB,0x0F,0x00,0x00,0xF0,0xDF,0x0F},
{0xF8,0xFD,0x1F,0x00,0x00,0xF8,0xBF,0x1F},
{0xF8,0xFE,0x3F,0x00,0x00,0xFC,0x7F,0x1F},
{0xF8,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x1F},
{0xF8,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x1F},
{0xF0,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x0F},
{0xF0,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x1F},
{0xF0,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x1F},
{0xF8,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x0F},
{0xD0,0xFF,0xFF,0x01,0x80,0xFF,0xFF,0x0B},
{0xE0,0xFF,0xFF,0x01,0x00,0xFF,0xFF,0x07},
{0xF0,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x0F},
{0xF0,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x0F},
{0xF0,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x0F},
{0xD0,0xFF,0xDF,0x00,0x00,0xFB,0xFF,0x0B},
{0xE8,0xFF,0x5F,0x00,0x00,0xFA,0xFF,0x17},
{0xF0,0xFF,0x1F,0x00,0x00,0xF8,0xFF,0x0F},
{0xE0,0xFF,0x0F,0x00,0x00,0xF0,0xFF,0x07},
{0xF0,0xFF,0x0F,0x00,0x00,0xF0,0xFF,0x0F},
{0xF0,0xFE,0x0F,0x00,0x00,0xF0,0xFF,0x0F},
{0xE8,0xFE,0x0F,0x00,0x00,0xF0,0xFF,0x17},
{0x70,0xFC,0x0F,0x00,0x00,0xF0,0xFF,0x0E},
{0x38,0xFC,0x0F,0x00,0x00,0xF0,0x7F,0x1C},
{0x18,0xFE,0x0F,0x00,0x00,0xF0,0x7F,0x18},
{0x0C,0xFE,0x1F,0x00,0x00,0xF8,0xFF,0x30},
{0x04,0xFF,0x1F,0x00,0x00,0xF8,0xFF,0x20},
{0x02,0xFB,0x1F,0x00,0x00,0xF8,0xDF,0x40},
{0x80,0xFD,0x3B,0x00,0x00,0xD8,0xBF,0x01},
{0x80,0xFC,0x3B,0x00,0x00,0xDC,0x3F,0x03},
{0xC0,0xFC,0x2B,0x00,0x00,0xDC,0x3F,0x03},
{0x40,0xFE,0x2A,0x00,0x00,0x54,0x7F,0x02},
{0x40,0xBE,0x2E,0x00,0x00,0x74,0x7D,0x02},
{0x00,0xBA,0x2E,0x00,0x00,0x74,0x7D,0x00},
{0x00,0xF2,0x0E,0x00,0x00,0x70,0x4F,0x00},
{0x00,0xFA,0x16,0x00,0x00,0x68,0x5B,0x00},
{0x00,0xD9,0x14,0x00,0x00,0x68,0x9B,0x00},
{0x00,0xD9,0x14,0x00,0x00,0x28,0x9B,0x00},
{0x00,0xD1,0x14,0x00,0x00,0x28,0x8B,0x00},
{0x00,0x90,0x24,0x00,0x00,0x24,0x09,0x00},
{0x00,0x90,0x28,0x00,0x00,0x34,0x09,0x00},
{0x00,0x80,0x28,0x00,0x00,0x14,0x01,0x00},
{0x00,0x80,0x08,0x00,0x00,0x10,0x01,0x00},
{0x00,0x80,0x08,0x00,0x00,0x10,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};

//二维数组 RM 标志 GRAM
extern unsigned char BMP_Robo_GRAM[128][8] = 
{
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x33},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x31},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x31},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x39},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x1E},
{0x04,0x00,0x00,0x00,0x00,0x1E,0x00,0x3F},
{0x0C,0x00,0x00,0x00,0xC0,0x1F,0x80,0x33},
{0x3C,0x00,0x00,0x00,0xFC,0x1F,0x80,0x31},
{0x7C,0x00,0x00,0x80,0xFF,0x1F,0x80,0x31},
{0xFC,0x01,0x00,0xF8,0xFF,0x1F,0x80,0x39},
{0xFC,0x03,0x80,0xFF,0xFF,0x1F,0x00,0x1F},
{0xFC,0x0F,0xF0,0xFF,0xFF,0x1F,0x00,0x2E},
{0xFC,0x1F,0xF0,0xFF,0xFF,0x1F,0x00,0x38},
{0xFC,0x3F,0xF0,0xFF,0xFF,0x1F,0x80,0x3E},
{0xFC,0x7F,0xF0,0xFF,0xFF,0x1F,0x80,0x07},
{0xFC,0xFF,0xF0,0xFF,0xFF,0x1F,0x80,0x07},
{0xFC,0xFF,0xF1,0xFF,0xFF,0x1F,0x00,0x3F},
{0xFC,0xFF,0xF7,0xFF,0xFF,0x0F,0x00,0x38},
{0xFC,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1C},
{0xFC,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x0E},
{0xFC,0xFF,0xFF,0xFF,0x01,0x00,0x80,0x07},
{0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x80,0x3F},
{0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x80,0x3F},
{0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00},
{0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x20},
{0xFC,0xFF,0xFF,0x1F,0x80,0x00,0x00,0x30},
{0xFC,0xEF,0xFF,0x1F,0x80,0x00,0x00,0x38},
{0xFC,0xCF,0xFF,0x1F,0x80,0x01,0x00,0x1C},
{0xFC,0x8F,0xFF,0x7F,0x80,0x01,0x00,0x3E},
{0xFC,0x0F,0xFF,0xFF,0x80,0x03,0x80,0x37},
{0xFC,0x0F,0xFE,0xFF,0x81,0x03,0x80,0x33},
{0xFC,0x0F,0xFC,0xFF,0x83,0x07,0x80,0x3F},
{0xFC,0x0F,0xF8,0xFF,0x87,0x07,0x00,0x3E},
{0xFC,0x0F,0xF0,0xFF,0x8F,0x0F,0x00,0x38},
{0xFC,0x0F,0xF0,0xFF,0x9F,0x0F,0x00,0x20},
{0xFC,0x0F,0xF0,0xFF,0xBF,0x1F,0x00,0x00},
{0xFC,0x0F,0xF0,0xFF,0xFF,0x1F,0x00,0x22},
{0xFC,0x0F,0xF0,0xFF,0xFF,0x3F,0x00,0x37},
{0xFC,0x0F,0xF0,0xFF,0xFF,0x3F,0x80,0x37},
{0xFC,0x0F,0xF0,0xFF,0xFF,0x7F,0x80,0x35},
{0xFC,0x0F,0xF8,0xFF,0xFF,0x7F,0x80,0x35},
{0xFC,0x1F,0xF8,0xDF,0xFF,0xFF,0x80,0x35},
{0xF8,0x3F,0xFC,0x9F,0xFF,0xFF,0x80,0x35},
{0xF8,0xFF,0xFF,0x1F,0xFF,0xFF,0x81,0x3D},
{0xF8,0xFF,0xFF,0x0F,0xFE,0xF7,0x81,0x1D},
{0xF0,0xFF,0xFF,0x0F,0xFC,0xE7,0x83,0x00},
{0xF0,0xFF,0xFF,0x07,0xF8,0xC7,0x03,0x01},
{0xE0,0xFF,0xFF,0x07,0xF0,0x87,0x87,0x3D},
{0xC0,0xFF,0xFF,0x03,0xE0,0x07,0x87,0x3F},
{0x80,0xFF,0xFF,0x01,0xC0,0x07,0x8E,0x07},
{0x00,0xFF,0xFF,0x00,0x80,0x07,0x8C,0x01},
{0x00,0xFC,0x3F,0x00,0x00,0x07,0x88,0x01},
{0x00,0xE0,0x07,0x00,0x00,0x06,0x80,0x21},
{0x00,0x00,0x00,0x00,0x00,0x04,0x80,0x34},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x15},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x37},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x35},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3D},
{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1C},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};

//二维数组 原神 标志 GRAM
extern unsigned char BMP_GENSHIN_GRAM[128][8] = 
{
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00},
{0x00,0x00,0x18,0x00,0x00,0x0F,0x00,0x00},
{0x00,0x00,0x18,0x00,0xC0,0x07,0x00,0x00},
{0x00,0x00,0x3C,0x00,0xF8,0x07,0x00,0x00},
{0x00,0x00,0xFC,0xFF,0xFF,0x03,0x00,0x00},
{0x00,0x00,0xFF,0xFF,0xFF,0x01,0x00,0x00},
{0x00,0xC0,0xFF,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0xC0,0xFF,0xFF,0xFF,0x03,0x00,0x00},
{0x00,0x00,0xFE,0xFF,0x9F,0x07,0x00,0x00},
{0x00,0x00,0xFC,0xFF,0xC7,0x07,0x00,0x00},
{0x00,0x00,0x1C,0x00,0xC0,0x0F,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x0F,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x0B,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x09,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xE7,0x09,0x00,0x00},
{0x00,0x00,0x18,0xFF,0xE7,0x09,0x00,0x00},
{0x00,0x00,0x18,0x33,0xE6,0x01,0x00,0x00},
{0x00,0x00,0x18,0x33,0xC6,0x01,0x00,0x00},
{0x00,0x00,0x18,0x33,0x06,0x00,0x00,0x00},
{0x00,0x00,0x58,0x33,0xFE,0x7F,0x00,0x00},
{0x00,0x00,0xF8,0x33,0xFE,0x7F,0x00,0x00},
{0x00,0x00,0xF8,0x33,0xFE,0x3F,0x00,0x00},
{0x00,0x00,0xF8,0x33,0xFE,0x1F,0x00,0x00},
{0x00,0x00,0x58,0x33,0xFE,0x0F,0x00,0x00},
{0x00,0x00,0x18,0x33,0x06,0x00,0x00,0x00},
{0x00,0x00,0x18,0x03,0xC6,0x01,0x00,0x00},
{0x00,0x00,0x18,0x03,0xE6,0x01,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x09,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x09,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x09,0x00,0x00},
{0x00,0x00,0x98,0xFF,0xEF,0x0B,0x00,0x00},
{0x00,0x00,0x18,0xFF,0xE7,0x0F,0x00,0x00},
{0x00,0x00,0x18,0x02,0xC0,0x0F,0x00,0x00},
{0x00,0x00,0x18,0x00,0xC0,0x07,0x00,0x00},
{0x00,0x00,0x18,0xFB,0xFF,0x07,0x00,0x00},
{0x00,0x00,0x18,0xFB,0xFF,0x03,0x00,0x00},
{0x00,0x00,0x18,0xFB,0xFF,0x01,0x00,0x00},
{0x00,0x00,0x1C,0xFB,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x3C,0x03,0x00,0x00,0x00,0x00},
{0x00,0x00,0x3E,0xFF,0xFF,0xFF,0x00,0x00},
{0x00,0xC0,0xFF,0xFF,0xFF,0x7F,0x00,0x00},
{0x00,0xC0,0xFF,0xFF,0xFF,0x3F,0x00,0x00},
{0x00,0x00,0x7F,0xFF,0xFF,0x1F,0x00,0x00},
{0x00,0x00,0xBC,0x0F,0x00,0x00,0x00,0x00},
{0x00,0x00,0xDC,0xEF,0x7F,0x00,0x00,0x00},
{0x00,0x00,0xD8,0xEF,0x7F,0x00,0x00,0x00},
{0x00,0x00,0x98,0xEF,0x3F,0x00,0x00,0x00},
{0x00,0x00,0x00,0xEF,0x1F,0x00,0x00,0x00},
{0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0x7F,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0x3F,0x03,0x00,0x00},
{0x00,0x00,0x18,0xFF,0x1F,0x03,0x00,0x00},
{0x00,0x00,0x18,0xE3,0x18,0x07,0x00,0x00},
{0x00,0x00,0x3C,0xE3,0x98,0x0F,0x00,0x00},
{0x00,0x00,0x3F,0xF3,0x99,0x3F,0x00,0x00},
{0x00,0xF8,0x7F,0xFB,0xDB,0xFF,0x0F,0x00},
{0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F},
{0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F},
{0x00,0xF8,0x7F,0xFB,0xDB,0xFF,0x0F,0x00},
{0x00,0x00,0x3F,0xF3,0x99,0x3F,0x00,0x00},
{0x00,0x00,0x3C,0xE3,0x98,0x0F,0x00,0x00},
{0x00,0x00,0x18,0xE3,0x18,0x07,0x00,0x00},
{0x00,0x00,0x18,0xFF,0x1F,0x03,0x00,0x00},
{0x00,0x00,0x80,0xFF,0x3F,0x03,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0x7F,0x00,0x00,0x00},
{0x00,0x00,0xC0,0xFF,0x7F,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00},
{0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
};

#endif
