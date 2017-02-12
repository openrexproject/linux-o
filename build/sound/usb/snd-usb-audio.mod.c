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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd9d2bb03, __VMLINUX_SYMBOL_STR(snd_usbmidi_disconnect) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa286a234, __VMLINUX_SYMBOL_STR(snd_pcm_format_name) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x62407b55, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x8a8230a2, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x13d14662, __VMLINUX_SYMBOL_STR(snd_usbmidi_create) },
	{ 0xac14e7d4, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x416874f3, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9cd87f39, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd8042808, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4e2a1c4c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x10f5564, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3219b0a5, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaccbb9ed, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb9638db4, __VMLINUX_SYMBOL_STR(snd_pcm_rate_to_rate_bit) },
	{ 0xe83a0f5c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x27bfb75f, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf5b6ef0e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x1447dd72, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf4b37a81, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2bbf6172, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x71ec2285, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x3e3c160c, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x730dd113, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x58918013, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8c52a52e, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xca8c674c, __VMLINUX_SYMBOL_STR(snd_pcm_new_stream) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x936c1f7d, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x24d3059f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2e131d11, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x6bb1caac, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xda39dd00, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36b2f244, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x55b2a923, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x3890aeb4, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0x35d1179, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x222b1b9d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xa3c5e3f5, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xa23f1fff, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x2be86f6e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x23f09bbd, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8b9c5d26, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x3c5fc5cd, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x2426afbd, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd1fe058f, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x207158af, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbf1e12ad, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x1bcf6bd4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x6a7581ec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x6406eac, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x40aca756, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b50f220, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7d4e2276, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xe0316ffe, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x98071f21, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib,snd-hwdep";

MODULE_ALIAS("usb:v0403pB8D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep3F19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pB832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0850d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F0d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F5d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp08F6d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v046Dp0990d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0499p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1004d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p100Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p100Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p101Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p102Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p103Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p104Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p104Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0499p1055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p105Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p1509d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p150Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p5009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p500Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0499p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p003Bd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0074d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p00E6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0108d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0582p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p*d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v06F8pB000d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1011d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1021d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1031d010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p1033d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p1041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2003d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2008d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p200Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0763p2030d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2031d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2080d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0763p2081d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v07CFp6801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FDp0001d*dc*dsc02dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v086Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0944p0200d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0944p0201d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v09E8p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep2040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0A4Ep4040d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0012d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0013d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0014d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Dp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0001d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p0002d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1235p4661d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1235p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v133Ep0815d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13E5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p752Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F38p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4752p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7104p2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic01isc01ip*in*");
MODULE_ALIAS("usb:v0DBAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DBAp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v200Cp100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc03ip*in*");
MODULE_ALIAS("usb:v0D8Cp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc01ip*in*");

MODULE_INFO(srcversion, "D99956B95B79306052E2253");
