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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc20e6c6d, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xb61774f0, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x893f3949, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xc898234f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaffe4db1, __VMLINUX_SYMBOL_STR(aio_complete) },
	{ 0x9fd24c3d, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x420af77, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0x1033f91c, __VMLINUX_SYMBOL_STR(usb_gadget_set_state) },
	{ 0xfe408346, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1ec7b20, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3209bde1, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3efe74c5, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x770e7948, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xa441de22, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd11327d4, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8fbc78b6, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbff09a36, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0x3ff77484, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf070d35d, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd757e866, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfeb5e3e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x84a65f5, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x5fcec081, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbcfa5c27, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xceaab923, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xced8fcf0, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0x305f8e6, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3937df41, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7ea61082, __VMLINUX_SYMBOL_STR(d_instantiate) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "16C143FE3B87FA18F625336");
