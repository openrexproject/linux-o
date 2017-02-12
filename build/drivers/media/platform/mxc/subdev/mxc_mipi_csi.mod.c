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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfdaf0133, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x849b9cb7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc88f759, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port_parent) },
	{ 0x3d41904f, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x52ba14fa, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2870eef, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xec4fa503, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9e44b9b7, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xada62da0, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaecd2813, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf3aa7abb, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7bd07cbc, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x90705b7f, __VMLINUX_SYMBOL_STR(syscon_node_to_regmap) },
	{ 0xe35c5285, __VMLINUX_SYMBOL_STR(of_find_node_by_phandle) },
	{ 0x5755bbee, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x285bc195, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x3b8b1c19, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x21567722, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x8440ca78, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x7eede2c5, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xd5875a9b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x43632d7d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x6518dcf8, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3101fa63, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x88167a18, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x95e804af, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x17143f01, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x92b1080b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x17af91d0, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0xa95c707, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0xd687529d, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xc290906e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2297c0ed, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a53d6a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x5c877a8c, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x294154fa, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csi*");

MODULE_INFO(srcversion, "C8DF5FEF07CB5ACBBE3D4B9");
