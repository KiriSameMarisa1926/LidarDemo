/*
 *  RPLIDAR SDK
 *
 *  Copyright (c) 2009 - 2014 RoboPeak Team
 *  http://www.robopeak.com
 *  Copyright (c) 2014 - 2019 Shanghai Slamtec Co., Ltd.
 *  http://www.slamtec.com
 *
 */
/*
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, 
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, 
 *    this list of conditions and the following disclaimer in the documentation 
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 *以源代码和二进制形式二次开发，无论是否进行修改，在遵守以下要求时才被许可进行开发
 * 1.二次开发此源代码必须保留此版权生命、此条件列表和以下免责声明
 * 2.以二进制形式的二次开发必须在文件以及其他材料中从新复述版权声明、此条件列表和以下免责声明
 * 本软件由版权持有人和贡献者“按原样”提供，没有任何明示或暗示的保证，包括但不限于对适销性和适合特定目的的暗示保证。
   在任何情况下，版权持有人或贡献者均不对任何直接、间接、附带、特殊、惩戒性或后果性损害(包括但不限于，购买替代商品或服务;
   损失:失去使用、数据或利润;(或业务中断)，无论如何造成的，以及根据任何责任理论，
   无论是合同责任，严格责任，还是侵权行为(包括疏忽或其他)，即使被告知该等损害的可能性，也会因使用本软件而以任何方式产生。
 */

#pragma once

#include <vector>
#include "hal/types.h"
#include "rplidar_protocol.h"
#include "rplidar_cmd.h"

#include "rplidar_driver.h"

#define RPLIDAR_SDK_VERSION "2.0.0"
#define SLAMTEC_LIDAR_SDK_VERSION  SL_LIDAR_SDK_VERSION
