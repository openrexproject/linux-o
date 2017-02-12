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
	{ 0xd839ef4c, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xc3dcba6f, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xb2f9c79e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2382f2dd, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x1447dd72, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23f09bbd, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x248446e7, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xdcd09453, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x1f526df, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xe2bfd98b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xeb630db4, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfdc3a918, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xbaff15e9, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xdefeb810, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc7e636ab, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbed0d4a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
