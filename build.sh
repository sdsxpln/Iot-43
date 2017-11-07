#!/bin/bash
export ARCH=arm
export CROSS_COMPILE=/opt/fsl-imx-x11/4.9.11-1.0.0/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-
make distclean;
make mx6qsabresd_defconfig
make u-boot.imx -j 2
