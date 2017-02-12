cmd_arch/arm/kernel/sigreturn_codes.o := arm-poky-linux-gnueabi-gcc  -mno-thumb-interwork -marm -fuse-ld=bfd -Wp,-MD,arch/arm/kernel/.sigreturn_codes.o.d  -nostdinc -isystem /home/ati-openrex/fsl-community-bsp-own/build/tmp/sysroots/x86_64-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.2.0/include -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include -Iarch/arm/include/generated  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include -Iinclude -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi -Iinclude/generated/uapi -include /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o arch/arm/kernel/sigreturn_codes.o /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/kernel/sigreturn_codes.S

source_arch/arm/kernel/sigreturn_codes.o := /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/kernel/sigreturn_codes.S

deps_arch/arm/kernel/sigreturn_codes.o := \
    $(wildcard include/config/cpu/thumbonly.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/oabi/compat.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/unistd.h \

arch/arm/kernel/sigreturn_codes.o: $(deps_arch/arm/kernel/sigreturn_codes.o)

$(deps_arch/arm/kernel/sigreturn_codes.o):
