# This module prints the kernel version
* use utsname() function.
* training module programming.

## Build the module
1. built-in kernel
  * copy the config in _ Konfig file to kernel Konfig file.
  * check the feature HELLO_VERSION in make menuconfig to be set * .
  * start build.
  * check the "hello_init" in the System.map file.

2. module build
  * modify the KDIR path in the Makefile to located the kernel source
  * check the feature HELLO_VERSION in make menuconfig to be set M.
  * make modules
