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
	{ 0xeb8b3d75, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xd6b6e62a, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xf6f70e56, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1447dd72, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23f09bbd, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xef43c0ae, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xac14e7d4, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x24fb72c7, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x8c88feae, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x98071f21, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x36b9800b, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x35d1179, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xe279d5de, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xaf63f9dd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd0fb7744, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x53f9e2e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x121e5127, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa193df96, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x745583ff, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xdefeb810, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3797a5e7, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x509356af, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x248446e7, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x383c4e7c, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4e2a1c4c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x2998387e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xd3d149c2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb82ba57e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73fed3c3, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x4b50f220, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x416874f3, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x87eed61f, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc8d784fb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4f0eefeb, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x58918013, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xda39dd00, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "02799CD4F2B7619C14E3F84");
