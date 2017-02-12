cmd_arch/arm/lib/csumipv6.o := arm-poky-linux-gnueabi-gcc  -mno-thumb-interwork -marm -fuse-ld=bfd -Wp,-MD,arch/arm/lib/.csumipv6.o.d  -nostdinc -isystem /home/ati-openrex/fsl-community-bsp-own/build/tmp/sysroots/x86_64-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.2.0/include -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include -Iarch/arm/include/generated  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include -Iinclude -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi -Iinclude/generated/uapi -include /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o arch/arm/lib/csumipv6.o /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/lib/csumipv6.S

source_arch/arm/lib/csumipv6.o := /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/lib/csumipv6.S

deps_arch/arm/lib/csumipv6.o := \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/linkage.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/stringify.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/linkage.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/ptrace.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/hwcap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/hwcap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/opcodes-virt.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \

arch/arm/lib/csumipv6.o: $(deps_arch/arm/lib/csumipv6.o)

$(deps_arch/arm/lib/csumipv6.o):
