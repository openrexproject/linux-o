cmd_lib/rational.o := arm-poky-linux-gnueabi-gcc  -mno-thumb-interwork -marm -fuse-ld=bfd -Wp,-MD,lib/.rational.o.d  -nostdinc -isystem /home/ati-openrex/fsl-community-bsp-own/build/tmp/sysroots/x86_64-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.2.0/include -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include -Iarch/arm/include/generated  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include -Iinclude -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi -Iinclude/generated/uapi -include /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kconfig.h  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/lib -Ilib -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(rational)"  -D"KBUILD_MODNAME=KBUILD_STR(rational)" -c -o lib/.tmp_rational.o /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/lib/rational.c

source_lib/rational.o := /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/lib/rational.c

deps_lib/rational.o := \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rational.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/compiler-gcc5.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

lib/rational.o: $(deps_lib/rational.o)

$(deps_lib/rational.o):
