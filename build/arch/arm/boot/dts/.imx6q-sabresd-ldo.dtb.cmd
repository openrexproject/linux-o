cmd_arch/arm/boot/dts/imx6q-sabresd-ldo.dtb := arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.d.pre.tmp -nostdinc -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/include -I/home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.dts.tmp /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6q-sabresd-ldo.dts ; /home/ati-openrex/fsl-community-bsp-own/build/tmp/work/imx6qsabresd-poky-linux-gnueabi/linux-fslc-imx/3.14-1.1.x+gitAUTOINC+327d5c9063-r0/build/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6q-sabresd-ldo.dtb -b 0 -i /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.d.pre.tmp arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6q-sabresd-ldo.dtb.d

source_arch/arm/boot/dts/imx6q-sabresd-ldo.dtb := /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6q-sabresd-ldo.dts

deps_arch/arm/boot/dts/imx6q-sabresd-ldo.dtb := \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6q-sabresd.dts \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6q.dtsi \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6q-pinfunc.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6qdl.dtsi \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/skeleton.dtsi \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/imx6qdl-sabresd.dtsi \
  /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6q-sabresd-ldo.dtb: $(deps_arch/arm/boot/dts/imx6q-sabresd-ldo.dtb)

$(deps_arch/arm/boot/dts/imx6q-sabresd-ldo.dtb):