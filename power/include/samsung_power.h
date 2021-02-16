/*
 * Copyright (C) 2016 The CyanogenMod Project
 * Copyright (C) 2020 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAMSUNG_POWER_H
#define SAMSUNG_POWER_H

/*
 * Board specific nodes
 *
 * If your kernel exposes these controls in another place, you can either
 * symlink to the locations given here, or override this header in your
 * device tree.
 */

static const std::vector<std::string> cpuSysfsPaths = {
    "/sys/devices/system/cpu/cpu0",
    "/sys/devices/system/cpu/cpu4"
};

static const std::vector<std::string> cpuInteractivePaths = {
    "/sys/devices/system/cpu/cpu0/cpufreq/interactive",
    "/sys/devices/system/cpu/cpu4/cpufreq/interactive"
};

/* double tap to wake node */
//#define TAP_TO_WAKE_NODE "/sys/class/sec/tsp/dt2w_enable"

/* interactive default profile - trelte */
#define INTERACTIVE_DEF_L_TIMER_RATE "20000"
#define INTERACTIVE_DEF_L_TIMER_SLACK "20000"
#define INTERACTIVE_DEF_L_MIN_SAMPLE_TIME "40000"
#define INTERACTIVE_DEF_L_BOOTPULSE_DURATION "40000"
#define INTERACTIVE_DEF_L_MULTI_ENTER_LOAD "800"
#define INTERACTIVE_DEF_L_SINGLE_ENTER_LOAD "200"
#define INTERACTIVE_DEF_B_TIMER_RATE "20000"
#define INTERACTIVE_DEF_B_TIMER_SLACK "20000"
#define INTERACTIVE_DEF_B_MIN_SAMPLE_TIME "40000"
#define INTERACTIVE_DEF_B_BOOTPULSE_DURATION "40000"
#define INTERACTIVE_DEF_B_MULTI_ENTER_LOAD "360"
#define INTERACTIVE_DEF_B_MULTI_ENTER_TIME "99000"
#define INTERACTIVE_DEF_B_MULTI_EXIT_LOAD "240"
#define INTERACTIVE_DEF_B_MULTI_EXIT_TIME "299000"
#define INTERACTIVE_DEF_B_SINGLE_ENTER_LOAD "95"
#define INTERACTIVE_DEF_B_SINGLE_ENTER_TIME "199000"
#define INTERACTIVE_DEF_B_SINGLE_EXIT_LOAD "60"
#define INTERACTIVE_DEF_B_SINGLE_EXIT_TIME "99000"
#define INTERACTIVE_DEF_L_HISPEED_FREQ "900000"
#define INTERACTIVE_DEF_L_GO_HISPEED_LOAD "85"
#define INTERACTIVE_DEF_L_TARGET_LOADS "75"
#define INTERACTIVE_DEF_L_ABOVE_HISPEED_DELAY "19000"
#define INTERACTIVE_DEF_B_HISPEED_FREQ "1000000"
#define INTERACTIVE_DEF_B_GO_HISPEED_LOAD "89"
#define INTERACTIVE_DEF_B_TARGET_LOADS "80 1000000:81 1400000:87 1700000:90"
#define INTERACTIVE_DEF_B_ABOVE_HISPEED_DELAY "59000 1200000:119000 1700000:19000"

/* interactive low profile - trelte */
#define INTERACTIVE_LOW_L_HISPEED_FREQ "900000"
#define INTERACTIVE_LOW_L_GO_HISPEED_LOAD "85"
#define INTERACTIVE_LOW_L_TARGET_LOADS "75"
#define INTERACTIVE_LOW_L_ABOVE_HISPEED_DELAY "19000"
#define INTERACTIVE_LOW_L_MIN_SAMPLE_TIME "59000"
#define INTERACTIVE_LOW_B_HISPEED_FREQ "1200000"
#define INTERACTIVE_LOW_B_GO_HISPEED_LOAD "95"
#define INTERACTIVE_LOW_B_TARGET_LOADS "65 1400000:68 1700000:73"
#define INTERACTIVE_LOW_B_ABOVE_HISPEED_DELAY "19000"


#endif // SAMSUNG_POWER_H
