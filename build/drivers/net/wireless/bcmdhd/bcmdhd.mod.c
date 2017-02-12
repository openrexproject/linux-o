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
	{ 0x1c5e0ede, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9c6a569, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x1cd260a6, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xb021fbc8, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xef6dbbe9, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xcd78ce39, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xd687529d, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xc1e5883, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x9aca444b, __VMLINUX_SYMBOL_STR(get_monotonic_boottime) },
	{ 0x2fbc9b2e, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x3db5e0fb, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xd867338f, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9bb70b75, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xd919dc2c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x60e70a65, __VMLINUX_SYMBOL_STR(cfg80211_del_sta) },
	{ 0xa7645254, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfb01ff87, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xf5ed71c, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x849b9cb7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfcd57f6, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb48677a, __VMLINUX_SYMBOL_STR(__kfifo_init) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5e2b3aac, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x121e5127, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa193df96, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4ab6fe32, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3af8e087, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x3cdb25dd, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd0fc8a5, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7e5cfd7f, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x15f32ac7, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7478742e, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x45c0d200, __VMLINUX_SYMBOL_STR(__pskb_copy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe7a60c62, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xb82ba57e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0x181e0298, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8c88feae, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfa48e21c, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xf7f11c18, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc7e636ab, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6fa8ab3c, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x95a85b3e, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xaafa1869, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xe74ca0e7, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x85c5956, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd9605d4c, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb04ad8a1, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xeb630db4, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x974a4f8f, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x8753a75a, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x65a6ac75, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0xc4e914b9, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3e77ff4b, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x193b593f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x7aa206f6, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x39afdbfe, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x390a8df, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x45b8a9b1, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xe2db326a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4faf5c76, __VMLINUX_SYMBOL_STR(wiphy_new) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf8b31c86, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x2e2fac7b, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x9a39ad1f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2215ac8d, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa613a70, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width_frame) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x8fc9b2f8, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x505c4152, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x745583ff, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xec6797a9, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xcbac64e0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3fb3e62, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x5b7fc30c, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x7bcba96, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x49296c69, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xf43404e, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3d903ad2, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xda58d72b, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xc1713e42, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x56734b75, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6886cbee, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xa5935bf3, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x895b3900, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x73fed3c3, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaf63f9dd, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc6cac244, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x4f5607d, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xe279d5de, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4a16b73e, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xc50c58ef, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xfdaf0133, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe6e7c15e, __VMLINUX_SYMBOL_STR(regulator_get) },
	{ 0x8c4a9102, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x63401e08, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x8bbb1429, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xce965892, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x2297c0ed, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x59630160, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x6c44bf40, __VMLINUX_SYMBOL_STR(wifi_card_detect) },
	{ 0x4322ca18, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x36b9800b, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");

MODULE_INFO(srcversion, "846E24E1458E9D0BE5E2871");