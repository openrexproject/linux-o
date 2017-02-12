#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd0b03f3a, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x25505c75, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x416874f3, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4e2a1c4c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdc886417, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x710a80f9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xcabbfda5, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xda39dd00, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb59f421f, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x14dde76c, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xbb74a685, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_no_suspend) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa9e6f568, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xc1356df3, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b50f220, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe0316ffe, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x872553e8, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x98071f21, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";


MODULE_INFO(srcversion, "9572E42F98372214BC6FDE9");
