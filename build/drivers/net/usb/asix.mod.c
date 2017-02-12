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
	{ 0x248446e7, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd3d149c2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdde88364, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xd839ef4c, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xdfe05bc3, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2382f2dd, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xde4f63ee, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x46d8ace7, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xb2f9c79e, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xa51e8d69, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x53ef77f4, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xba739f9c, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xb6bb3af1, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf5eb8d56, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x121e5127, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6529f03a, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xa2c18781, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xabc6201e, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2014795, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0xa448c11a, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x1447dd72, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1a70b6bd, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xbaff15e9, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xae38ce61, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xc7e636ab, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x2eaa3b67, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xc3dcba6f, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc50a96fe, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x486f2385, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xbed0d4a2, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x1f526df, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x30b7cae7, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x83c66f43, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x6406f6fa, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x642a2a06, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xe667e839, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xa5301643, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x2bd5c22b, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x940f7dd3, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x383c4e7c, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xfbeca9c3, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xf6f70e56, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfdc3a918, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x58fd852f, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x48ba8a8a, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x23f09bbd, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa7c83896, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x32118709, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdb05287d, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xdefeb810, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xdd5ce229, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xdcd09453, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x350ed498, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x16c1dee, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "56F06772F16803A552E996C");
