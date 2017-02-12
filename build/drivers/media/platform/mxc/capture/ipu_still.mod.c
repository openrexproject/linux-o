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
	{ 0x3e82786d, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0xc7d1855f, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0x4613fd82, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe98623af, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0xb8130c30, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79900bc4, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0xd733e29d, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xa1409d5b, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xee02510a, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x63b9cdf, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8c2f0438, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E61B72CB7821993B479560");
