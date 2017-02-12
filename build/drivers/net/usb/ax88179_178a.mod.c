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
	{ 0xb2f9c79e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2382f2dd, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xeb8b3d75, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xabc6201e, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x350ed498, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x940f7dd3, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x83c66f43, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xf6f70e56, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x2eaa3b67, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xba739f9c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xa5301643, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x1447dd72, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23f09bbd, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc3dcba6f, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xd839ef4c, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbaff15e9, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xa448c11a, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xef43c0ae, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb6bb3af1, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x99af7ada, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x1f526df, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfdc3a918, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x248446e7, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x46d8ace7, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x2998387e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x32ec00e4, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0xdcd09453, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xa51e8d69, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xd3d149c2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xdd5fad7c, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xeb630db4, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe667e839, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x78eb7bcf, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2bfd98b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xc7e636ab, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x609adc77, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76A3B8EBD187A8970B310F9");
