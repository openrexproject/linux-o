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
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x11c9185c, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0xea6e3003, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x2b7a6de8, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x3101fa63, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xe2870eef, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xada62da0, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaecd2813, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x294154fa, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x21567722, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x7bcba96, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a53d6a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa95c707, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x17143f01, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x88167a18, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xc290906e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x5c877a8c, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7bd07cbc, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadc*");

MODULE_INFO(srcversion, "9954E19F759852A7C3293C0");
