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
	{ 0xf9a53d6a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x632401a7, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7eede2c5, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x5c877a8c, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x50e9f1c1, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd687529d, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x1b3085da, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xc290906e, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xd537d632, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0xfcdf0f15, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x74429d1e, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368382e2, __VMLINUX_SYMBOL_STR(of_get_named_gpiod_flags) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xdfc40f8f, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0xcfdbcdb7, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc595dac6, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd5875a9b, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x294154fa, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xd094e4b4, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x3bd9075b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xbdaebdd7, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2297c0ed, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-int-device";

MODULE_ALIAS("i2c:ov5642");
MODULE_ALIAS("i2c:ov564x");

MODULE_INFO(srcversion, "32FA118960AA0C6F853C27B");
