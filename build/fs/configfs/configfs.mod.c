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
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xafa7f2b5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x4a09d2da, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x138b125c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xef6dbbe9, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9651f98b, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x6a5bbea5, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x893f3949, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xc898234f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x6de36a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x4287584b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9fd24c3d, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xd9faa5f9, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x1ec7b20, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1766e6c4, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x3209bde1, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x596c2d00, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0xbd7d6228, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x770e7948, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x7d81ed30, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0xf6ca9f1d, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2d383d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8387ff5a, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0x1efb3913, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xab1985d7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf629b885, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x307fd164, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{        0, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x8ed00e23, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x39597d0e, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x85ae8112, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3ff77484, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xb8c7ba43, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x184c472, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfdb363b9, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0xdc0a48f1, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0xedc55b8e, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xd757e866, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x84a65f5, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x5fcec081, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x89e2f92c, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xbcfa5c27, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xceaab923, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x7ea61082, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe94b0acc, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb82a7fc1, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x3d775c1a, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC343C23C059E620E9187E1");
