cmd_sound/usb/endpoint.o := arm-poky-linux-gnueabi-gcc  -mno-thumb-interwork -marm -fuse-ld=bfd -Wp,-MD,sound/usb/.endpoint.o.d  -nostdinc -isystem /home/ati-openrex/fsl-community-bsp-own/build/tmp/sysroots/x86_64-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.2.0/include -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include -Iarch/arm/include/generated  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include -Iinclude -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi -Iinclude/generated/uapi -include /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kconfig.h  -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb -Isound/usb -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(endpoint)"  -D"KBUILD_MODNAME=KBUILD_STR(snd_usb_audio)" -c -o sound/usb/.tmp_endpoint.o /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/endpoint.c

source_sound/usb/endpoint.o := /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/endpoint.c

deps_sound/usb/endpoint.o := \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/gfp.h \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/cma.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/typecheck.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/linkage.h \
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
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/stringify.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/linkage.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/int-ll64.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitsperlong.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/bitsperlong.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/posix_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/stddef.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/stddef.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/posix_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/posix_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/const.h \
  arch/arm/include/generated/asm/preempt.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/preempt.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/swab.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/swab.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/swab.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/swab.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/sysroots/x86_64-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/5.2.0/include/stdarg.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/bitops.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/bitops.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/ptrace.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/hwcap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/hwcap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/non-atomic.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/fls64.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/sched.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/hweight.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/arch_hweight.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/const_hweight.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/lock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/le.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/byteorder.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/byteorder/little_endian.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/byteorder/little_endian.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/byteorder/generic.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kern_levels.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/kernel.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/sysinfo.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/dynamic_debug.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/string.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/string.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/errno.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/errno.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/errno-base.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/div64.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/compiler.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/bottom_half.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/preempt_mask.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/spinlock_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/spinlock_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rwlock_types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/spinlock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/prefetch.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/hw_breakpoint.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rwlock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/atomic.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/cmpxchg-local.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/atomic-long.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/wait.h \
  arch/arm/include/generated/asm/current.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/current.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/wait.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/seqlock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/bitmap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/page-flags-layout.h \
    $(wildcard include/config/sparsemem/vmemmap.h) \
  include/generated/bounds.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/glue.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/pgtable-2level-types.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/sizes.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/memory_model.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/getorder.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/notifier.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rwsem-spinlock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/srcu.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
    $(wildcard include/config/no/hz/full/sysidle.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/completion.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rcutree.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/sysfs.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/time.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/jiffies.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/timex.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/timex.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/param.h \
  arch/arm/include/generated/asm/param.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/param.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/timex.h \
    $(wildcard include/config/arch/multiplatform.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/sched/book.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/smp.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/smp.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pfn.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/percpu.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/percpu.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/topology.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/ratelimit.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/usb.h \
    $(wildcard include/config/usb/mon.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/pm/runtime.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mod_devicetable.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/uuid.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/uuid.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/usb/ch9.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/usb/ch9.h \
    $(wildcard include/config/size.h) \
    $(wildcard include/config/att/one.h) \
    $(wildcard include/config/att/selfpower.h) \
    $(wildcard include/config/att/wakeup.h) \
    $(wildcard include/config/att/battery.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/delay.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/delay.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
    $(wildcard include/config/proc/fs.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/irqreturn.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/irqnr.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/irqnr.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/hardirq.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/vtime.h \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/virt/cpu/accounting.h) \
    $(wildcard include/config/irq/time/accounting.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/context_tracking_state.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/static_key.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/hardirq.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/irq_cpustat.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/timerfd.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rbtree.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/timerqueue.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kref.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/ioport.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kobject.h \
    $(wildcard include/config/debug/kobject/release.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/sysfs.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kernfs.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/err.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/idr.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kobject_ns.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/stat.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/stat.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/stat.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/uidgid.h \
    $(wildcard include/config/user/ns.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/highuid.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/klist.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pinctrl/devinfo.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pinctrl/consumer.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/seq_file.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pinctrl/pinctrl-state.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/device.h \
    $(wildcard include/config/dmabounce.h) \
    $(wildcard include/config/iommu/api.h) \
    $(wildcard include/config/arm/dma/use/iommu.h) \
    $(wildcard include/config/arch/omap.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pm_wakeup.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/fs.h \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kdev_t.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/kdev_t.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/dcache.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rculist.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rculist_bl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/list_bl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/bit_spinlock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/path.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/list_lru.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/radix-tree.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pid.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/capability.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/capability.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/semaphore.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/fiemap.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/shrinker.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/migrate_mode.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/percpu-rwsem.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/fs.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/limits.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/ioctl.h \
  arch/arm/include/generated/asm/ioctl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/ioctl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/ioctl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/percpu_counter.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/dqblk_xfs.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/dqblk_v1.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/dqblk_v2.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/dqblk_qtree.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/projid.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/quota.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/nfs_fs_i.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/fcntl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/fcntl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/fcntl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/fcntl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/sched.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/no/hz/common.h) \
    $(wildcard include/config/lockup/detector.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/uprobes.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/mm/owner.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/sched.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/want/page/debug/flags.h) \
    $(wildcard include/config/kmemcheck.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/auxvec.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/auxvec.h \
  arch/arm/include/generated/asm/auxvec.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/auxvec.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/page-debug-flags.h \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/page/guard.h) \
    $(wildcard include/config/page/debug/something/else.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/uprobes.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
  arch/arm/include/generated/asm/cputime.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/cputime.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/cputime_jiffies.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/sem.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/sem.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/ipc.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/ipc.h \
  arch/arm/include/generated/asm/ipcbuf.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/ipcbuf.h \
  arch/arm/include/generated/asm/sembuf.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/sembuf.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/signal.h \
    $(wildcard include/config/old/sigaction.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/signal.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/signal.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/signal.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/signal-defs.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/uapi/asm/sigcontext.h \
  arch/arm/include/generated/asm/siginfo.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/siginfo.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/siginfo.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/proportions.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/seccomp/filter.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/seccomp.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/resource.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/resource.h \
  arch/arm/include/generated/asm/resource.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/resource.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/resource.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/latencytop.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/key.h \
    $(wildcard include/config/sysctl.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/sysctl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/sysctl.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pm_runtime.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/usb/audio.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/usb/audio.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/slob.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/debug/slab.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/slub_def.h \
    $(wildcard include/config/slub/stats.h) \
    $(wildcard include/config/memcg/kmem.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/core.h \
    $(wildcard include/config/snd/dynamic/minors.h) \
    $(wildcard include/config/snd/max/cards.h) \
    $(wildcard include/config/snd/major.h) \
    $(wildcard include/config/snd/mixer/oss.h) \
    $(wildcard include/config/snd/ossemul.h) \
    $(wildcard include/config/isa/dma/api.h) \
    $(wildcard include/config/snd/debug.h) \
    $(wildcard include/config/snd/verbose/printk.h) \
    $(wildcard include/config/snd/debug/verbose.h) \
    $(wildcard include/config/gameport.h) \
    $(wildcard include/config/pci.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/pcm.h \
    $(wildcard include/config/snd/pcm/oss.h) \
    $(wildcard include/config/snd/pcm/xrun/debug.h) \
    $(wildcard include/config/snd/verbose/procfs.h) \
    $(wildcard include/config/snd/dma/sgbuf.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/alpha.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/asound.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/sound/asound.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/memalloc.h \
    $(wildcard include/config/generic/allocator.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/minors.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/poll.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/uaccess.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/poll.h \
  arch/arm/include/generated/asm/poll.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/asm-generic/poll.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/mm.h \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/hugetlbfs.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/range.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/proc-fns.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/cpu/v6k.h) \
    $(wildcard include/config/cpu/pj4b.h) \
    $(wildcard include/config/cpu/v7.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/pgtable-nopud.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/pgtable-hwdef.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/pgtable-2level-hwdef.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/tlbflush.h \
    $(wildcard include/config/smp/on/up.h) \
    $(wildcard include/config/cpu/tlb/v4wt.h) \
    $(wildcard include/config/cpu/tlb/fa.h) \
    $(wildcard include/config/cpu/tlb/v4wbi.h) \
    $(wildcard include/config/cpu/tlb/feroceon.h) \
    $(wildcard include/config/cpu/tlb/v4wb.h) \
    $(wildcard include/config/cpu/tlb/v6.h) \
    $(wildcard include/config/cpu/tlb/v7.h) \
    $(wildcard include/config/arm/errata/720789.h) \
    $(wildcard include/config/arm/errata/798181.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/include/asm/pgtable-2level.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/asm-generic/pgtable.h \
    $(wildcard include/config/have/arch/soft/dirty.h) \
    $(wildcard include/config/arch/uses/numa/prot/none.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/huge_mm.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/debug/tlbflush.h) \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/vm_event_item.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/pm_qos.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/linux/miscdevice.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/uapi/linux/major.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/include/sound/pcm_params.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/usbaudio.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/helper.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/card.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/endpoint.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/pcm.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/sound/usb/quirks.h \

sound/usb/endpoint.o: $(deps_sound/usb/endpoint.o)

$(deps_sound/usb/endpoint.o):
