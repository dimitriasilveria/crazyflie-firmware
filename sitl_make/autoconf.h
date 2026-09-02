#pragma once

/*
 * Compatibility header for the standalone CMake SITL build.
 *
 * Hardware builds generate autoconf.h through Kconfig. The SITL CMake build
 * supplies its configuration with target_compile_options() instead.
 */
