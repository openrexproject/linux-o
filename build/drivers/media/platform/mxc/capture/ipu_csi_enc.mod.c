#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd0b03f3a, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd801607e, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0xc1e5883, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x3e82786d, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x261641c5, __VMLINUX_SYMBOL_STR(ipu_clear_buffer_ready) },
	{ 0xc7d1855f, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0x4613fd82, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe98623af, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0xb8130c30, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x98036c19, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0x336b1b4, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0x79900bc4, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xd733e29d, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0x1a8f1dc9, __VMLINUX_SYMBOL_STR(ipu_update_channel_buffer) },
	{ 0xa1409d5b, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xca2a3d63, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0xbb6102d9, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0xe870d2c8, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0x3636dd42, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0x24a79310, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0xee02510a, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x27d0ee27, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0x63b9cdf, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0x4be0e398, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8c2f0438, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0x37d2c303, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";


MODULE_INFO(srcversion, "66C84A2906B21D4146CEF31");
