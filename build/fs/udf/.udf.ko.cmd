cmd_fs/udf/udf.ko := arm-poky-linux-gnueabi-ld.bfd   -r  -T /home/ati-openrex/fsl-community-bsp-own/build/tmp/work-shared/imx6qsabresd/kernel-source/scripts/module-common.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o