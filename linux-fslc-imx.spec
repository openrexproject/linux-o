Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Name: linux-fslc-imx
Version: 3.14+1.1.x+git0+327d5c9063
Release: r0
License: GPLv2
Group: base
Packager: Poky <poky@yoctoproject.org>
BuildRequires: virtual/arm-poky-linux-gnueabi-binutils
BuildRequires: lzop-native
BuildRequires: virtual/arm-poky-linux-gnueabi-gcc
BuildRequires: kmod-native
BuildRequires: bc-native
BuildRequires: depmodwrapper-cross

%description
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9

%description -n kernel
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-3.14.61-fslc+g327d5c9
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Requires: kernel-image-3.14.61-fslc+g327d5c9
Requires(post): kernel-image-3.14.61-fslc+g327d5c9
Provides: kernel-base = 3.14+1.1.x+git0+327d5c9063
Provides: kernel-3.14.61-fslc+g327d5c9

%description -n kernel-3.14.61-fslc+g327d5c9
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-vmlinux
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Provides: elf(buildid) = 54f696997bcc967e66aa53f59870532147bf5291

%description -n kernel-vmlinux
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-image-3.14.61-fslc+g327d5c9
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Provides: kernel-image = 3.14+1.1.x+git0+327d5c9063

%description -n kernel-image-3.14.61-fslc+g327d5c9
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-dev
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Suggests: kernel-module-ov5640-camera-dev
Suggests: kernel-module-ax88179-178a-dev
Suggests: kernel-module-mx6s-capture-dev
Suggests: kernel-module-g-ether-dev
Suggests: kernel-module-snd-usbmidi-lib-dev
Suggests: kernel-module-snd-hwdep-dev
Suggests: kernel-module-udf-dev
Suggests: kernel-module-usbserial-dev
Suggests: kernel-module-ftdi-sio-dev
Suggests: kernel-module-usb-f-ecm-subset-dev
Suggests: kernel-module-adv7180-tvin-dev
Suggests: kernel-module-ipu-fg-overlay-sdc-dev
Suggests: kernel-module-msdos-dev
Suggests: kernel-module-i2c-algo-pcf-dev
Suggests: kernel-module-evbug-dev
Suggests: kernel-module-mxc-dcic-dev
Suggests: kernel-module-g-mass-storage-dev
Suggests: kernel-module-ov5647-camera-mipi-dev
Suggests: kernel-module-ov5640-camera-int-dev
Suggests: kernel-module-gspca-main-dev
Suggests: kernel-module-psmouse-dev
Suggests: kernel-module-videobuf2-vmalloc-dev
Suggests: kernel-base-dev
Suggests: kernel-module-ipu-bg-overlay-sdc-dev
Suggests: kernel-module-cdc-eem-dev
Suggests: kernel-module-usb-f-acm-dev
Suggests: kernel-module-g-serial-dev
Suggests: kernel-module-ipu-csi-enc-dev
Suggests: kernel-module-crc-itu-t-dev
Suggests: kernel-module-net1080-dev
Suggests: kernel-module-crc7-dev
Suggests: kernel-module-usbnet-dev
Suggests: kernel-module-crc-ccitt-dev
Suggests: kernel-module-asix-dev
Suggests: kernel-module-v4l2-int-device-dev
Suggests: kernel-image-dev
Suggests: kernel-module-usb-f-fs-dev
Suggests: kernel-module-pegasus-dev
Suggests: kernel-module-ov5640-camera-mipi-int-dev
Suggests: kernel-module-option-dev
Suggests: kernel-module-usb-f-eem-dev
Suggests: kernel-module-i2c-algo-pca-dev
Suggests: kernel-module-libcrc32c-dev
Suggests: kernel-module-gadgetfs-dev
Suggests: kernel-module-cdc-ncm-dev
Suggests: kernel-module-cdc-acm-dev
Suggests: kernel-module-serport-dev
Suggests: kernel-module-ipu-still-dev
Suggests: kernel-module-mxc-vadc-dev
Suggests: kernel-module-u-serial-dev
Suggests: kernel-module-g-ncm-dev
Suggests: kernel-module-rtl8150-dev
Suggests: kernel-module-mxc-v4l2-capture-dev
Suggests: kernel-module-cdc-ether-dev
Suggests: kernel-module-mxc-mipi-csi-dev
Suggests: kernel-module-configfs-dev
Suggests: kernel-module-ov5640-camera-mipi-dev
Suggests: kernel-module-usb-f-ncm-dev
Suggests: kernel-module-nls-iso8859-15-dev
Suggests: kernel-module-uvcvideo-dev
Suggests: kernel-module-bcmdhd-dev
Suggests: kernel-module-u-ether-dev
Suggests: kernel-module-usb-f-ecm-dev
Suggests: kernel-module-r8152-dev
Suggests: kernel-module-binfmt-misc-dev
Suggests: kernel-module-snd-usb-audio-dev
Suggests: kernel-module-cdc-subset-dev
Suggests: kernel-module-zaurus-dev
Suggests: kernel-module-usb-f-mass-storage-dev
Suggests: kernel-module-libcomposite-dev
Suggests: kernel-module-tcrypt-dev
Suggests: kernel-module-isofs-dev
Suggests: kernel-module-ov5642-camera-dev
Suggests: kernel-module-usb-f-rndis-dev
Suggests: kernel-module-usb-f-ss-lb-dev
Suggests: kernel-module-usb-f-obex-dev
Suggests: kernel-module-usb-wwan-dev
Suggests: kernel-module-g-zero-dev
Suggests: kernel-module-ipu-prp-enc-dev
Suggests: kernel-module-snd-rawmidi-dev
Suggests: kernel-module-usb-f-serial-dev
Suggests: kernel-3.14.61-fslc+g327d5c9-dev

%description -n kernel-dev
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-modules
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base
Requires: kernel-module-ov5640-camera
Requires: kernel-module-cdc-ether
Requires: kernel-module-asix
Requires: kernel-module-snd-usb-audio
Requires: kernel-module-usb-f-ss-lb
Requires: kernel-module-snd-hwdep
Requires: kernel-module-g-ether
Requires: kernel-module-usb-f-ecm
Requires: kernel-module-uvcvideo
Requires: kernel-module-videobuf2-vmalloc
Requires: kernel-module-usb-f-acm
Requires: kernel-module-cdc-subset
Requires: kernel-module-bcmdhd
Requires: kernel-module-tcrypt
Requires: kernel-module-usb-f-obex
Requires: kernel-module-net1080
Requires: kernel-module-usb-f-serial
Requires: kernel-module-cdc-acm
Requires: kernel-module-ov5640-camera-mipi
Requires: kernel-module-adv7180-tvin
Requires: kernel-module-ov5640-camera-int
Requires: kernel-module-mxc-vadc
Requires: kernel-module-g-zero
Requires: kernel-module-ov5647-camera-mipi
Requires: kernel-module-g-mass-storage
Requires: kernel-module-configfs
Requires: kernel-module-usbnet
Requires: kernel-module-nls-iso8859-15
Requires: kernel-module-ftdi-sio
Requires: kernel-module-libcrc32c
Requires: kernel-module-option
Requires: kernel-module-ov5640-camera-mipi-int
Requires: kernel-module-crc-ccitt
Requires: kernel-module-r8152
Requires: kernel-module-usb-f-eem
Requires: kernel-module-ipu-still
Requires: kernel-module-psmouse
Requires: kernel-module-usb-f-mass-storage
Requires: kernel-module-gspca-main
Requires: kernel-module-mxc-dcic
Requires: kernel-module-zaurus
Requires: kernel-module-i2c-algo-pca
Requires: kernel-module-serport
Requires: kernel-module-usb-f-ncm
Requires: kernel-module-usb-f-fs
Requires: kernel-module-mxc-v4l2-capture
Requires: kernel-module-libcomposite
Requires: kernel-module-v4l2-int-device
Requires: kernel-module-mxc-mipi-csi
Requires: kernel-module-ov5642-camera
Requires: kernel-module-u-serial
Requires: kernel-module-gadgetfs
Requires: kernel-module-pegasus
Requires: kernel-module-ipu-bg-overlay-sdc
Requires: kernel-module-i2c-algo-pcf
Requires: kernel-module-snd-rawmidi
Requires: kernel-module-usbserial
Requires: kernel-module-ax88179-178a
Requires: kernel-module-msdos
Requires: kernel-module-snd-usbmidi-lib
Requires: kernel-module-ipu-prp-enc
Requires: kernel-module-rtl8150
Requires: kernel-module-g-ncm
Requires: kernel-module-usb-wwan
Requires: kernel-module-u-ether
Requires: kernel-module-evbug
Requires: kernel-module-usb-f-ecm-subset
Requires: kernel-module-ipu-csi-enc
Requires: kernel-module-isofs
Requires: kernel-module-cdc-ncm
Requires: kernel-module-ipu-fg-overlay-sdc
Requires: kernel-module-udf
Requires: kernel-module-crc7
Requires: kernel-module-crc-itu-t
Requires: kernel-module-usb-f-rndis
Requires: kernel-module-mx6s-capture
Requires: kernel-module-cdc-eem
Requires: kernel-module-binfmt-misc
Requires: kernel-module-g-serial

%description -n kernel-modules
Kernel modules meta package

%package -n kernel-devicetree
Summary: FSL Community BSP i.MX6 Linux kernel with backported features and fixes
Group: base

%description -n kernel-devicetree
Linux kernel based on Freescale 3.14.52-1.1.0 GA release, used by FSL
Community BSP in order to provide support for i.MX6 based platforms and
include official Linux kernel stable updates, backported features and fixes
coming from the vendors, kernel community or FSL Community itself.

%package -n kernel-module-tcrypt
Summary: tcrypt kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-tcrypt
tcrypt kernel module; Quick & dirty crypto testing module

%package -n kernel-module-i2c-algo-pca
Summary: i2c-algo-pca kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-i2c-algo-pca
i2c-algo-pca kernel module; I2C-Bus PCA9564/PCA9665 algorithm

%package -n kernel-module-i2c-algo-pcf
Summary: i2c-algo-pcf kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-i2c-algo-pcf
i2c-algo-pcf kernel module; I2C-Bus PCF8584 algorithm

%package -n kernel-module-evbug
Summary: evbug kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-evbug
evbug kernel module; Input driver event debug module

%package -n kernel-module-psmouse
Summary: psmouse kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-psmouse
psmouse kernel module; PS/2 mouse driver

%package -n kernel-module-serport
Summary: serport kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-serport
serport kernel module; Input device TTY line discipline

%package -n kernel-module-adv7180-tvin
Summary: adv7180-tvin kernel module
Group: base
Requires: kernel-module-v4l2-int-device
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-adv7180-tvin
adv7180-tvin kernel module; Anolog Device ADV7180 video decoder driver

%package -n kernel-module-ipu-bg-overlay-sdc
Summary: ipu-bg-overlay-sdc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ipu-bg-overlay-sdc
ipu-bg-overlay-sdc kernel module; IPU PRP VF SDC Backgroud Driver

%package -n kernel-module-ipu-csi-enc
Summary: ipu-csi-enc kernel module
Group: base
Requires: kernel-module-v4l2-int-device
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ipu-csi-enc
ipu-csi-enc kernel module; CSI ENC Driver

%package -n kernel-module-ipu-fg-overlay-sdc
Summary: ipu-fg-overlay-sdc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ipu-fg-overlay-sdc
ipu-fg-overlay-sdc kernel module; IPU PRP VF SDC Driver

%package -n kernel-module-ipu-prp-enc
Summary: ipu-prp-enc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ipu-prp-enc
ipu-prp-enc kernel module; IPU PRP ENC Driver

%package -n kernel-module-ipu-still
Summary: ipu-still kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ipu-still
ipu-still kernel module; IPU PRP STILL IMAGE Driver

%package -n kernel-module-mxc-v4l2-capture
Summary: mxc-v4l2-capture kernel module
Group: base
Requires: kernel-module-ipu-prp-enc
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-ipu-fg-overlay-sdc
Requires: kernel-module-ipu-csi-enc
Requires: kernel-module-ipu-bg-overlay-sdc
Requires: kernel-module-v4l2-int-device
Requires: kernel-module-ipu-still
Requires(post): kernel-module-ipu-prp-enc
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-ipu-fg-overlay-sdc
Requires(post): kernel-module-ipu-csi-enc
Requires(post): kernel-module-ipu-bg-overlay-sdc
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-module-ipu-still
Requires(postun): kernel-module-ipu-prp-enc
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-ipu-fg-overlay-sdc
Requires(postun): kernel-module-ipu-csi-enc
Requires(postun): kernel-module-ipu-bg-overlay-sdc
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-module-ipu-still

%description -n kernel-module-mxc-v4l2-capture
mxc-v4l2-capture kernel module; V4L2 capture driver for Mxc based cameras

%package -n kernel-module-ov5640-camera-int
Summary: ov5640-camera-int kernel module
Group: base
Requires: kernel-module-v4l2-int-device
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5640-camera-int
ov5640-camera-int kernel module; OV5640 Camera Driver

%package -n kernel-module-ov5640-camera-mipi-int
Summary: ov5640-camera-mipi-int kernel module
Group: base
Requires: kernel-module-v4l2-int-device
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5640-camera-mipi-int
ov5640-camera-mipi-int kernel module; OV5640 MIPI Camera Driver

%package -n kernel-module-ov5642-camera
Summary: ov5642-camera kernel module
Group: base
Requires: kernel-module-v4l2-int-device
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-v4l2-int-device
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-v4l2-int-device
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5642-camera
ov5642-camera kernel module; OV5642 Camera Driver

%package -n kernel-module-v4l2-int-device
Summary: v4l2-int-device kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-v4l2-int-device
v4l2-int-device kernel module

%package -n kernel-module-mx6s-capture
Summary: mx6s-capture kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-mx6s-capture
mx6s-capture kernel module; i.MX6Sx SoC Camera Host driver

%package -n kernel-module-mxc-mipi-csi
Summary: mxc-mipi-csi kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-mxc-mipi-csi
mxc-mipi-csi kernel module; Freescale MIPI-CSI2 receiver driver

%package -n kernel-module-mxc-vadc
Summary: mxc-vadc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-mxc-vadc
mxc-vadc kernel module; fsl VADC/VDEC driver

%package -n kernel-module-ov5640-camera
Summary: ov5640-camera kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5640-camera
ov5640-camera kernel module; OV5640 Camera Driver

%package -n kernel-module-ov5640-camera-mipi
Summary: ov5640-camera-mipi kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5640-camera-mipi
ov5640-camera-mipi kernel module; OV5640 MIPI Camera Driver

%package -n kernel-module-ov5647-camera-mipi
Summary: ov5647-camera-mipi kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ov5647-camera-mipi
ov5647-camera-mipi kernel module; OV5647 MIPI Camera Driver

%package -n kernel-module-gspca-main
Summary: gspca-main kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-gspca-main
gspca-main kernel module; GSPCA USB Camera Driver

%package -n kernel-module-uvcvideo
Summary: uvcvideo kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-videobuf2-vmalloc
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-videobuf2-vmalloc
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-videobuf2-vmalloc

%description -n kernel-module-uvcvideo
uvcvideo kernel module; USB Video Class driver

%package -n kernel-module-videobuf2-vmalloc
Summary: videobuf2-vmalloc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-videobuf2-vmalloc
videobuf2-vmalloc kernel module; vmalloc memory handling routines for
videobuf2

%package -n kernel-module-asix
Summary: asix kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-asix
asix kernel module; ASIX AX8817X based USB 2.0 Ethernet Devices

%package -n kernel-module-ax88179-178a
Summary: ax88179-178a kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-ax88179-178a
ax88179-178a kernel module; ASIX AX88179/178A based USB 3.0/2.0 Gigabit
Ethernet Devices

%package -n kernel-module-cdc-eem
Summary: cdc-eem kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-cdc-eem
cdc-eem kernel module; USB CDC EEM

%package -n kernel-module-cdc-ether
Summary: cdc-ether kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-cdc-ether
cdc-ether kernel module; USB CDC Ethernet devices

%package -n kernel-module-cdc-ncm
Summary: cdc-ncm kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-cdc-ncm
cdc-ncm kernel module; USB CDC NCM host driver

%package -n kernel-module-cdc-subset
Summary: cdc-subset kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-cdc-subset
cdc-subset kernel module; Simple 'CDC Subset' USB networking links

%package -n kernel-module-net1080
Summary: net1080 kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-net1080
net1080 kernel module; NetChip 1080 based USB Host-to-Host Links

%package -n kernel-module-pegasus
Summary: pegasus kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-pegasus
pegasus kernel module; Pegasus/Pegasus II USB Ethernet driver

%package -n kernel-module-r8152
Summary: r8152 kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-r8152
r8152 kernel module; Realtek RTL8152/RTL8153 Based USB Ethernet Adapters

%package -n kernel-module-rtl8150
Summary: rtl8150 kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-rtl8150
rtl8150 kernel module; rtl8150 based usb-ethernet driver

%package -n kernel-module-usbnet
Summary: usbnet kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-usbnet
usbnet kernel module; USB network driver framework

%package -n kernel-module-zaurus
Summary: zaurus kernel module
Group: base
Requires: kernel-module-usbnet
Requires: kernel-module-cdc-ether
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbnet
Requires(post): kernel-module-cdc-ether
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbnet
Requires(postun): kernel-module-cdc-ether
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-zaurus
zaurus kernel module; Sharp Zaurus PDA, and compatible products

%package -n kernel-module-bcmdhd
Summary: bcmdhd kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-bcmdhd
bcmdhd kernel module

%package -n kernel-module-cdc-acm
Summary: cdc-acm kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-cdc-acm
cdc-acm kernel module; USB Abstract Control Model driver for USB modems and
ISDN adapters

%package -n kernel-module-g-ether
Summary: g-ether kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-usb-f-rndis
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usb-f-rndis
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usb-f-rndis
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-g-ether
g-ether kernel module; RNDIS/Ethernet Gadget

%package -n kernel-module-g-mass-storage
Summary: g-mass-storage kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires: kernel-module-usb-f-mass-storage
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(post): kernel-module-usb-f-mass-storage
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite
Requires(postun): kernel-module-usb-f-mass-storage

%description -n kernel-module-g-mass-storage
g-mass-storage kernel module; Mass Storage Gadget

%package -n kernel-module-g-ncm
Summary: g-ncm kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-g-ncm
g-ncm kernel module; NCM Gadget

%package -n kernel-module-g-serial
Summary: g-serial kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-g-serial
g-serial kernel module; Gadget Serial v2.4

%package -n kernel-module-g-zero
Summary: g-zero kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-g-zero
g-zero kernel module

%package -n kernel-module-gadgetfs
Summary: gadgetfs kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-gadgetfs
gadgetfs kernel module; USB Gadget filesystem

%package -n kernel-module-libcomposite
Summary: libcomposite kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-libcomposite
libcomposite kernel module

%package -n kernel-module-u-ether
Summary: u-ether kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-u-ether
u-ether kernel module

%package -n kernel-module-u-serial
Summary: u-serial kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-u-serial
u-serial kernel module

%package -n kernel-module-usb-f-acm
Summary: usb-f-acm kernel module
Group: base
Requires: kernel-module-u-serial
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-serial
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-serial
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-acm
usb-f-acm kernel module

%package -n kernel-module-usb-f-ecm
Summary: usb-f-ecm kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-ecm
usb-f-ecm kernel module

%package -n kernel-module-usb-f-ecm-subset
Summary: usb-f-ecm-subset kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-ecm-subset
usb-f-ecm-subset kernel module

%package -n kernel-module-usb-f-eem
Summary: usb-f-eem kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-eem
usb-f-eem kernel module

%package -n kernel-module-usb-f-fs
Summary: usb-f-fs kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-fs
usb-f-fs kernel module

%package -n kernel-module-usb-f-mass-storage
Summary: usb-f-mass-storage kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-mass-storage
usb-f-mass-storage kernel module

%package -n kernel-module-usb-f-ncm
Summary: usb-f-ncm kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-ncm
usb-f-ncm kernel module

%package -n kernel-module-usb-f-obex
Summary: usb-f-obex kernel module
Group: base
Requires: kernel-module-u-serial
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-serial
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-serial
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-obex
usb-f-obex kernel module

%package -n kernel-module-usb-f-rndis
Summary: usb-f-rndis kernel module
Group: base
Requires: kernel-module-u-ether
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-ether
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-ether
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-rndis
usb-f-rndis kernel module

%package -n kernel-module-usb-f-serial
Summary: usb-f-serial kernel module
Group: base
Requires: kernel-module-u-serial
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-u-serial
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-u-serial
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-serial
usb-f-serial kernel module

%package -n kernel-module-usb-f-ss-lb
Summary: usb-f-ss-lb kernel module
Group: base
Requires: kernel-module-configfs
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-libcomposite
Requires(post): kernel-module-configfs
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-libcomposite
Requires(postun): kernel-module-configfs
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-libcomposite

%description -n kernel-module-usb-f-ss-lb
usb-f-ss-lb kernel module

%package -n kernel-module-ftdi-sio
Summary: ftdi-sio kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-usbserial
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbserial
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbserial

%description -n kernel-module-ftdi-sio
ftdi-sio kernel module; USB FTDI Serial Converters Driver

%package -n kernel-module-option
Summary: option kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-usbserial
Requires: kernel-module-usb-wwan
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbserial
Requires(post): kernel-module-usb-wwan
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbserial
Requires(postun): kernel-module-usb-wwan

%description -n kernel-module-option
option kernel module; USB Driver for GSM modems

%package -n kernel-module-usb-wwan
Summary: usb-wwan kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-usbserial
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-usbserial
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-usbserial

%description -n kernel-module-usb-wwan
usb-wwan kernel module; USB Driver for GSM modems

%package -n kernel-module-usbserial
Summary: usbserial kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-usbserial
usbserial kernel module; USB Serial Driver core

%package -n kernel-module-mxc-dcic
Summary: mxc-dcic kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-mxc-dcic
mxc-dcic kernel module; MXC DCIC driver

%package -n kernel-module-binfmt-misc
Summary: binfmt-misc kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-binfmt-misc
binfmt-misc kernel module

%package -n kernel-module-configfs
Summary: configfs kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-configfs
configfs kernel module; Simple RAM filesystem for user driven kernel
subsystem configuration.

%package -n kernel-module-msdos
Summary: msdos kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-msdos
msdos kernel module; MS-DOS filesystem support

%package -n kernel-module-isofs
Summary: isofs kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-isofs
isofs kernel module

%package -n kernel-module-nls-iso8859-15
Summary: nls-iso8859-15 kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-nls-iso8859-15
nls-iso8859-15 kernel module

%package -n kernel-module-udf
Summary: udf kernel module
Group: base
Requires: kernel-module-crc-itu-t
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-crc-itu-t
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-crc-itu-t
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-udf
udf kernel module; Universal Disk Format Filesystem

%package -n kernel-module-crc-ccitt
Summary: crc-ccitt kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-crc-ccitt
crc-ccitt kernel module; CRC-CCITT calculations

%package -n kernel-module-crc-itu-t
Summary: crc-itu-t kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-crc-itu-t
crc-itu-t kernel module; CRC ITU-T V.41 calculations

%package -n kernel-module-crc7
Summary: crc7 kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-crc7
crc7 kernel module; CRC7 calculations

%package -n kernel-module-libcrc32c
Summary: libcrc32c kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-libcrc32c
libcrc32c kernel module; CRC32c (Castagnoli) calculations

%package -n kernel-module-snd-hwdep
Summary: snd-hwdep kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-snd-hwdep
snd-hwdep kernel module; Hardware dependent layer

%package -n kernel-module-snd-rawmidi
Summary: snd-rawmidi kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-3.14.61-fslc+g327d5c9

%description -n kernel-module-snd-rawmidi
snd-rawmidi kernel module; Midlevel RawMidi code for ALSA.

%package -n kernel-module-snd-usb-audio
Summary: snd-usb-audio kernel module
Group: base
Requires: kernel-module-snd-hwdep
Requires: kernel-module-snd-usbmidi-lib
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-snd-rawmidi
Requires(post): kernel-module-snd-hwdep
Requires(post): kernel-module-snd-usbmidi-lib
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-snd-rawmidi
Requires(postun): kernel-module-snd-hwdep
Requires(postun): kernel-module-snd-usbmidi-lib
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-snd-rawmidi

%description -n kernel-module-snd-usb-audio
snd-usb-audio kernel module; USB Audio

%package -n kernel-module-snd-usbmidi-lib
Summary: snd-usbmidi-lib kernel module
Group: base
Requires: kernel-3.14.61-fslc+g327d5c9
Requires: kernel-module-snd-rawmidi
Requires(post): kernel-3.14.61-fslc+g327d5c9
Requires(post): kernel-module-snd-rawmidi
Requires(postun): kernel-3.14.61-fslc+g327d5c9
Requires(postun): kernel-module-snd-rawmidi

%description -n kernel-module-snd-usbmidi-lib
snd-usbmidi-lib kernel module; USB Audio/MIDI helper module

%post -n kernel-3.14.61-fslc+g327d5c9
# kernel-3.14.61-fslc+g327d5c9 - postinst
	if [ ! -e "$D/lib/modules/3.14.61-fslc+g327d5c9" ]; then
		mkdir -p $D/lib/modules/3.14.61-fslc+g327d5c9
	fi
	if [ -n "$D" ]; then
		depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
	else
		depmod -a 3.14.61-fslc+g327d5c9
	fi


%post -n kernel-image-3.14.61-fslc+g327d5c9
# kernel-image-3.14.61-fslc+g327d5c9 - postinst
	update-alternatives --install /boot/zImage zImage /boot/zImage-3.14.61-fslc+g327d5c9 31414 || true


%postun -n kernel-image-3.14.61-fslc+g327d5c9
# kernel-image-3.14.61-fslc+g327d5c9 - postrm
if [ "$1" = "0" ] ; then
update-alternatives --remove zImage zImage-3.14.61-fslc+g327d5c9 || true
fi

%post -n kernel-devicetree
# kernel-devicetree - postinst
	cd /boot
	for DTB_FILE in imx6q-sabresd.dtb imx6q-sabresd-ldo.dtb imx6q-sabresd-hdcp.dtb imx6q-sabresd-enetirq.dtb imx6q-sabresd-btwifi.dtb
	do
		DTB_BASE_NAME=`basename ${DTB_FILE} | awk -F "." '{print $1}'`
		DTB_SYMLINK_NAME=`echo zImage-imx6qsabresd | sed "s/imx6qsabresd/${DTB_BASE_NAME}/g"`
		update-alternatives --install /boot/${DTB_BASE_NAME}.dtb ${DTB_BASE_NAME}.dtb devicetree-${DTB_SYMLINK_NAME}.dtb 31414 || true
	done


%postun -n kernel-devicetree
# kernel-devicetree - postrm
if [ "$1" = "0" ] ; then
cd /boot
	for DTB_FILE in imx6q-sabresd.dtb imx6q-sabresd-ldo.dtb imx6q-sabresd-hdcp.dtb imx6q-sabresd-enetirq.dtb imx6q-sabresd-btwifi.dtb
	do
		DTB_BASE_NAME=`basename ${DTB_FILE} | awk -F "." '{print $1}'`
		DTB_SYMLINK_NAME=`echo zImage-imx6qsabresd | sed "s/imx6qsabresd/${DTB_BASE_NAME}/g"`
		update-alternatives --remove ${DTB_BASE_NAME}.dtb devicetree-${DTB_SYMLINK_NAME}.dtb 31414 || true
	done
fi

%post -n kernel-module-tcrypt
# kernel-module-tcrypt - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-tcrypt
# kernel-module-tcrypt - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-i2c-algo-pca
# kernel-module-i2c-algo-pca - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-i2c-algo-pca
# kernel-module-i2c-algo-pca - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-i2c-algo-pcf
# kernel-module-i2c-algo-pcf - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-i2c-algo-pcf
# kernel-module-i2c-algo-pcf - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-evbug
# kernel-module-evbug - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-evbug
# kernel-module-evbug - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-psmouse
# kernel-module-psmouse - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-psmouse
# kernel-module-psmouse - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-serport
# kernel-module-serport - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-serport
# kernel-module-serport - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-adv7180-tvin
# kernel-module-adv7180-tvin - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-adv7180-tvin
# kernel-module-adv7180-tvin - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ipu-bg-overlay-sdc
# kernel-module-ipu-bg-overlay-sdc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ipu-bg-overlay-sdc
# kernel-module-ipu-bg-overlay-sdc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ipu-csi-enc
# kernel-module-ipu-csi-enc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ipu-csi-enc
# kernel-module-ipu-csi-enc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ipu-fg-overlay-sdc
# kernel-module-ipu-fg-overlay-sdc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ipu-fg-overlay-sdc
# kernel-module-ipu-fg-overlay-sdc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ipu-prp-enc
# kernel-module-ipu-prp-enc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ipu-prp-enc
# kernel-module-ipu-prp-enc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ipu-still
# kernel-module-ipu-still - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ipu-still
# kernel-module-ipu-still - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-mxc-v4l2-capture
# kernel-module-mxc-v4l2-capture - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-mxc-v4l2-capture
# kernel-module-mxc-v4l2-capture - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5640-camera-int
# kernel-module-ov5640-camera-int - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5640-camera-int
# kernel-module-ov5640-camera-int - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5640-camera-mipi-int
# kernel-module-ov5640-camera-mipi-int - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5640-camera-mipi-int
# kernel-module-ov5640-camera-mipi-int - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5642-camera
# kernel-module-ov5642-camera - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5642-camera
# kernel-module-ov5642-camera - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-v4l2-int-device
# kernel-module-v4l2-int-device - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-v4l2-int-device
# kernel-module-v4l2-int-device - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-mx6s-capture
# kernel-module-mx6s-capture - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-mx6s-capture
# kernel-module-mx6s-capture - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-mxc-mipi-csi
# kernel-module-mxc-mipi-csi - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-mxc-mipi-csi
# kernel-module-mxc-mipi-csi - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-mxc-vadc
# kernel-module-mxc-vadc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-mxc-vadc
# kernel-module-mxc-vadc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5640-camera
# kernel-module-ov5640-camera - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5640-camera
# kernel-module-ov5640-camera - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5640-camera-mipi
# kernel-module-ov5640-camera-mipi - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5640-camera-mipi
# kernel-module-ov5640-camera-mipi - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ov5647-camera-mipi
# kernel-module-ov5647-camera-mipi - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ov5647-camera-mipi
# kernel-module-ov5647-camera-mipi - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-gspca-main
# kernel-module-gspca-main - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-gspca-main
# kernel-module-gspca-main - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-uvcvideo
# kernel-module-uvcvideo - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-uvcvideo
# kernel-module-uvcvideo - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-videobuf2-vmalloc
# kernel-module-videobuf2-vmalloc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-videobuf2-vmalloc
# kernel-module-videobuf2-vmalloc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-asix
# kernel-module-asix - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-asix
# kernel-module-asix - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ax88179-178a
# kernel-module-ax88179-178a - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ax88179-178a
# kernel-module-ax88179-178a - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-cdc-eem
# kernel-module-cdc-eem - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-cdc-eem
# kernel-module-cdc-eem - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-cdc-ether
# kernel-module-cdc-ether - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-cdc-ether
# kernel-module-cdc-ether - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-cdc-ncm
# kernel-module-cdc-ncm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-cdc-ncm
# kernel-module-cdc-ncm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-cdc-subset
# kernel-module-cdc-subset - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-cdc-subset
# kernel-module-cdc-subset - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-net1080
# kernel-module-net1080 - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-net1080
# kernel-module-net1080 - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-pegasus
# kernel-module-pegasus - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-pegasus
# kernel-module-pegasus - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-r8152
# kernel-module-r8152 - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-r8152
# kernel-module-r8152 - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-rtl8150
# kernel-module-rtl8150 - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-rtl8150
# kernel-module-rtl8150 - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usbnet
# kernel-module-usbnet - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usbnet
# kernel-module-usbnet - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-zaurus
# kernel-module-zaurus - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-zaurus
# kernel-module-zaurus - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-bcmdhd
# kernel-module-bcmdhd - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-bcmdhd
# kernel-module-bcmdhd - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-cdc-acm
# kernel-module-cdc-acm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-cdc-acm
# kernel-module-cdc-acm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-g-ether
# kernel-module-g-ether - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-g-ether
# kernel-module-g-ether - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-g-mass-storage
# kernel-module-g-mass-storage - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-g-mass-storage
# kernel-module-g-mass-storage - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-g-ncm
# kernel-module-g-ncm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-g-ncm
# kernel-module-g-ncm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-g-serial
# kernel-module-g-serial - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-g-serial
# kernel-module-g-serial - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-g-zero
# kernel-module-g-zero - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-g-zero
# kernel-module-g-zero - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-gadgetfs
# kernel-module-gadgetfs - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-gadgetfs
# kernel-module-gadgetfs - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-libcomposite
# kernel-module-libcomposite - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-libcomposite
# kernel-module-libcomposite - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-u-ether
# kernel-module-u-ether - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-u-ether
# kernel-module-u-ether - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-u-serial
# kernel-module-u-serial - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-u-serial
# kernel-module-u-serial - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-acm
# kernel-module-usb-f-acm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-acm
# kernel-module-usb-f-acm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-ecm
# kernel-module-usb-f-ecm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-ecm
# kernel-module-usb-f-ecm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-ecm-subset
# kernel-module-usb-f-ecm-subset - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-ecm-subset
# kernel-module-usb-f-ecm-subset - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-eem
# kernel-module-usb-f-eem - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-eem
# kernel-module-usb-f-eem - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-fs
# kernel-module-usb-f-fs - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-fs
# kernel-module-usb-f-fs - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-mass-storage
# kernel-module-usb-f-mass-storage - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-mass-storage
# kernel-module-usb-f-mass-storage - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-ncm
# kernel-module-usb-f-ncm - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-ncm
# kernel-module-usb-f-ncm - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-obex
# kernel-module-usb-f-obex - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-obex
# kernel-module-usb-f-obex - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-rndis
# kernel-module-usb-f-rndis - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-rndis
# kernel-module-usb-f-rndis - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-serial
# kernel-module-usb-f-serial - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-serial
# kernel-module-usb-f-serial - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-f-ss-lb
# kernel-module-usb-f-ss-lb - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-f-ss-lb
# kernel-module-usb-f-ss-lb - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-ftdi-sio
# kernel-module-ftdi-sio - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-ftdi-sio
# kernel-module-ftdi-sio - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-option
# kernel-module-option - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-option
# kernel-module-option - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usb-wwan
# kernel-module-usb-wwan - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usb-wwan
# kernel-module-usb-wwan - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-usbserial
# kernel-module-usbserial - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-usbserial
# kernel-module-usbserial - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-mxc-dcic
# kernel-module-mxc-dcic - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-mxc-dcic
# kernel-module-mxc-dcic - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-binfmt-misc
# kernel-module-binfmt-misc - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-binfmt-misc
# kernel-module-binfmt-misc - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-configfs
# kernel-module-configfs - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-configfs
# kernel-module-configfs - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-msdos
# kernel-module-msdos - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-msdos
# kernel-module-msdos - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-isofs
# kernel-module-isofs - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-isofs
# kernel-module-isofs - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-nls-iso8859-15
# kernel-module-nls-iso8859-15 - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-nls-iso8859-15
# kernel-module-nls-iso8859-15 - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-udf
# kernel-module-udf - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-udf
# kernel-module-udf - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-crc-ccitt
# kernel-module-crc-ccitt - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-crc-ccitt
# kernel-module-crc-ccitt - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-crc-itu-t
# kernel-module-crc-itu-t - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-crc-itu-t
# kernel-module-crc-itu-t - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-crc7
# kernel-module-crc7 - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-crc7
# kernel-module-crc7 - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-libcrc32c
# kernel-module-libcrc32c - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-libcrc32c
# kernel-module-libcrc32c - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-snd-hwdep
# kernel-module-snd-hwdep - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-snd-hwdep
# kernel-module-snd-hwdep - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-snd-rawmidi
# kernel-module-snd-rawmidi - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-snd-rawmidi
# kernel-module-snd-rawmidi - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-snd-usb-audio
# kernel-module-snd-usb-audio - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-snd-usb-audio
# kernel-module-snd-usb-audio - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%post -n kernel-module-snd-usbmidi-lib
# kernel-module-snd-usbmidi-lib - postinst
#!/bin/sh
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	# image.bbclass will call depmodwrapper after everything is installed,
	# no need to do it here as well
	:
fi



%postun -n kernel-module-snd-usbmidi-lib
# kernel-module-snd-usbmidi-lib - postrm
#!/bin/sh
if [ "$1" = "0" ] ; then
if [ -z "$D" ]; then
	depmod -a 3.14.61-fslc+g327d5c9
else
	depmodwrapper -a -b $D 3.14.61-fslc+g327d5c9
fi
fi

%files -n kernel
%defattr(-,-,-,-)

%files -n kernel-3.14.61-fslc+g327d5c9
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
"/lib/modules/3.14.61-fslc+g327d5c9/modules.order"
"/lib/modules/3.14.61-fslc+g327d5c9/modules.builtin"

%files -n kernel-vmlinux
%defattr(-,-,-,-)
%dir "/boot"
"/boot/vmlinux-3.14.61-fslc+g327d5c9"

%files -n kernel-image-3.14.61-fslc+g327d5c9
%defattr(-,-,-,-)
%dir "/boot"
"/boot/zImage-3.14.61-fslc+g327d5c9"

%files -n kernel-dev
%defattr(-,-,-,-)
%dir "/boot"
"/boot/config-3.14.61-fslc+g327d5c9"
"/boot/Module.symvers-3.14.61-fslc+g327d5c9"
"/boot/System.map-3.14.61-fslc+g327d5c9"

%files -n kernel-modules
%defattr(-,-,-,-)

%files -n kernel-devicetree
%defattr(-,-,-,-)
%dir "/boot"
"/boot/devicetree-zImage-imx6q-sabresd-enetirq.dtb"
"/boot/devicetree-zImage-imx6q-sabresd-btwifi.dtb"
"/boot/devicetree-zImage-imx6q-sabresd-hdcp.dtb"
"/boot/devicetree-zImage-imx6q-sabresd.dtb"
"/boot/devicetree-zImage-imx6q-sabresd-ldo.dtb"

%files -n kernel-module-tcrypt
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/crypto"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/crypto/tcrypt.ko"

%files -n kernel-module-i2c-algo-pca
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c/algos"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c/algos/i2c-algo-pca.ko"

%files -n kernel-module-i2c-algo-pcf
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c/algos"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/i2c/algos/i2c-algo-pcf.ko"

%files -n kernel-module-evbug
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input/evbug.ko"

%files -n kernel-module-psmouse
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input/mouse"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input/mouse/psmouse.ko"

%files -n kernel-module-serport
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input/serio"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/input/serio/serport.ko"

%files -n kernel-module-adv7180-tvin
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/adv7180_tvin.ko"

%files -n kernel-module-ipu-bg-overlay-sdc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ipu_bg_overlay_sdc.ko"

%files -n kernel-module-ipu-csi-enc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ipu_csi_enc.ko"

%files -n kernel-module-ipu-fg-overlay-sdc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ipu_fg_overlay_sdc.ko"

%files -n kernel-module-ipu-prp-enc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ipu_prp_enc.ko"

%files -n kernel-module-ipu-still
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ipu_still.ko"

%files -n kernel-module-mxc-v4l2-capture
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/mxc_v4l2_capture.ko"

%files -n kernel-module-ov5640-camera-int
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ov5640_camera_int.ko"

%files -n kernel-module-ov5640-camera-mipi-int
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ov5640_camera_mipi_int.ko"

%files -n kernel-module-ov5642-camera
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/ov5642_camera.ko"

%files -n kernel-module-v4l2-int-device
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/capture/v4l2-int-device.ko"

%files -n kernel-module-mx6s-capture
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/mx6s_capture.ko"

%files -n kernel-module-mxc-mipi-csi
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/mxc_mipi_csi.ko"

%files -n kernel-module-mxc-vadc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/mxc_vadc.ko"

%files -n kernel-module-ov5640-camera
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/ov5640_camera.ko"

%files -n kernel-module-ov5640-camera-mipi
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/ov5640_camera_mipi.ko"

%files -n kernel-module-ov5647-camera-mipi
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/platform/mxc/subdev/ov5647_camera_mipi.ko"

%files -n kernel-module-gspca-main
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb/gspca"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb/gspca/gspca_main.ko"

%files -n kernel-module-uvcvideo
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb/uvc"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/usb/uvc/uvcvideo.ko"

%files -n kernel-module-videobuf2-vmalloc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/v4l2-core"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/media/v4l2-core/videobuf2-vmalloc.ko"

%files -n kernel-module-asix
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/asix.ko"

%files -n kernel-module-ax88179-178a
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/ax88179_178a.ko"

%files -n kernel-module-cdc-eem
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/cdc_eem.ko"

%files -n kernel-module-cdc-ether
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/cdc_ether.ko"

%files -n kernel-module-cdc-ncm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/cdc_ncm.ko"

%files -n kernel-module-cdc-subset
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/cdc_subset.ko"

%files -n kernel-module-net1080
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/net1080.ko"

%files -n kernel-module-pegasus
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/pegasus.ko"

%files -n kernel-module-r8152
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/r8152.ko"

%files -n kernel-module-rtl8150
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/rtl8150.ko"

%files -n kernel-module-usbnet
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/usbnet.ko"

%files -n kernel-module-zaurus
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/usb/zaurus.ko"

%files -n kernel-module-bcmdhd
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/wireless"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/wireless/bcmdhd"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/net/wireless/bcmdhd/bcmdhd.ko"

%files -n kernel-module-cdc-acm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/class"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/class/cdc-acm.ko"

%files -n kernel-module-g-ether
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/g_ether.ko"

%files -n kernel-module-g-mass-storage
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/g_mass_storage.ko"

%files -n kernel-module-g-ncm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/g_ncm.ko"

%files -n kernel-module-g-serial
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/g_serial.ko"

%files -n kernel-module-g-zero
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/g_zero.ko"

%files -n kernel-module-gadgetfs
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/gadgetfs.ko"

%files -n kernel-module-libcomposite
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/libcomposite.ko"

%files -n kernel-module-u-ether
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/u_ether.ko"

%files -n kernel-module-u-serial
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/u_serial.ko"

%files -n kernel-module-usb-f-acm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_acm.ko"

%files -n kernel-module-usb-f-ecm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_ecm.ko"

%files -n kernel-module-usb-f-ecm-subset
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_ecm_subset.ko"

%files -n kernel-module-usb-f-eem
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_eem.ko"

%files -n kernel-module-usb-f-fs
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_fs.ko"

%files -n kernel-module-usb-f-mass-storage
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_mass_storage.ko"

%files -n kernel-module-usb-f-ncm
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_ncm.ko"

%files -n kernel-module-usb-f-obex
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_obex.ko"

%files -n kernel-module-usb-f-rndis
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_rndis.ko"

%files -n kernel-module-usb-f-serial
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_serial.ko"

%files -n kernel-module-usb-f-ss-lb
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/gadget/usb_f_ss_lb.ko"

%files -n kernel-module-ftdi-sio
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial/ftdi_sio.ko"

%files -n kernel-module-option
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial/option.ko"

%files -n kernel-module-usb-wwan
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial/usb_wwan.ko"

%files -n kernel-module-usbserial
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/usb/serial/usbserial.ko"

%files -n kernel-module-mxc-dcic
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/video"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/video/mxc"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/drivers/video/mxc/mxc_dcic.ko"

%files -n kernel-module-binfmt-misc
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/binfmt_misc.ko"

%files -n kernel-module-configfs
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/configfs"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/configfs/configfs.ko"

%files -n kernel-module-msdos
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/fat"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/fat/msdos.ko"

%files -n kernel-module-isofs
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/isofs"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/isofs/isofs.ko"

%files -n kernel-module-nls-iso8859-15
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/nls"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/nls/nls_iso8859-15.ko"

%files -n kernel-module-udf
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/udf"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/fs/udf/udf.ko"

%files -n kernel-module-crc-ccitt
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib/crc-ccitt.ko"

%files -n kernel-module-crc-itu-t
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib/crc-itu-t.ko"

%files -n kernel-module-crc7
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib/crc7.ko"

%files -n kernel-module-libcrc32c
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/lib/libcrc32c.ko"

%files -n kernel-module-snd-hwdep
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/core"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/core/snd-hwdep.ko"

%files -n kernel-module-snd-rawmidi
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/core"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/core/snd-rawmidi.ko"

%files -n kernel-module-snd-usb-audio
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/usb/snd-usb-audio.ko"

%files -n kernel-module-snd-usbmidi-lib
%defattr(-,-,-,-)
%dir "/lib"
%dir "/lib/modules"
%dir "/lib/modules/3.14.61-fslc+g327d5c9"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound"
%dir "/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/usb"
"/lib/modules/3.14.61-fslc+g327d5c9/kernel/sound/usb/snd-usbmidi-lib.ko"

