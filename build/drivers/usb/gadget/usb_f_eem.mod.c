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
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc796f3ce, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xd5a2fa9d, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x1f35a494, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x42f242f4, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x78eb7bcf, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf56c6c61, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x1c13a9a7, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xe2bfd98b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd69d1fa7, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x4f4ca792, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0x2dcc638d, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x312941fc, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x381dc583, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xb82ba57e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x39316667, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xc7e636ab, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xa021dab3, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xd94bc20f, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xeb630db4, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4d0d477a, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x509356af, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xbed0d4a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb8724ed1, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1612e211, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x6ae30c61, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xb356027d, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x60a07c3a, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x81eede3d, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdefeb810, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4c071ff1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "900537CDCDC4CC080D50FB6");
