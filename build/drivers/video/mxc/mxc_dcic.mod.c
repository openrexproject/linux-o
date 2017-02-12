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
	{ 0xfdaf0133, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x849b9cb7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3b8b1c19, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xb8cd8518, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc70f0176, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x88f08ac9, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x4ba037c0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6c404301, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x7bd07cbc, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x71930ed3, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2b7a6de8, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0xd2aab254, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x8440ca78, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9bf01a20, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5c877a8c, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x294154fa, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a53d6a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xc290906e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe3b8b474, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xed67d08, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xffea4d20, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-dcic*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-dcic*");

MODULE_INFO(srcversion, "A1652BA98651818366A42B3");
